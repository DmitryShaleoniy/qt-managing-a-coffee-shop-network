#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "ui_log_in_dialog.h"
#include "ui_dialoglogin.h"
#include "QDebug"
#include <QSqlError>
#include <QSqlQueryModel>
#include <QTableView>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPalette m_pal;
    m_pal.setBrush(QPalette::Window, QBrush(QPixmap(QDir::currentPath() + "/title.png")));

    this->setPalette(m_pal);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_log_in_button_clicked()
{
    if(OpenDialog.exec()==QDialog::Accepted){
        qDebug("accepted");
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
        if(db.open()){
            qDebug("db_opened");
            QString user_Role;
            QString user_login;
            QString user_password;
            OpenDialog.getConnectionParameters(user_Role, user_login, user_password);
            //авторизация

            QSqlQuery query(db);
            QString current_query = "SELECT COUNT(*) FROM \"" + user_Role + "\" WHERE login = \'"
                                    + user_login + "\' AND password = \'" + user_password + "\';";
            if(!query.exec(current_query)) {
                qDebug() << "Querry error!" << query.lastError();
            }
            else {
                query.first();
                int key = query.value(0).toInt();
                if(!key) {
                    qDebug()<<"autorization failed";
                    this->on_log_in_button_clicked();
                }
                else{
                    qDebug() << "autorization success";

                    enum Roles{
                        Admin = 1, Cashier, Supplier
                    };

                    Roles switch_role = Supplier;

                    if(user_Role == "Admin")
                        switch_role = Admin;
                    else if(user_Role == "Cashier")
                        switch_role = Cashier;

                    switch(switch_role){
                    case Admin: {
                        qDebug() << "Admin role selected";
                        admin_interface.show();
                        this->close();
                        break;
                    };
                    case Cashier: {
                        qDebug() << "Cashier role selected";
                        CashierInterface.show();
                        CashierInterface.makeLogin(user_login, db);
                        this->close();
                        break;
                    };
                    case Supplier: {
                        qDebug() << "Supplier role selected";
                        SupplierInterface.show();
                        SupplierInterface.make_login(user_login, db);
                        this->close();
                        break;
                    };
                    }
                }
            }
        }
        else{
            qDebug() << db.lastError().text();
        }
    }
}

void MainWindow::on_exit_button_clicked()
{
    this->close();
}

