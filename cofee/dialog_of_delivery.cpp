#include "dialog_of_delivery.h"
#include "ui_dialog_of_delivery.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>
#include <QtGui>

Dialog_of_delivery::Dialog_of_delivery(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog_of_delivery)
{

    ui->setupUi(this);

    boxes[0] = ui->chocolate_Box;
    boxes[1] = ui->cinnamon_Box;
    boxes[2] = ui->cream_Box;
    boxes[3] = ui->espresso_Box;
    boxes[4] = ui->flour_Box;
    boxes[5] = ui->milk_Box;
    boxes[6] = ui->sugar_Box;

    for (int i = 0; i < 7; i++) {
        boxes[i]->setMaximum(100000);
    }
}

void Dialog_of_delivery::sendQuery(QString dep, QSqlDatabase m_db, QString sup_login)
{
    int num;
    QString current_query;
    QString log_query;
    QSqlQuery query(m_db);

    current_query = "select name from products order by name";
    query.exec(current_query);
    query.first();

    qDebug() << dep;

    for(int i = 0; i < 7; i++) {
        product_names[i] = query.value(0).toString();
        qDebug() << product_names[i];
        query.next();
    }

    for (int i =0; i < 7; i++) {
        if (num = boxes[i]->text().toInt(), num !=0){
            current_query = "UPDATE warehouse SET quantity = quantity + " + QString::number(num) + " WHERE dep_name = '" + dep + "' AND p_name = '" + product_names[i] + "'";
            if(!query.exec(current_query)){
                qDebug() << "Querry error!" << query.lastError();
                QMessageBox::warning(this, "Не удалось зарегистрировать заказ!", "Не удалось зарегистрировать заказ! Сервер базы данных не принял запрос");
                return;
            }
            else {
                log_query = "INSERT INTO delivery (p_name, quantity, dep_name, sup_log, time) VALUES ('"+ product_names[i] +"', '"+ QString::number(num) +"', '"+ dep +"', '"+ sup_login +"', NOW())";
                query.exec(log_query);
            }
        }
    }
}


Dialog_of_delivery::~Dialog_of_delivery()
{
    delete ui;
}
