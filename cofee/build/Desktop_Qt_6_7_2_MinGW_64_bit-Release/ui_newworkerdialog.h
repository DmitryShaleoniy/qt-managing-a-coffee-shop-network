/********************************************************************************
** Form generated from reading UI file 'newworkerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWWORKERDIALOG_H
#define UI_NEWWORKERDIALOG_H

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

class Ui_NewWorkerDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *nameEdit;
    QLineEdit *loginEdit;
    QLineEdit *passwordEdit;
    QLineEdit *depEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewWorkerDialog)
    {
        if (NewWorkerDialog->objectName().isEmpty())
            NewWorkerDialog->setObjectName("NewWorkerDialog");
        NewWorkerDialog->resize(400, 300);
        gridLayout = new QGridLayout(NewWorkerDialog);
        gridLayout->setObjectName("gridLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(NewWorkerDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(NewWorkerDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(NewWorkerDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(NewWorkerDialog);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        nameEdit = new QLineEdit(NewWorkerDialog);
        nameEdit->setObjectName("nameEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);

        loginEdit = new QLineEdit(NewWorkerDialog);
        loginEdit->setObjectName("loginEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, loginEdit);

        passwordEdit = new QLineEdit(NewWorkerDialog);
        passwordEdit->setObjectName("passwordEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, passwordEdit);

        depEdit = new QLineEdit(NewWorkerDialog);
        depEdit->setObjectName("depEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, depEdit);

        buttonBox = new QDialogButtonBox(NewWorkerDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        formLayout->setWidget(4, QFormLayout::FieldRole, buttonBox);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);


        retranslateUi(NewWorkerDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NewWorkerDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NewWorkerDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NewWorkerDialog);
    } // setupUi

    void retranslateUi(QDialog *NewWorkerDialog)
    {
        NewWorkerDialog->setWindowTitle(QCoreApplication::translate("NewWorkerDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NewWorkerDialog", "\320\230\320\274\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("NewWorkerDialog", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_3->setText(QCoreApplication::translate("NewWorkerDialog", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("NewWorkerDialog", "\320\232\320\260\321\204\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewWorkerDialog: public Ui_NewWorkerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWWORKERDIALOG_H
