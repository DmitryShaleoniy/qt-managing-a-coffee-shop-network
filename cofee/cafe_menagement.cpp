#include "cafe_menagement.h"
#include "ui_cafe_menagement.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QPalette>
#include <QSqlQuery>
#include <qmessagebox.h>

cafe_menagement::cafe_menagement(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::cafe_menagement)
    , model(new QSqlQueryModel(this))
{
    QWidget::setFixedSize(671, 220);

    QPalette m_pal;
    //m_pal.setBrush(QPalette::Window, QBrush(QPixmap("./title.png")));
    this->setPalette(m_pal);
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QPSQL");
    QString databaseName = "cofee";
    QString hostName     = "localhost";
    int     port         = 5432;
    QString userName     = "postgres";
    QString password     = "Asqw1245!";
    db.setDatabaseName(databaseName);
    db.setHostName    (hostName);
    db.setPort        (port   );
    db.setUserName    (userName);
    db.setPassword    (password);
    if(db.open()) {
        qDebug() << "opened";
        //QSqlQueryModel *model = new QSqlQueryModel;
        //model->setQuery("SELECT name FROM departments", db);
        model -> setQuery("SELECT name FROM departments", db);
        ui->cafe_tables->setModel(model);
        ui->cafe_tables->horizontalHeader()->resizeSection(0, 256);
    }
    else {
        qDebug() << db.lastError().text();
    }
}

cafe_menagement::~cafe_menagement()
{
    delete ui;
}

void cafe_menagement::on_cafe_tables_doubleClicked(const QModelIndex &index)
{
    QString name = index.data().toString();
    current_cafe = name;
    ui->dynamicLable->setText(name);
}


void cafe_menagement::on_AddNewCafe_button_clicked()
{
    if (NewCafe.exec()==QDialog::Accepted){
        QString new_name;
        QString new_adress;

        NewCafe.getparameters(new_name, new_adress);

        model -> setQuery("INSERT INTO departments(name, adress) VALUES (\'"+ new_name +"\',\'"+new_adress+"\');", db);
        model -> setQuery("SELECT name FROM departments", db);
        ui->cafe_tables->setModel(model);
        ui->cafe_tables->horizontalHeader()->resizeSection(0, 256);
    }
}


void cafe_menagement::on_removeCafe_button_clicked()
{
    model -> setQuery("DELETE FROM departments WHERE name = \'" + current_cafe + "\'", db);
    model -> setQuery("SELECT name FROM departments", db);
    ui->cafe_tables->setModel(model);
    ui->cafe_tables->horizontalHeader()->resizeSection(0, 256);
}


void cafe_menagement::on_allTimemoney_button_clicked()
{
    QString summa;
    QSqlQuery query(db);
    QString current_query = "SELECT SUM(cost) FROM orders WHERE dep_name = \'" + current_cafe + "\';";
    if(!query.exec(current_query)) {
        qDebug() << "Querry error!" << query.lastError();
        return;
    }
    else {
        query.first();
        summa = query.value(0).toString();
    }

    QMessageBox::information(this, "Прибыль в " + current_cafe, "Прибыль в " + current_cafe+" = " +summa);
}


void cafe_menagement::on_money_button_clicked()
{
    if(TimeChoice.exec() ==QDialog::Accepted){
        QString date1;
        QString date2;
        TimeChoice.getparameters(date1, date2);

        QString summa;
        QSqlQuery query(db);
        QString current_query = "SELECT SUM(cost) FROM orders WHERE dep_name = \'" + current_cafe + "\' AND time >= \'" + date1 +"\' AND time <= \'" + date2 + "\';";
        if(!query.exec(current_query)) {
            qDebug() << "Querry error!" << query.lastError();
            return;
        }
        else {
            query.first();
            summa = query.value(0).toString();
        }

        QMessageBox::information(this, "Прибыль в " + current_cafe, "Прибыль в " + current_cafe+" = " +summa);
    }
}
