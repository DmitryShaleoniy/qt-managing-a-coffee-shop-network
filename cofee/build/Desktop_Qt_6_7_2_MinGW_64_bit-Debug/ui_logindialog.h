/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogInDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *login_lable;
    QLabel *password_label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QComboBox *comboBox;

    void setupUi(QWidget *LogInDialog)
    {
        if (LogInDialog->objectName().isEmpty())
            LogInDialog->setObjectName("LogInDialog");
        LogInDialog->resize(555, 186);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LogInDialog->sizePolicy().hasHeightForWidth());
        LogInDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(LogInDialog);
        gridLayout->setObjectName("gridLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(LogInDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        login_lable = new QLabel(LogInDialog);
        login_lable->setObjectName("login_lable");

        formLayout->setWidget(1, QFormLayout::LabelRole, login_lable);

        password_label = new QLabel(LogInDialog);
        password_label->setObjectName("password_label");

        formLayout->setWidget(2, QFormLayout::LabelRole, password_label);

        lineEdit = new QLineEdit(LogInDialog);
        lineEdit->setObjectName("lineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit);

        lineEdit_2 = new QLineEdit(LogInDialog);
        lineEdit_2->setObjectName("lineEdit_2");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        pushButton = new QPushButton(LogInDialog);
        pushButton->setObjectName("pushButton");

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButton);

        comboBox = new QComboBox(LogInDialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);


        retranslateUi(LogInDialog);

        QMetaObject::connectSlotsByName(LogInDialog);
    } // setupUi

    void retranslateUi(QWidget *LogInDialog)
    {
        LogInDialog->setWindowTitle(QCoreApplication::translate("LogInDialog", "Form", nullptr));
        label->setText(QCoreApplication::translate("LogInDialog", "Role", nullptr));
        login_lable->setText(QCoreApplication::translate("LogInDialog", "Login", nullptr));
        password_label->setText(QCoreApplication::translate("LogInDialog", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("LogInDialog", "Log In", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("LogInDialog", " Admin", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("LogInDialog", " Cashier", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("LogInDialog", " Supplier", nullptr));

    } // retranslateUi

};

namespace Ui {
    class LogInDialog: public Ui_LogInDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
