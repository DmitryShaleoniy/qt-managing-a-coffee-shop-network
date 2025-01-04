#include "employemenagement.h"
#include "ui_employemenagement.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QPalette>
#include <QSqlQuery>
#include <qmessagebox.h>

EmployeMenagement::EmployeMenagement(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::EmployeMenagement)
    , model(new QSqlQueryModel(this))
{
    //QWidget::setFixedSize(800, 220);

    //QPalette m_pal;
    //m_pal.setBrush(QPalette::Window, QBrush(QPixmap("./title.png")));
    //this->setPalette(m_pal);
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
        model -> setQuery("SELECT name, department FROM \"Cashier\"", db);
        ui->worker_tables->setModel(model);
        ui->worker_tables->horizontalHeader()->resizeSection(0, 256);
    }
}

EmployeMenagement::~EmployeMenagement()
{
    delete ui;
}

void EmployeMenagement::on_worker_tables_doubleClicked(const QModelIndex &index)
{
    QString name = index.data().toString();
    current_cafe = name;
    ui->dynamicLable->setText(name);
}

void EmployeMenagement::on_payment_button_clicked()
{
    if(TimeChoice.exec() ==QDialog::Accepted){
        QString date1;
        QString date2;
        TimeChoice.getparameters(date1, date2);

        QString summa;
        QSqlQuery query(db);
        QString current_query = "SELECT (SUM(cost)*0.1) FROM orders JOIN \"Cashier\" ON orders.c_login = \"Cashier\".login WHERE \"Cashier\".name = \'" + current_cafe + "\' AND time >= \'" + date1 +"\' AND time <= \'" + date2 + "\';";
        if(!query.exec(current_query)) {
            qDebug() << "Querry error!" << query.lastError();
            return;
        }
        else {
            query.first();
            summa = query.value(0).toString();
        }

        QMessageBox::information(this, "Зарплата " + current_cafe, "Зарплата " + current_cafe+" = " +summa);
    }
}

void EmployeMenagement::on_fire_worker_clicked()
{
    model -> setQuery("DELETE FROM \"Cashier\" WHERE name = \'" + current_cafe + "\'", db);
    model -> setQuery("SELECT name FROM \"Cashier\"", db);
    ui->worker_tables->setModel(model);
    ui->worker_tables->horizontalHeader()->resizeSection(0, 256);
}

void EmployeMenagement::on_hire_worker_clicked()
{
    if (NewWorker.exec()==QDialog::Accepted){
        QString new_name;
        QString new_login;
        QString new_password;
        QString new_dep;

        NewWorker.getparameters(new_name, new_login, new_password, new_dep);

        model -> setQuery("INSERT INTO \"Cashier\"(name, login, password, department) VALUES (\'"+ new_name +"\',\'"+new_login+"\', \'"+ new_password +"\',\'"+new_dep+"\');", db);
        model -> setQuery("SELECT name FROM \"Cashier\"", db);
        ui->worker_tables->setModel(model);
        ui->worker_tables->horizontalHeader()->resizeSection(0, 256);
    }
}
