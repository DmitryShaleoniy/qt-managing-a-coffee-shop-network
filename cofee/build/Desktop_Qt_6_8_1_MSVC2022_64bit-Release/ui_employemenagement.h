/********************************************************************************
** Form generated from reading UI file 'employemenagement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEMENAGEMENT_H
#define UI_EMPLOYEMENAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmployeMenagement
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter;
    QTableView *worker_tables;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *staticLable;
    QLabel *dynamicLable;
    QVBoxLayout *verticalLayout;
    QPushButton *payment_button;
    QPushButton *hire_worker;
    QPushButton *fire_worker;

    void setupUi(QWidget *EmployeMenagement)
    {
        if (EmployeMenagement->objectName().isEmpty())
            EmployeMenagement->setObjectName("EmployeMenagement");
        EmployeMenagement->resize(681, 355);
        gridLayout = new QGridLayout(EmployeMenagement);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        splitter = new QSplitter(EmployeMenagement);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Horizontal);
        worker_tables = new QTableView(splitter);
        worker_tables->setObjectName("worker_tables");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(worker_tables->sizePolicy().hasHeightForWidth());
        worker_tables->setSizePolicy(sizePolicy);
        splitter->addWidget(worker_tables);

        horizontalLayout_2->addWidget(splitter);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        staticLable = new QLabel(EmployeMenagement);
        staticLable->setObjectName("staticLable");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(staticLable->sizePolicy().hasHeightForWidth());
        staticLable->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(staticLable);

        dynamicLable = new QLabel(EmployeMenagement);
        dynamicLable->setObjectName("dynamicLable");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dynamicLable->sizePolicy().hasHeightForWidth());
        dynamicLable->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(dynamicLable);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        payment_button = new QPushButton(EmployeMenagement);
        payment_button->setObjectName("payment_button");
        sizePolicy2.setHeightForWidth(payment_button->sizePolicy().hasHeightForWidth());
        payment_button->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(payment_button);

        hire_worker = new QPushButton(EmployeMenagement);
        hire_worker->setObjectName("hire_worker");

        verticalLayout->addWidget(hire_worker);

        fire_worker = new QPushButton(EmployeMenagement);
        fire_worker->setObjectName("fire_worker");
        fire_worker->setCheckable(false);

        verticalLayout->addWidget(fire_worker);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        retranslateUi(EmployeMenagement);

        QMetaObject::connectSlotsByName(EmployeMenagement);
    } // setupUi

    void retranslateUi(QWidget *EmployeMenagement)
    {
        EmployeMenagement->setWindowTitle(QCoreApplication::translate("EmployeMenagement", "Form", nullptr));
        staticLable->setText(QCoreApplication::translate("EmployeMenagement", "\320\222\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\271 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272:", nullptr));
        dynamicLable->setText(QString());
        payment_button->setText(QCoreApplication::translate("EmployeMenagement", "\320\240\320\260\321\201\321\201\321\207\320\265\321\202 \320\267\320\260\321\200\320\277\320\273\320\260\321\202\321\213 \320\267\320\260 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\276\320\272 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        hire_worker->setText(QCoreApplication::translate("EmployeMenagement", "\320\235\320\260\320\275\321\217\321\202\321\214 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\260", nullptr));
        fire_worker->setText(QCoreApplication::translate("EmployeMenagement", "\320\243\320\262\320\276\320\273\320\270\321\202\321\214 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\263\320\276 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmployeMenagement: public Ui_EmployeMenagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEMENAGEMENT_H
