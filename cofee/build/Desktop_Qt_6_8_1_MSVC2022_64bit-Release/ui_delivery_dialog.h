/********************************************************************************
** Form generated from reading UI file 'delivery_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELIVERY_DIALOG_H
#define UI_DELIVERY_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
    QSpinBox *spinBox_7;
    QSpinBox *spinBox_8;
    QSpinBox *spinBox_9;
    QSpinBox *spinBox_10;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(499, 478);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(120, 340, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        formLayoutWidget = new QWidget(Dialog);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 10, 251, 433));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName("label_9");

        formLayout->setWidget(8, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName("label_10");

        formLayout->setWidget(9, QFormLayout::LabelRole, label_10);

        spinBox = new QSpinBox(formLayoutWidget);
        spinBox->setObjectName("spinBox");

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBox);

        spinBox_2 = new QSpinBox(formLayoutWidget);
        spinBox_2->setObjectName("spinBox_2");

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBox_2);

        spinBox_3 = new QSpinBox(formLayoutWidget);
        spinBox_3->setObjectName("spinBox_3");

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBox_3);

        spinBox_4 = new QSpinBox(formLayoutWidget);
        spinBox_4->setObjectName("spinBox_4");

        formLayout->setWidget(3, QFormLayout::FieldRole, spinBox_4);

        spinBox_5 = new QSpinBox(formLayoutWidget);
        spinBox_5->setObjectName("spinBox_5");

        formLayout->setWidget(4, QFormLayout::FieldRole, spinBox_5);

        spinBox_6 = new QSpinBox(formLayoutWidget);
        spinBox_6->setObjectName("spinBox_6");

        formLayout->setWidget(5, QFormLayout::FieldRole, spinBox_6);

        spinBox_7 = new QSpinBox(formLayoutWidget);
        spinBox_7->setObjectName("spinBox_7");

        formLayout->setWidget(6, QFormLayout::FieldRole, spinBox_7);

        spinBox_8 = new QSpinBox(formLayoutWidget);
        spinBox_8->setObjectName("spinBox_8");

        formLayout->setWidget(7, QFormLayout::FieldRole, spinBox_8);

        spinBox_9 = new QSpinBox(formLayoutWidget);
        spinBox_9->setObjectName("spinBox_9");

        formLayout->setWidget(8, QFormLayout::FieldRole, spinBox_9);

        spinBox_10 = new QSpinBox(formLayoutWidget);
        spinBox_10->setObjectName("spinBox_10");

        formLayout->setWidget(9, QFormLayout::FieldRole, spinBox_10);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        label_10->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELIVERY_DIALOG_H
