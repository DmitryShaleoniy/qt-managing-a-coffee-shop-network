/********************************************************************************
** Form generated from reading UI file 'time_choice_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIME_CHOICE_DIALOG_H
#define UI_TIME_CHOICE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_time_choice_dialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;
    QDateEdit *dateEdit_1;
    QDateEdit *dateEdit_2;

    void setupUi(QDialog *time_choice_dialog)
    {
        if (time_choice_dialog->objectName().isEmpty())
            time_choice_dialog->setObjectName("time_choice_dialog");
        time_choice_dialog->resize(400, 181);
        gridLayout = new QGridLayout(time_choice_dialog);
        gridLayout->setObjectName("gridLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(time_choice_dialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(time_choice_dialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        buttonBox = new QDialogButtonBox(time_choice_dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        formLayout->setWidget(2, QFormLayout::FieldRole, buttonBox);

        dateEdit_1 = new QDateEdit(time_choice_dialog);
        dateEdit_1->setObjectName("dateEdit_1");

        formLayout->setWidget(0, QFormLayout::FieldRole, dateEdit_1);

        dateEdit_2 = new QDateEdit(time_choice_dialog);
        dateEdit_2->setObjectName("dateEdit_2");

        formLayout->setWidget(1, QFormLayout::FieldRole, dateEdit_2);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);


        retranslateUi(time_choice_dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, time_choice_dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, time_choice_dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(time_choice_dialog);
    } // setupUi

    void retranslateUi(QDialog *time_choice_dialog)
    {
        time_choice_dialog->setWindowTitle(QCoreApplication::translate("time_choice_dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("time_choice_dialog", "\320\224\320\260\321\202\320\260 \320\275\320\260\321\207\320\260\320\273\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("time_choice_dialog", "\320\224\320\260\321\202\320\260 \320\272\320\276\320\275\321\206\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class time_choice_dialog: public Ui_time_choice_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIME_CHOICE_DIALOG_H
