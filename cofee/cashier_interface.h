#ifndef CASHIER_INTERFACE_H
#define CASHIER_INTERFACE_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSpinBox>

namespace Ui {
class cashier_interface;
}

class cashier_interface : public QWidget
{
    Q_OBJECT

public:
    explicit cashier_interface(QWidget *parent = nullptr);
    ~cashier_interface();
    void makeLogin(QString login, QSqlDatabase m_db);

private slots:
    void on_start_work_button_clicked();

    void on_end_work_button_clicked();

    void on_pushButton_clicked();

private:
    Ui::cashier_interface *ui;
    QString u_login;
    QString u_dep;
    QString u_name;
    QSqlQueryModel *model;
    QSqlDatabase db;
    QString start_time;
    bool closed_work = 1;
    QString menu_names[10];
    int available[10];
    QSpinBox* boxes[10];
};

#endif // CASHIER_INTERFACE_H
