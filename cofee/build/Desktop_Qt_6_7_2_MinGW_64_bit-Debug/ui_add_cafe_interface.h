/********************************************************************************
** Form generated from reading UI file 'add_cafe_interface.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_CAFE_INTERFACE_H
#define UI_ADD_CAFE_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_cafe_interface
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *name_edit;
    QLabel *label_2;
    QLineEdit *adress_edit;
    QPushButton *addButton;

    void setupUi(QWidget *add_cafe_interface)
    {
        if (add_cafe_interface->objectName().isEmpty())
            add_cafe_interface->setObjectName("add_cafe_interface");
        add_cafe_interface->resize(400, 142);
        formLayout = new QFormLayout(add_cafe_interface);
        formLayout->setObjectName("formLayout");
        label = new QLabel(add_cafe_interface);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        name_edit = new QLineEdit(add_cafe_interface);
        name_edit->setObjectName("name_edit");

        formLayout->setWidget(0, QFormLayout::FieldRole, name_edit);

        label_2 = new QLabel(add_cafe_interface);
        label_2->setObjectName("label_2");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        adress_edit = new QLineEdit(add_cafe_interface);
        adress_edit->setObjectName("adress_edit");

        formLayout->setWidget(2, QFormLayout::FieldRole, adress_edit);

        addButton = new QPushButton(add_cafe_interface);
        addButton->setObjectName("addButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::SpanningRole, addButton);


        retranslateUi(add_cafe_interface);

        QMetaObject::connectSlotsByName(add_cafe_interface);
    } // setupUi

    void retranslateUi(QWidget *add_cafe_interface)
    {
        add_cafe_interface->setWindowTitle(QCoreApplication::translate("add_cafe_interface", "Form", nullptr));
        label->setText(QCoreApplication::translate("add_cafe_interface", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("add_cafe_interface", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        addButton->setText(QCoreApplication::translate("add_cafe_interface", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_cafe_interface: public Ui_add_cafe_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_CAFE_INTERFACE_H
