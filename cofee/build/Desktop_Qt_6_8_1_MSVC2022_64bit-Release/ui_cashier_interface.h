/********************************************************************************
** Form generated from reading UI file 'cashier_interface.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASHIER_INTERFACE_H
#define UI_CASHIER_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cashier_interface
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *start_work_button;
    QPushButton *end_work_button;
    QLabel *label_latte;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *espresso;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *latte;
    QLabel *label_espresso;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpinBox *Cappuccino;
    QLabel *label_cappuccino;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QSpinBox *Americano;
    QLabel *label_americano;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QSpinBox *Mocha;
    QLabel *label_mocca;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QSpinBox *Flat_white;
    QLabel *label_flatwhite;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_12;
    QSpinBox *Milk;
    QLabel *label_milk;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_14;
    QSpinBox *Bun;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_15;
    QSpinBox *Cookie;
    QWidget *layoutWidget_10;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_16;
    QSpinBox *Candy;
    QLabel *label_bun;
    QLabel *label_cookie;
    QLabel *label_candy;
    QPushButton *pushButton;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *name_label;
    QLabel *dep_label;

    void setupUi(QWidget *cashier_interface)
    {
        if (cashier_interface->objectName().isEmpty())
            cashier_interface->setObjectName("cashier_interface");
        cashier_interface->resize(968, 568);
        layoutWidget = new QWidget(cashier_interface);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(720, 10, 231, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        start_work_button = new QPushButton(layoutWidget);
        start_work_button->setObjectName("start_work_button");

        verticalLayout->addWidget(start_work_button);

        end_work_button = new QPushButton(layoutWidget);
        end_work_button->setObjectName("end_work_button");

        verticalLayout->addWidget(end_work_button);

        label_latte = new QLabel(cashier_interface);
        label_latte->setObjectName("label_latte");
        label_latte->setGeometry(QRect(220, 150, 121, 101));
        label_latte->setScaledContents(true);
        layoutWidget1 = new QWidget(cashier_interface);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(30, 260, 140, 37));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        espresso = new QSpinBox(layoutWidget1);
        espresso->setObjectName("espresso");

        horizontalLayout->addWidget(espresso);

        layoutWidget_2 = new QWidget(cashier_interface);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(210, 260, 140, 37));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        latte = new QSpinBox(layoutWidget_2);
        latte->setObjectName("latte");

        horizontalLayout_2->addWidget(latte);

        label_espresso = new QLabel(cashier_interface);
        label_espresso->setObjectName("label_espresso");
        label_espresso->setGeometry(QRect(40, 150, 121, 101));
        label_espresso->setScaledContents(true);
        layoutWidget_3 = new QWidget(cashier_interface);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(370, 260, 163, 37));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        Cappuccino = new QSpinBox(layoutWidget_3);
        Cappuccino->setObjectName("Cappuccino");

        horizontalLayout_3->addWidget(Cappuccino);

        label_cappuccino = new QLabel(cashier_interface);
        label_cappuccino->setObjectName("label_cappuccino");
        label_cappuccino->setGeometry(QRect(390, 150, 121, 101));
        label_cappuccino->setScaledContents(true);
        layoutWidget_4 = new QWidget(cashier_interface);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(560, 260, 163, 37));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_4);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6);

        Americano = new QSpinBox(layoutWidget_4);
        Americano->setObjectName("Americano");

        horizontalLayout_4->addWidget(Americano);

        label_americano = new QLabel(cashier_interface);
        label_americano->setObjectName("label_americano");
        label_americano->setGeometry(QRect(580, 150, 121, 101));
        label_americano->setScaledContents(true);
        layoutWidget_5 = new QWidget(cashier_interface);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(750, 260, 163, 37));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_5);
        label_8->setObjectName("label_8");

        horizontalLayout_5->addWidget(label_8);

        Mocha = new QSpinBox(layoutWidget_5);
        Mocha->setObjectName("Mocha");

        horizontalLayout_5->addWidget(Mocha);

        label_mocca = new QLabel(cashier_interface);
        label_mocca->setObjectName("label_mocca");
        label_mocca->setGeometry(QRect(770, 150, 121, 101));
        label_mocca->setScaledContents(true);
        layoutWidget_6 = new QWidget(cashier_interface);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(20, 420, 163, 37));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_6);
        label_10->setObjectName("label_10");

        horizontalLayout_6->addWidget(label_10);

        Flat_white = new QSpinBox(layoutWidget_6);
        Flat_white->setObjectName("Flat_white");

        horizontalLayout_6->addWidget(Flat_white);

        label_flatwhite = new QLabel(cashier_interface);
        label_flatwhite->setObjectName("label_flatwhite");
        label_flatwhite->setGeometry(QRect(40, 310, 121, 101));
        label_flatwhite->setScaledContents(true);
        layoutWidget_7 = new QWidget(cashier_interface);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(210, 420, 141, 37));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget_7);
        label_12->setObjectName("label_12");

        horizontalLayout_7->addWidget(label_12);

        Milk = new QSpinBox(layoutWidget_7);
        Milk->setObjectName("Milk");

        horizontalLayout_7->addWidget(Milk);

        label_milk = new QLabel(cashier_interface);
        label_milk->setObjectName("label_milk");
        label_milk->setGeometry(QRect(220, 310, 121, 101));
        label_milk->setPixmap(QPixmap(QString::fromUtf8("C:/Users/jjjjj/OneDrive/\320\240\320\260\320\261\320\276\321\207\320\270\320\271 \321\201\321\202\320\276\320\273/75c5269c6bbd0a7876ee1c7212a697b9bb387c9f_full.jpg")));
        label_milk->setScaledContents(true);
        layoutWidget_8 = new QWidget(cashier_interface);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(370, 420, 163, 37));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget_8);
        label_14->setObjectName("label_14");

        horizontalLayout_8->addWidget(label_14);

        Bun = new QSpinBox(layoutWidget_8);
        Bun->setObjectName("Bun");

        horizontalLayout_8->addWidget(Bun);

        layoutWidget_9 = new QWidget(cashier_interface);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(560, 420, 163, 37));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget_9);
        label_15->setObjectName("label_15");

        horizontalLayout_9->addWidget(label_15);

        Cookie = new QSpinBox(layoutWidget_9);
        Cookie->setObjectName("Cookie");

        horizontalLayout_9->addWidget(Cookie);

        layoutWidget_10 = new QWidget(cashier_interface);
        layoutWidget_10->setObjectName("layoutWidget_10");
        layoutWidget_10->setGeometry(QRect(750, 420, 163, 37));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_10);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget_10);
        label_16->setObjectName("label_16");

        horizontalLayout_10->addWidget(label_16);

        Candy = new QSpinBox(layoutWidget_10);
        Candy->setObjectName("Candy");

        horizontalLayout_10->addWidget(Candy);

        label_bun = new QLabel(cashier_interface);
        label_bun->setObjectName("label_bun");
        label_bun->setGeometry(QRect(390, 310, 121, 101));
        label_bun->setPixmap(QPixmap(QString::fromUtf8("C:/Users/jjjjj/OneDrive/\320\240\320\260\320\261\320\276\321\207\320\270\320\271 \321\201\321\202\320\276\320\273/344918_391.jpg")));
        label_bun->setScaledContents(true);
        label_cookie = new QLabel(cashier_interface);
        label_cookie->setObjectName("label_cookie");
        label_cookie->setGeometry(QRect(580, 310, 121, 101));
        label_cookie->setPixmap(QPixmap(QString::fromUtf8("C:/Users/jjjjj/OneDrive/\320\240\320\260\320\261\320\276\321\207\320\270\320\271 \321\201\321\202\320\276\320\273/x1066163-1139358738.png")));
        label_cookie->setScaledContents(true);
        label_candy = new QLabel(cashier_interface);
        label_candy->setObjectName("label_candy");
        label_candy->setGeometry(QRect(770, 310, 121, 101));
        label_candy->setPixmap(QPixmap(QString::fromUtf8("C:/Users/jjjjj/OneDrive/\320\240\320\260\320\261\320\276\321\207\320\270\320\271 \321\201\321\202\320\276\320\273/1608998078_6258.jpg")));
        label_candy->setScaledContents(true);
        pushButton = new QPushButton(cashier_interface);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(740, 490, 191, 35));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        layoutWidget2 = new QWidget(cashier_interface);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(40, 20, 291, 59));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        name_label = new QLabel(layoutWidget2);
        name_label->setObjectName("name_label");

        verticalLayout_2->addWidget(name_label);

        dep_label = new QLabel(layoutWidget2);
        dep_label->setObjectName("dep_label");

        verticalLayout_2->addWidget(dep_label);


        retranslateUi(cashier_interface);

        QMetaObject::connectSlotsByName(cashier_interface);
    } // setupUi

    void retranslateUi(QWidget *cashier_interface)
    {
        cashier_interface->setWindowTitle(QCoreApplication::translate("cashier_interface", "Form", nullptr));
        start_work_button->setText(QCoreApplication::translate("cashier_interface", "\320\235\320\260\321\207\320\260\321\202\321\214 \321\201\320\274\320\265\320\275\321\203", nullptr));
        end_work_button->setText(QCoreApplication::translate("cashier_interface", "\320\227\320\260\320\272\320\276\320\275\321\207\320\270\321\202\321\214 \321\201\320\274\320\265\320\275\321\203", nullptr));
        label_latte->setText(QString());
        label->setText(QCoreApplication::translate("cashier_interface", "Espresso", nullptr));
        label_2->setText(QCoreApplication::translate("cashier_interface", "Latte", nullptr));
        label_espresso->setText(QString());
        label_4->setText(QCoreApplication::translate("cashier_interface", "Cappuccino", nullptr));
        label_cappuccino->setText(QString());
        label_6->setText(QCoreApplication::translate("cashier_interface", "Americano", nullptr));
        label_americano->setText(QString());
        label_8->setText(QCoreApplication::translate("cashier_interface", "Mocca", nullptr));
        label_mocca->setText(QString());
        label_10->setText(QCoreApplication::translate("cashier_interface", "Flat white", nullptr));
        label_flatwhite->setText(QString());
        label_12->setText(QCoreApplication::translate("cashier_interface", "Milk", nullptr));
        label_milk->setText(QString());
        label_14->setText(QCoreApplication::translate("cashier_interface", "Bun", nullptr));
        label_15->setText(QCoreApplication::translate("cashier_interface", "Cookie", nullptr));
        label_16->setText(QCoreApplication::translate("cashier_interface", "Candy", nullptr));
        label_bun->setText(QString());
        label_cookie->setText(QString());
        label_candy->setText(QString());
        pushButton->setText(QCoreApplication::translate("cashier_interface", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214 \320\267\320\260\320\272\320\260\320\267", nullptr));
        name_label->setText(QString());
        dep_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class cashier_interface: public Ui_cashier_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHIER_INTERFACE_H
