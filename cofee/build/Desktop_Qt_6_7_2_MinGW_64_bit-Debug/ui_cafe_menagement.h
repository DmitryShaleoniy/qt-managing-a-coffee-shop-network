/********************************************************************************
** Form generated from reading UI file 'cafe_menagement.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAFE_MENAGEMENT_H
#define UI_CAFE_MENAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cafe_menagement
{
public:
    QGridLayout *gridLayout;
    QTableView *cafe_tables;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *staticLable;
    QLabel *dynamicLable;
    QVBoxLayout *verticalLayout;
    QPushButton *allTimemoney_button;
    QPushButton *money_button;
    QPushButton *AddNewCafe_button;
    QPushButton *removeCafe_button;

    void setupUi(QWidget *cafe_menagement)
    {
        if (cafe_menagement->objectName().isEmpty())
            cafe_menagement->setObjectName("cafe_menagement");
        cafe_menagement->resize(771, 271);
        gridLayout = new QGridLayout(cafe_menagement);
        gridLayout->setObjectName("gridLayout");
        cafe_tables = new QTableView(cafe_menagement);
        cafe_tables->setObjectName("cafe_tables");

        gridLayout->addWidget(cafe_tables, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        staticLable = new QLabel(cafe_menagement);
        staticLable->setObjectName("staticLable");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(staticLable->sizePolicy().hasHeightForWidth());
        staticLable->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(staticLable);

        dynamicLable = new QLabel(cafe_menagement);
        dynamicLable->setObjectName("dynamicLable");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dynamicLable->sizePolicy().hasHeightForWidth());
        dynamicLable->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(dynamicLable);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        allTimemoney_button = new QPushButton(cafe_menagement);
        allTimemoney_button->setObjectName("allTimemoney_button");
        sizePolicy1.setHeightForWidth(allTimemoney_button->sizePolicy().hasHeightForWidth());
        allTimemoney_button->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(allTimemoney_button);

        money_button = new QPushButton(cafe_menagement);
        money_button->setObjectName("money_button");

        verticalLayout->addWidget(money_button);

        AddNewCafe_button = new QPushButton(cafe_menagement);
        AddNewCafe_button->setObjectName("AddNewCafe_button");

        verticalLayout->addWidget(AddNewCafe_button);

        removeCafe_button = new QPushButton(cafe_menagement);
        removeCafe_button->setObjectName("removeCafe_button");
        removeCafe_button->setCheckable(false);

        verticalLayout->addWidget(removeCafe_button);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        gridLayout->setColumnStretch(1, 2);

        retranslateUi(cafe_menagement);

        QMetaObject::connectSlotsByName(cafe_menagement);
    } // setupUi

    void retranslateUi(QWidget *cafe_menagement)
    {
        cafe_menagement->setWindowTitle(QCoreApplication::translate("cafe_menagement", "Form", nullptr));
        staticLable->setText(QCoreApplication::translate("cafe_menagement", "\320\222\321\213\320\261\321\200\320\260\320\275\320\275\320\260\321\217 \320\272\320\276\321\204\320\265\320\271\320\275\321\217:", nullptr));
        dynamicLable->setText(QString());
        allTimemoney_button->setText(QCoreApplication::translate("cafe_menagement", "\320\240\320\260\321\201\321\201\321\207\320\265\321\202 \320\277\321\200\320\270\320\261\321\213\320\273\320\270 \320\267\320\260 \320\262\321\201\320\265 \320\262\321\200\320\265\320\274\321\217", nullptr));
        money_button->setText(QCoreApplication::translate("cafe_menagement", "\320\240\320\260\321\201\321\207\320\265\321\202 \320\277\321\200\320\270\320\261\321\213\320\273\320\270 \320\267\320\260 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\276\320\272", nullptr));
        AddNewCafe_button->setText(QCoreApplication::translate("cafe_menagement", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\321\203\321\216 \320\272\320\276\321\204\320\265\320\271\320\275\321\216", nullptr));
        removeCafe_button->setText(QCoreApplication::translate("cafe_menagement", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\321\203\321\216 \320\272\320\276\321\204\320\265\320\271\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cafe_menagement: public Ui_cafe_menagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAFE_MENAGEMENT_H
