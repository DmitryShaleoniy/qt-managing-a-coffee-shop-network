#include "supplier_interface.h"
#include "ui_supplier_interface.h"

supplier_interface::supplier_interface(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::supplier_interface)
{
    ui->setupUi(this);
}

supplier_interface::~supplier_interface()
{
    delete ui;
}
