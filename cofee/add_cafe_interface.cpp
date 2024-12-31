#include "add_cafe_interface.h"
#include "ui_add_cafe_interface.h"

add_cafe_interface::add_cafe_interface(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::add_cafe_interface)
{
    QWidget::setFixedSize(400, 142);
    ui->setupUi(this);
}

add_cafe_interface::~add_cafe_interface()
{
    delete ui;
}

void add_cafe_interface::on_addButton_clicked()
{
    this->close();
}

void add_cafe_interface::getparameters(QString &name, QString &adress){
    name = ui->name_edit->text();
    adress = ui->adress_edit->text();
}

