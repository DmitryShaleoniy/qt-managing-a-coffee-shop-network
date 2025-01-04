#include "dialog_delivery.h"
#include "ui_dialog_delivery.h"
#include "QSqlQuery"

Dialog_Delivery::Dialog_Delivery(QWidget *parent)
    : QDialog(parent)
{
    ui = new Ui::Dialog_Delivery;
    ui->setupUi(this);

    boxes[0]= ui->chocolate_Box;

}

void Dialog_Delivery::sendQuery(QString dep, QSqlDatabase m_db, QString sup_log)
{
    QSqlQuery query(m_db);
    QString current_query = "UPDATE ";
}

Dialog_Delivery::~Dialog_Delivery()
{
    delete ui;
}
