/********************************************************************************
** Form generated from reading UI file 'admininterface.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMININTERFACE_H
#define UI_ADMININTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminInterface
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QTableView *Table;
    QListView *listView;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QPushButton *employee_menagement_button;
    QPushButton *cafe_menagement_button;
    QTextEdit *commandEdit;
    QPushButton *pushButton;
    QLabel *error_label;

    void setupUi(QWidget *AdminInterface)
    {
        if (AdminInterface->objectName().isEmpty())
            AdminInterface->setObjectName("AdminInterface");
        AdminInterface->resize(982, 698);
        gridLayout = new QGridLayout(AdminInterface);
        gridLayout->setObjectName("gridLayout");
        splitter_2 = new QSplitter(AdminInterface);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Orientation::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Horizontal);
        Table = new QTableView(splitter);
        Table->setObjectName("Table");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Table->sizePolicy().hasHeightForWidth());
        Table->setSizePolicy(sizePolicy);
        Table->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        Table->setLineWidth(4);
        Table->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        splitter->addWidget(Table);
        listView = new QListView(splitter);
        listView->setObjectName("listView");
        sizePolicy.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy);
        splitter->addWidget(listView);
        splitter_2->addWidget(splitter);
        formLayoutWidget = new QWidget(splitter_2);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        employee_menagement_button = new QPushButton(formLayoutWidget);
        employee_menagement_button->setObjectName("employee_menagement_button");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(employee_menagement_button->sizePolicy().hasHeightForWidth());
        employee_menagement_button->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::FieldRole, employee_menagement_button);

        cafe_menagement_button = new QPushButton(formLayoutWidget);
        cafe_menagement_button->setObjectName("cafe_menagement_button");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cafe_menagement_button->sizePolicy().hasHeightForWidth());
        cafe_menagement_button->setSizePolicy(sizePolicy2);

        formLayout->setWidget(1, QFormLayout::FieldRole, cafe_menagement_button);

        splitter_2->addWidget(formLayoutWidget);
        commandEdit = new QTextEdit(splitter_2);
        commandEdit->setObjectName("commandEdit");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(commandEdit->sizePolicy().hasHeightForWidth());
        commandEdit->setSizePolicy(sizePolicy3);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setBold(true);
        font.setItalic(true);
        commandEdit->setFont(font);
        commandEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::IBeamCursor)));
        commandEdit->setMouseTracking(false);
        commandEdit->setTabletTracking(false);
        commandEdit->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        splitter_2->addWidget(commandEdit);
        pushButton = new QPushButton(splitter_2);
        pushButton->setObjectName("pushButton");
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        splitter_2->addWidget(pushButton);
        error_label = new QLabel(splitter_2);
        error_label->setObjectName("error_label");
        splitter_2->addWidget(error_label);

        gridLayout->addWidget(splitter_2, 0, 0, 1, 1);


        retranslateUi(AdminInterface);

        QMetaObject::connectSlotsByName(AdminInterface);
    } // setupUi

    void retranslateUi(QWidget *AdminInterface)
    {
        AdminInterface->setWindowTitle(QCoreApplication::translate("AdminInterface", "Form", nullptr));
        employee_menagement_button->setText(QCoreApplication::translate("AdminInterface", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260\320\274\320\270", nullptr));
        cafe_menagement_button->setText(QCoreApplication::translate("AdminInterface", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\232\320\276\321\204\320\265\320\271\320\275\321\217\320\274\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("AdminInterface", "RUN", nullptr));
        error_label->setText(QCoreApplication::translate("AdminInterface", " errors:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminInterface: public Ui_AdminInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMININTERFACE_H
