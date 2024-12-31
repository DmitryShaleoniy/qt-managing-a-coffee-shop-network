/********************************************************************************
** Form generated from reading UI file 'dialoglogin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGIN_H
#define UI_DIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogLogIn
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *role_label;
    QLabel *login_label;
    QLabel *password_label;
    QLineEdit *passwordEdit;
    QLineEdit *loginEdit;
    QComboBox *role_selector;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogLogIn)
    {
        if (DialogLogIn->objectName().isEmpty())
            DialogLogIn->setObjectName("DialogLogIn");
        DialogLogIn->resize(667, 186);
        gridLayout = new QGridLayout(DialogLogIn);
        gridLayout->setObjectName("gridLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        role_label = new QLabel(DialogLogIn);
        role_label->setObjectName("role_label");

        formLayout->setWidget(0, QFormLayout::LabelRole, role_label);

        login_label = new QLabel(DialogLogIn);
        login_label->setObjectName("login_label");

        formLayout->setWidget(1, QFormLayout::LabelRole, login_label);

        password_label = new QLabel(DialogLogIn);
        password_label->setObjectName("password_label");

        formLayout->setWidget(2, QFormLayout::LabelRole, password_label);

        passwordEdit = new QLineEdit(DialogLogIn);
        passwordEdit->setObjectName("passwordEdit");
        QFont font;
        font.setBold(false);
        font.setStrikeOut(false);
        font.setHintingPreference(QFont::PreferDefaultHinting);
        passwordEdit->setFont(font);
        passwordEdit->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        passwordEdit->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        passwordEdit->setAutoFillBackground(false);
        passwordEdit->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, passwordEdit);

        loginEdit = new QLineEdit(DialogLogIn);
        loginEdit->setObjectName("loginEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, loginEdit);

        role_selector = new QComboBox(DialogLogIn);
        role_selector->addItem(QString());
        role_selector->addItem(QString());
        role_selector->addItem(QString());
        role_selector->setObjectName("role_selector");

        formLayout->setWidget(0, QFormLayout::FieldRole, role_selector);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DialogLogIn);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(DialogLogIn);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogLogIn, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogLogIn, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogLogIn);
    } // setupUi

    void retranslateUi(QDialog *DialogLogIn)
    {
        DialogLogIn->setWindowTitle(QCoreApplication::translate("DialogLogIn", "Dialog", nullptr));
        role_label->setText(QCoreApplication::translate("DialogLogIn", "Role", nullptr));
        login_label->setText(QCoreApplication::translate("DialogLogIn", "Login", nullptr));
        password_label->setText(QCoreApplication::translate("DialogLogIn", "Password", nullptr));
        role_selector->setItemText(0, QCoreApplication::translate("DialogLogIn", "Admin", nullptr));
        role_selector->setItemText(1, QCoreApplication::translate("DialogLogIn", "Cashier", nullptr));
        role_selector->setItemText(2, QCoreApplication::translate("DialogLogIn", "Supplier", nullptr));

    } // retranslateUi

};

namespace Ui {
    class DialogLogIn: public Ui_DialogLogIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H
