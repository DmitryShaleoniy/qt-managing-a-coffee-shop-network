#include "cashier_interface.h"
#include "ui_cashier_interface.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QPalette>
#include <QSqlQuery>
#include <qmessagebox.h>
#include <QMessageBox>

cashier_interface::cashier_interface(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::cashier_interface)
    , model(new QSqlQueryModel(this))
{
    QWidget::setFixedSize(968, 568);
    ui->setupUi(this);
    ui->end_work_button->setEnabled(false);

    boxes[5] = (ui->espresso   );
    boxes[7] = (ui->latte      );
    boxes[3] = (ui->Cappuccino );
    boxes[0] = (ui->Americano  );
    boxes[9] = (ui->Mocha      );
    boxes[6] = (ui->Flat_white );
    boxes[8] = (ui->Milk       );
    boxes[1] = (ui->Bun        );
    boxes[4] = (ui->Cookie     );
    boxes[2] = (ui->Candy      );

    QSqlQuery query(db);
    QString current_query = "SELECT name FROM menu ORDER BY name";
    query.exec(current_query);
    query.first();

    for(int i = 0; i < 10; i++) {
        menu_names[i] = query.value(0).toString();
        query.next();
    }
}


cashier_interface::~cashier_interface()
{
    if(!closed_work){
        model->setQuery("UPDATE cashier_logs SET time_out = NOW() WHERE c_login = \'"+ this->u_login +"\' AND time_out IS NULL;", db);
    }
    delete ui;

}

void cashier_interface::makeLogin(QString login, QSqlDatabase m_db)
{
    this->db = m_db;
    this->u_login = login;
    ui->name_label->setText(login);
    QSqlQuery query(db);

    if (query.exec("SELECT name, department FROM \"Cashier\" WHERE login = \'" + u_login + "\'")) {
        query.first();
        u_name = query.value(0).toString();
        u_dep = query.value(1).toString();
    }
    ui->name_label->setText(u_dep);
}

void cashier_interface::on_start_work_button_clicked()
{
    QSqlQuery query_in(db);
    query_in.exec("INSERT INTO cashier_logs (c_login, time_in, c_name) VALUES (\'"+ u_login +"\', NOW(), \'"+ u_name +"\')");
    ui->start_work_button->setEnabled(false);
    QSqlQuery query(db);
    QString current_query = "SELECT time_in FROM cashier_logs WHERE c_login = \'"+ this->u_login +"\'ORDER BY time_in DESC LIMIT 1;";
    if(!query.exec(current_query)) {
        qDebug() << "Querry error!" << query.lastError();
    }
    else {
        query.first();
        start_time = query.value(0).toString();
    }
    ui->end_work_button->setEnabled(true);
    closed_work = 0;
}

void cashier_interface::on_end_work_button_clicked()
{
    model->setQuery("UPDATE cashier_logs SET time_out = NOW() WHERE c_login = \'"+ this->u_login +"\' AND time_out IS NULL;", db);
    ui->end_work_button->setEnabled(false);
    ui->start_work_button->setEnabled(true);
    closed_work = 1;
}


