#ifndef ADD_CAFE_INTERFACE_H
#define ADD_CAFE_INTERFACE_H

#include <QWidget>
#include <QString>

namespace Ui {
class add_cafe_interface;
}

class add_cafe_interface : public QWidget
{
    Q_OBJECT

public:
    explicit add_cafe_interface(QWidget *parent = nullptr);
    ~add_cafe_interface();
    void getparameters(QString &name, QString &adress);

private slots:
    void on_addButton_clicked();

private:
    Ui::add_cafe_interface *ui;
};

#endif // ADD_CAFE_INTERFACE_H
