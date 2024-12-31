#ifndef CAFE_MENAGEMENT_H
#define CAFE_MENAGEMENT_H

#include <QWidget>
#include <QDataStream>
#include <QString>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include "add_cafe_interface_dialog.h"
#include "time_choice_dialog.h"

namespace Ui {
class cafe_menagement;
}

class cafe_menagement : public QWidget
{
    Q_OBJECT

public:
    explicit cafe_menagement(QWidget *parent = nullptr);
    void make_parent(QWidget *par);
    ~cafe_menagement();

private slots:
    void on_cafe_tables_doubleClicked(const QModelIndex &index);

    void on_AddNewCafe_button_clicked();

    void on_removeCafe_button_clicked();

    void on_allTimemoney_button_clicked();

    void on_money_button_clicked();

private:
    Ui::cafe_menagement *ui;
    QSqlDatabase db;
    QString current_cafe;
    QSqlQueryModel *model;
    add_cafe_interface_Dialog NewCafe;
    time_choice_dialog TimeChoice;
};

#endif // CAFE_MENAGEMENT_H
