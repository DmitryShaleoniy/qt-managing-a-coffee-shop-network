#ifndef DIALOG_DELIVERY_H
#define DIALOG_DELIVERY_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSpinBox>

namespace Ui {
class Dialog_Delivery;
}

class Dialog_Delivery : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_Delivery(QWidget *parent = nullptr);
    void sendQuery(QString dep, QSqlDatabase m_db, QString);
    ~Dialog_Delivery();

private:
    Ui::Dialog_Delivery *ui;
    QString product_names[7];
    QSpinBox* boxes[7];
};

#endif // DIALOG_DELIVERY_H
