/********************************************************************************
** Form generated from reading UI file 'supplier_interface.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPLIER_INTERFACE_H
#define UI_SUPPLIER_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_supplier_interface
{
public:

    void setupUi(QWidget *supplier_interface)
    {
        if (supplier_interface->objectName().isEmpty())
            supplier_interface->setObjectName("supplier_interface");
        supplier_interface->resize(400, 300);

        retranslateUi(supplier_interface);

        QMetaObject::connectSlotsByName(supplier_interface);
    } // setupUi

    void retranslateUi(QWidget *supplier_interface)
    {
        supplier_interface->setWindowTitle(QCoreApplication::translate("supplier_interface", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class supplier_interface: public Ui_supplier_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPLIER_INTERFACE_H
