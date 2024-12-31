#ifndef ADD_CAFE_INTERFACE_DIALOG_H
#define ADD_CAFE_INTERFACE_DIALOG_H

#include <QDialog>

namespace Ui {
class add_cafe_interface_Dialog;
}

class add_cafe_interface_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit add_cafe_interface_Dialog(QWidget *parent = nullptr);
    ~add_cafe_interface_Dialog();
    void getparameters(QString &name, QString &adress);

private:
    Ui::add_cafe_interface_Dialog *ui;
};

#endif // ADD_CAFE_INTERFACE_DIALOG_H
