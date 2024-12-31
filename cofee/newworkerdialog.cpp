#include "newworkerdialog.h"
#include "ui_newworkerdialog.h"

NewWorkerDialog::NewWorkerDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::NewWorkerDialog)
{
    ui->setupUi(this);
}

NewWorkerDialog::~NewWorkerDialog()
{
    delete ui;
}

void NewWorkerDialog::getparameters(QString &name, QString &login, QString &password, QString &dep)
{
    name = ui->nameEdit->text();
    login = ui->loginEdit->text();
    password = ui->passwordEdit->text();
    dep = ui->depEdit->text();
}
