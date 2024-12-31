#ifndef EMPLOYEMENAGEMENT_H
#define EMPLOYEMENAGEMENT_H

#include <QWidget>
#include <QWidget>
#include <QDataStream>
#include <QString>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include "time_choice_dialog.h"
#include "newworkerdialog.h"

namespace Ui {
class EmployeMenagement;
}

class EmployeMenagement : public QWidget
{
    Q_OBJECT

public:
    explicit EmployeMenagement(QWidget *parent = nullptr);
    ~EmployeMenagement();

private slots:
    void on_worker_tables_doubleClicked(const QModelIndex &index);

    void on_payment_button_clicked();

    void on_fire_worker_clicked();

    void on_hire_worker_clicked();

private:
    Ui::EmployeMenagement *ui;
    QSqlDatabase db;
    QString current_cafe;
    QSqlQueryModel *model;
    time_choice_dialog TimeChoice;
    NewWorkerDialog NewWorker;
};

#endif // EMPLOYEMENAGEMENT_H
