#ifndef DIALOG_OF_DELIVERY_H
#define DIALOG_OF_DELIVERY_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSpinBox>
#include <QSqlDatabase>

namespace Ui {
class Dialog_of_delivery;
}

class Dialog_of_delivery : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_of_delivery(QWidget *parent = nullptr);
    void sendQuery(QString dep, QSqlDatabase m_db, QString sup_login);
    ~Dialog_of_delivery();

private:
    Ui::Dialog_of_delivery *ui;
    QString product_names[7];
    QSpinBox* boxes[7];
};

#endif // DIALOG_OF_DELIVERY_H
