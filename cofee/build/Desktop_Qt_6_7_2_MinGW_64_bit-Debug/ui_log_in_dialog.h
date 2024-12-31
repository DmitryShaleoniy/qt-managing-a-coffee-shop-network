/********************************************************************************
** Form generated from reading UI file 'log_in_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_IN_DIALOG_H
#define UI_LOG_IN_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *role_label;
    QLabel *login_lable;
    QLineEdit *login_line;
    QLabel *password_lable;
    QLineEdit *password_line;
    QFontComboBox *role_selector;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(418, 142);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName("gridLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        role_label = new QLabel(Dialog);
        role_label->setObjectName("role_label");

        formLayout->setWidget(0, QFormLayout::LabelRole, role_label);

        login_lable = new QLabel(Dialog);
        login_lable->setObjectName("login_lable");

        formLayout->setWidget(1, QFormLayout::LabelRole, login_lable);

        login_line = new QLineEdit(Dialog);
        login_line->setObjectName("login_line");

        formLayout->setWidget(1, QFormLayout::FieldRole, login_line);

        password_lable = new QLabel(Dialog);
        password_lable->setObjectName("password_lable");

        formLayout->setWidget(2, QFormLayout::LabelRole, password_lable);

        password_line = new QLineEdit(Dialog);
        password_line->setObjectName("password_line");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(password_line->sizePolicy().hasHeightForWidth());
        password_line->setSizePolicy(sizePolicy);
        password_line->setAutoFillBackground(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, password_line);

        role_selector = new QFontComboBox(Dialog);
        role_selector->setObjectName("role_selector");

        formLayout->setWidget(0, QFormLayout::FieldRole, role_selector);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        role_label->setText(QCoreApplication::translate("Dialog", "Role", nullptr));
        login_lable->setText(QCoreApplication::translate("Dialog", "Login", nullptr));
        password_lable->setText(QCoreApplication::translate("Dialog", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_IN_DIALOG_H
