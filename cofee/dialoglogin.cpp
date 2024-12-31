#include "dialoglogin.h"
#include "ui_dialoglogin.h"

DialogLogIn::DialogLogIn(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogLogIn)
{
    QWidget::setFixedSize(500, 140);
    ui->setupUi(this);
}

DialogLogIn::~DialogLogIn() {
    delete ui;
}

void DialogLogIn::getConnectionParameters(QString &role,
                                          QString &login,
                                          QString &password)
{
    role=ui->role_selector->currentText();
    login = ui->loginEdit->text();
    password = ui ->passwordEdit->text();
}
