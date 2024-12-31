#include "newworker.h"
#include "ui_newworker.h"

NewWorker::NewWorker(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::NewWorker)
{
    ui->setupUi(this);
}

NewWorker::~NewWorker()
{
    delete ui;
}

void NewWorker::getparameters(QString &name, QString &login, QString &password, QString &dep) {
    name = ui->name_edit->text();
    login = ui ->login_edit->text();
    password = ui ->password_edit->text();
    dep = ui ->dep_edit->text();
}
