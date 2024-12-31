#include "add_cafe_interface_dialog.h"
#include "ui_add_cafe_interface_dialog.h"
#include <QString>

add_cafe_interface_Dialog::add_cafe_interface_Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::add_cafe_interface_Dialog)
{
    QWidget::setFixedSize(370, 110);
    ui->setupUi(this);
}

add_cafe_interface_Dialog::~add_cafe_interface_Dialog()
{
    delete ui;
}

void add_cafe_interface_Dialog::getparameters(QString &name, QString &adress){
    name = ui->name_edit->text();
    adress = ui->adress_edit->text();
}
