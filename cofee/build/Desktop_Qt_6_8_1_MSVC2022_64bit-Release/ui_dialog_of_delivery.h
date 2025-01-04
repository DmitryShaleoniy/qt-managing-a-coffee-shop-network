/********************************************************************************
** Form generated from reading UI file 'dialog_of_delivery.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_OF_DELIVERY_H
#define UI_DIALOG_OF_DELIVERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog_of_delivery
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *chocolate_Box;
    QLabel *label_2;
    QSpinBox *cinnamon_Box;
    QLabel *label_3;
    QSpinBox *cream_Box;
    QLabel *label_4;
    QSpinBox *espresso_Box;
    QLabel *label_5;
    QSpinBox *flour_Box;
    QLabel *label_6;
    QSpinBox *milk_Box;
    QLabel *label_7;
    QSpinBox *sugar_Box;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog_of_delivery)
    {
        if (Dialog_of_delivery->objectName().isEmpty())
            Dialog_of_delivery->setObjectName("Dialog_of_delivery");
        Dialog_of_delivery->resize(400, 300);
        gridLayout = new QGridLayout(Dialog_of_delivery);
        gridLayout->setObjectName("gridLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(Dialog_of_delivery);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        chocolate_Box = new QSpinBox(Dialog_of_delivery);
        chocolate_Box->setObjectName("chocolate_Box");

        formLayout->setWidget(0, QFormLayout::FieldRole, chocolate_Box);

        label_2 = new QLabel(Dialog_of_delivery);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        cinnamon_Box = new QSpinBox(Dialog_of_delivery);
        cinnamon_Box->setObjectName("cinnamon_Box");

        formLayout->setWidget(1, QFormLayout::FieldRole, cinnamon_Box);

        label_3 = new QLabel(Dialog_of_delivery);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        cream_Box = new QSpinBox(Dialog_of_delivery);
        cream_Box->setObjectName("cream_Box");

        formLayout->setWidget(2, QFormLayout::FieldRole, cream_Box);

        label_4 = new QLabel(Dialog_of_delivery);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        espresso_Box = new QSpinBox(Dialog_of_delivery);
        espresso_Box->setObjectName("espresso_Box");

        formLayout->setWidget(3, QFormLayout::FieldRole, espresso_Box);

        label_5 = new QLabel(Dialog_of_delivery);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        flour_Box = new QSpinBox(Dialog_of_delivery);
        flour_Box->setObjectName("flour_Box");

        formLayout->setWidget(4, QFormLayout::FieldRole, flour_Box);

        label_6 = new QLabel(Dialog_of_delivery);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        milk_Box = new QSpinBox(Dialog_of_delivery);
        milk_Box->setObjectName("milk_Box");

        formLayout->setWidget(5, QFormLayout::FieldRole, milk_Box);

        label_7 = new QLabel(Dialog_of_delivery);
        label_7->setObjectName("label_7");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        sugar_Box = new QSpinBox(Dialog_of_delivery);
        sugar_Box->setObjectName("sugar_Box");

        formLayout->setWidget(6, QFormLayout::FieldRole, sugar_Box);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Dialog_of_delivery);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        gridLayout->addWidget(buttonBox, 0, 1, 1, 1);


        retranslateUi(Dialog_of_delivery);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog_of_delivery, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog_of_delivery, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog_of_delivery);
    } // setupUi

    void retranslateUi(QDialog *Dialog_of_delivery)
    {
        Dialog_of_delivery->setWindowTitle(QCoreApplication::translate("Dialog_of_delivery", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog_of_delivery", "chocolate", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_of_delivery", "cinnamon", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog_of_delivery", "cream", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog_of_delivery", "espresso", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog_of_delivery", "flour", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog_of_delivery", "milk", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog_of_delivery", "sugar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_of_delivery: public Ui_Dialog_of_delivery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_OF_DELIVERY_H