void cashier_interface::on_pushButton_clicked()
{
    if(!closed_work) {
        int num = 0;
        int num_avaolable;
        int prod_num;
        QString coffeeNeedsQuery;
        QString finalQuery;
        QSqlQuery query_warehouse(db);
        QString warehouse_query;
        QSqlQuery query(db);
        QString current_query;
        QSqlQuery query_in(db);
        QString insert_query;
        for(int j = 0; j < 10; j++) {
            if(num = boxes[j]->text().toInt(), num !=0){
                coffeeNeedsQuery = R"(
                    WITH CoffeeNeeds AS (
                        SELECT
                            f.m_name,
                            f.p_name,
                            f.quantity AS needed_quantity,
                            w.dep_name,
                            COALESCE(w.quantity, 0) AS available_quantity
                        FROM
                            formula f
                        LEFT JOIN
                            warehouse w ON f.p_name = w.p_name
                    ),
                    AvailablePortions AS (
                        SELECT
                            m_name,
                            dep_name,
                            MIN(available_quantity / needed_quantity)::INT AS portions
                        FROM CoffeeNeeds
                        GROUP BY m_name, dep_name
                        HAVING MIN(available_quantity / needed_quantity) >= 1
                    )
                )";

                finalQuery = R"(
                    SELECT distinct
                        cn.m_name,
                        COALESCE(ap.portions, 0) AS portions_available
                    FROM
                        CoffeeNeeds cn
                    LEFT JOIN
                        AvailablePortions ap ON cn.m_name = ap.m_name AND cn.dep_name = ap.dep_name
                    WHERE cn.dep_name =
                )";
                //ORDER BY cn.dep_name, cn.m_name
                //current_query = "SELECT portions_available FROM (SELECT f.m_name, w.dep_name, SUM(GREATEST(0, FLOOR(COALESCE(w.quantity, 0) / f.quantity))) as portions_available FROM formula f JOIN warehouse w ON f.p_name = w.p_name GROUP BY f.m_name, w.dep_name ORDER BY f.m_name, w.dep_name) WHERE dep_name = '"+u_dep+"' AND m_name = '"+ menu_names[j] +"';";
                current_query = coffeeNeedsQuery + finalQuery +"'" +u_dep + "' AND cn.m_name = '" + menu_names[j] + "'";
                qDebug() << current_query;
                if(!query.exec(current_query)) {
                    qDebug() << "Querry error!" << query.lastError();
                    QMessageBox::warning(this, "Не удалось зарегистрировать заказ!", "Не удалось зарегистрировать заказ! Сервер базы данных не принял запрос");
                }
                else {
                    query.first();
                    num_avaolable = query.value(1).toInt();
                    qDebug() << query.value(0).toString();
                    if(num > num_avaolable){
                        QMessageBox::warning(this, "Нехватка продуктов!", "Не удалось добавить продукт " +menu_names[j]+" в заказ, не хватает продуктов!");
                    }
                    else {
                        insert_query = "insert into orders (m_name, c_login, dep_name, quantity) values ('" + menu_names[j] + "', '"+ u_login +"', '"+ u_dep +"', " + QString::number(num) + ")";
                        query_in.exec(insert_query);

                        insert_query = "select count(*) from formula where m_name = '" + menu_names[j] + "'";
                        query_in.exec(insert_query);
                        query_in.first();
                        prod_num = query_in.value(0).toInt();

                        insert_query = "select p_name, quantity from formula where m_name = '" + menu_names[j] + "'";


                        if(!query_in.exec(insert_query)) {
                            qDebug() << "Querry error!" << query.lastError();
                            QMessageBox::warning(this, "Не удалось зарегистрировать заказ!", "Не удалось зарегистрировать заказ! Сервер базы данных не принял запрос");
                            return;
                        }
                        else{
                            query_in.first();
                            qDebug() << query_in.value(1).toString();
                            for(int i = 0; i < prod_num; i++) {
                                //qDebug() << query_in.value(1).toString();
                                warehouse_query = "UPDATE warehouse SET quantity = quantity - "+ query_in.value(1).toString() +" * " + QString::number(num) + " WHERE p_name = '" + query_in.value(0).toString() + "'AND dep_name = '" + u_dep + "';";
                                query_warehouse.exec(warehouse_query);
                                query_in.next();
                            }
                        }
                    }
                    boxes[j]->setValue(0);

                }
            }
        }
        // if(num = boxes[0]->text().toInt(), num !=0){
        //     QMessageBox::warning(this, "Необходимо открыть смену", "Прежде че");
        // }
    }
    else {
        QMessageBox::warning(this, "Необходимо открыть смену", "Прежде чем принять заказ необходимо открыть смену");
    }
}
