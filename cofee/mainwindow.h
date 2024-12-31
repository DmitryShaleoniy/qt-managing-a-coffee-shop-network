#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialoglogin.h"
#include <QDataStream>
#include <QSqlDatabase>
#include <QShortcut>
#include <admininterface.h>
#include <cashier_interface.h>
#include "supplier_interface.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_log_in_button_clicked();
    void on_exit_button_clicked();

private:
    Ui::MainWindow *ui;
    DialogLogIn OpenDialog;
    QSqlDatabase db;
    AdminInterface admin_interface;
    cashier_interface CashierInterface;
    supplier_interface SupplierInterface;
};
#endif // MAINWINDOW_H
