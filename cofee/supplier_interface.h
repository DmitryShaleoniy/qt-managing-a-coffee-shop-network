#ifndef SUPPLIER_INTERFACE_H
#define SUPPLIER_INTERFACE_H

#include <QWidget>

namespace Ui {
class supplier_interface;
}

class supplier_interface : public QWidget
{
    Q_OBJECT

public:
    explicit supplier_interface(QWidget *parent = nullptr);
    ~supplier_interface();

private:
    Ui::supplier_interface *ui;
};

#endif // SUPPLIER_INTERFACE_H
