/********************************************************************************
** Form generated from reading UI file 'add_cafe_interface_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_CAFE_INTERFACE_DIALOG_H
#define UI_ADD_CAFE_INTERFACE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_add_cafe_interface_Dialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *name_edit;
    QLabel *label_2;
    QLineEdit *adress_edit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *add_cafe_interface_Dialog)
    {
        if (add_cafe_interface_Dialog->objectName().isEmpty())
            add_cafe_interface_Dialog->setObjectName("add_cafe_interface_Dialog");
        add_cafe_interface_Dialog->resize(369, 169);
        gridLayout = new QGridLayout(add_cafe_interface_Dialog);
        gridLayout->setObjectName("gridLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(add_cafe_interface_Dialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        name_edit = new QLineEdit(add_cafe_interface_Dialog);
        name_edit->setObjectName("name_edit");

        formLayout->setWidget(0, QFormLayout::FieldRole, name_edit);

        label_2 = new QLabel(add_cafe_interface_Dialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        adress_edit = new QLineEdit(add_cafe_interface_Dialog);
        adress_edit->setObjectName("adress_edit");

        formLayout->setWidget(1, QFormLayout::FieldRole, adress_edit);

        buttonBox = new QDialogButtonBox(add_cafe_interface_Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        formLayout->setWidget(2, QFormLayout::FieldRole, buttonBox);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);


        retranslateUi(add_cafe_interface_Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, add_cafe_interface_Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, add_cafe_interface_Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(add_cafe_interface_Dialog);
    } // setupUi

    void retranslateUi(QDialog *add_cafe_interface_Dialog)
    {
        add_cafe_interface_Dialog->setWindowTitle(QCoreApplication::translate("add_cafe_interface_Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("add_cafe_interface_Dialog", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("add_cafe_interface_Dialog", "\320\220\320\264\321\200\320\265\321\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_cafe_interface_Dialog: public Ui_add_cafe_interface_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_CAFE_INTERFACE_DIALOG_H
