#ifndef SUPPLIER_INTERFACE_H
#define SUPPLIER_INTERFACE_H

#include <QWidget>
#include <QSqlQuery>
#include <QtSql/QSqlQueryModel>
#include <QSqlDatabase>
#include <QFile>
#include "dialog_of_delivery.h"

namespace Ui {
class supplier_interface;
}

class supplier_interface : public QWidget
{
    Q_OBJECT

public:
    explicit supplier_interface(QWidget *parent = nullptr);
    void make_login(QString login, QSqlDatabase m_db);
    ~supplier_interface();

private slots:
    void on_delivery_button_clicked();

    void on_department_comboBox_currentTextChanged(const QString &arg1);

private:
    void make_map(QString dep);
    QString dep;
    Ui::supplier_interface *ui;
    QString u_login;
    QString u_name;
    QSqlDatabase db;
    QSqlQueryModel *model;
    QSqlQuery* query;
    QString htmlPath;
    QFile* htmlFile;
    Dialog_of_delivery dialog;
};

#endif // SUPPLIER_INTERFACE_H
