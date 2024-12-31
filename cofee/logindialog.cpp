#include "logindialog.h"
#include "ui_logindialog.h"

LogInDialog::LogInDialog(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LogInDialog)
{
    QWidget::setFixedSize(555, 140);
    ui->setupUi(this);
}

LogInDialog::~LogInDialog()
{
    delete ui;
}
