/********************************************************************************
** Form generated from reading UI file 'supplier_interface.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPLIER_INTERFACE_H
#define UI_SUPPLIER_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_supplier_interface
{
public:
    QGridLayout *gridLayout;
    QLabel *nam_label;
    QComboBox *department_comboBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QPushButton *delivery_button;
    QStackedWidget *stackedWidget;
    QWidget *page_5;
    QWebEngineView *map_widget;
    QWidget *page_6;
    QLabel *label;

    void setupUi(QWidget *supplier_interface)
    {
        if (supplier_interface->objectName().isEmpty())
            supplier_interface->setObjectName("supplier_interface");
        supplier_interface->resize(860, 610);
        gridLayout = new QGridLayout(supplier_interface);
        gridLayout->setObjectName("gridLayout");
        nam_label = new QLabel(supplier_interface);
        nam_label->setObjectName("nam_label");

        gridLayout->addWidget(nam_label, 0, 0, 1, 1);

        department_comboBox = new QComboBox(supplier_interface);
        department_comboBox->addItem(QString());
        department_comboBox->addItem(QString());
        department_comboBox->addItem(QString());
        department_comboBox->addItem(QString());
        department_comboBox->setObjectName("department_comboBox");

        gridLayout->addWidget(department_comboBox, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        tableView = new QTableView(supplier_interface);
        tableView->setObjectName("tableView");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(tableView);

        delivery_button = new QPushButton(supplier_interface);
        delivery_button->setObjectName("delivery_button");

        verticalLayout->addWidget(delivery_button);


        horizontalLayout->addLayout(verticalLayout);

        stackedWidget = new QStackedWidget(supplier_interface);
        stackedWidget->setObjectName("stackedWidget");
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        map_widget = new QWebEngineView(page_5);
        map_widget->setObjectName("map_widget");
        map_widget->setGeometry(QRect(0, 10, 401, 481));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(map_widget->sizePolicy().hasHeightForWidth());
        map_widget->setSizePolicy(sizePolicy1);
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        label = new QLabel(page_6);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 10, 401, 491));
        stackedWidget->addWidget(page_6);

        horizontalLayout->addWidget(stackedWidget);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(supplier_interface);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(supplier_interface);
    } // setupUi

    void retranslateUi(QWidget *supplier_interface)
    {
        supplier_interface->setWindowTitle(QCoreApplication::translate("supplier_interface", "Form", nullptr));
        nam_label->setText(QCoreApplication::translate("supplier_interface", "Supplier name here", nullptr));
        department_comboBox->setItemText(0, QCoreApplication::translate("supplier_interface", "...", nullptr));
        department_comboBox->setItemText(1, QCoreApplication::translate("supplier_interface", "Lateshechka Solntsevo", nullptr));
        department_comboBox->setItemText(2, QCoreApplication::translate("supplier_interface", "Lateshechka Korolev", nullptr));
        department_comboBox->setItemText(3, QCoreApplication::translate("supplier_interface", "Lateshechka Pervomayskaya", nullptr));

        delivery_button->setText(QCoreApplication::translate("supplier_interface", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214 \320\224\320\276\321\201\321\202\320\260\320\262\320\272\321\203", nullptr));
        label->setText(QCoreApplication::translate("supplier_interface", "frfgrg", nullptr));
    } // retranslateUi

};

namespace Ui {
    class supplier_interface: public Ui_supplier_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPLIER_INTERFACE_H
