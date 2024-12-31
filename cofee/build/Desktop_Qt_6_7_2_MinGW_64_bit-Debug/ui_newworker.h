/********************************************************************************
** Form generated from reading UI file 'newworker.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWWORKER_H
#define UI_NEWWORKER_H

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

class Ui_NewWorker
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *name_edit;
    QLabel *label_2;
    QLineEdit *login_edit;
    QDialogButtonBox *buttonBox;
    QLineEdit *password_edit;
    QLabel *label_3;
    QLineEdit *dep_edit;
    QLabel *cafe_label;

    void setupUi(QDialog *NewWorker)
    {
        if (NewWorker->objectName().isEmpty())
            NewWorker->setObjectName("NewWorker");
        NewWorker->resize(400, 300);
        gridLayout = new QGridLayout(NewWorker);
        gridLayout->setObjectName("gridLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(NewWorker);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        name_edit = new QLineEdit(NewWorker);
        name_edit->setObjectName("name_edit");

        formLayout->setWidget(0, QFormLayout::FieldRole, name_edit);

        label_2 = new QLabel(NewWorker);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        login_edit = new QLineEdit(NewWorker);
        login_edit->setObjectName("login_edit");

        formLayout->setWidget(1, QFormLayout::FieldRole, login_edit);

        buttonBox = new QDialogButtonBox(NewWorker);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        formLayout->setWidget(4, QFormLayout::FieldRole, buttonBox);

        password_edit = new QLineEdit(NewWorker);
        password_edit->setObjectName("password_edit");

        formLayout->setWidget(2, QFormLayout::FieldRole, password_edit);

        label_3 = new QLabel(NewWorker);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        dep_edit = new QLineEdit(NewWorker);
        dep_edit->setObjectName("dep_edit");

        formLayout->setWidget(3, QFormLayout::FieldRole, dep_edit);

        cafe_label = new QLabel(NewWorker);
        cafe_label->setObjectName("cafe_label");

        formLayout->setWidget(3, QFormLayout::LabelRole, cafe_label);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);


        retranslateUi(NewWorker);

        QMetaObject::connectSlotsByName(NewWorker);
    } // setupUi

    void retranslateUi(QDialog *NewWorker)
    {
        NewWorker->setWindowTitle(QCoreApplication::translate("NewWorker", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NewWorker", "\320\230\320\274\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("NewWorker", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_3->setText(QCoreApplication::translate("NewWorker", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        cafe_label->setText(QCoreApplication::translate("NewWorker", "\320\232\320\276\321\204\320\265\320\271\320\275\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewWorker: public Ui_NewWorker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWWORKER_H
