#ifndef ADMININTERFACE_H
#define ADMININTERFACE_H

#include <QWidget>
#include <QDataStream>
#include <QSqlDatabase>
#include <QShortcut>
#include <QWidget>
#include <windows.h>
#include <cafe_menagement.h>
#include <employemenagement.h>

namespace Ui {
class AdminInterface;
}

class AdminInterface : public QWidget
{
    Q_OBJECT

public:
    explicit AdminInterface(QWidget *parent = nullptr);
    ~AdminInterface();

private slots:
    void on_listView_doubleClicked(const QModelIndex &index);

    void on_pushButton_clicked();

    void on_employee_menagement_button_clicked();

    void on_cafe_menagement_button_clicked();

private:
    Ui::AdminInterface *ui;
    QSqlDatabase db;
    QShortcut *shortcut;
    cafe_menagement CafeMenagement;
    EmployeMenagement worker;

    void runQuery(QString p_command = "");
    void updateObjects();
};

#endif // ADMININTERFACE_H
