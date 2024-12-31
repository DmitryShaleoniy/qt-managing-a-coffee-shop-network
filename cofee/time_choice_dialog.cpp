#include "time_choice_dialog.h"
#include "ui_time_choice_dialog.h"

time_choice_dialog::time_choice_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::time_choice_dialog)
{
    ui->setupUi(this);
}

time_choice_dialog::~time_choice_dialog()
{
    delete ui;
}

void time_choice_dialog::getparameters(QString &date1, QString &date2){
    date1 = ui->dateEdit_1->text();
    date2 = ui->dateEdit_2->text();
}
