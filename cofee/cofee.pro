QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_cafe_interface_dialog.cpp \
    admininterface.cpp \
    cafe_menagement.cpp \
    cashier_interface.cpp \
    dialoglogin.cpp \
    employemenagement.cpp \
    main.cpp \
    mainwindow.cpp \
    newworkerdialog.cpp \
    supplier_interface.cpp \
    time_choice_dialog.cpp

HEADERS += \
    add_cafe_interface_dialog.h \
    admininterface.h \
    cafe_menagement.h \
    cashier_interface.h \
    dialoglogin.h \
    employemenagement.h \
    mainwindow.h \
    newworkerdialog.h \
    supplier_interface.h \
    time_choice_dialog.h

FORMS += \
    add_cafe_interface_dialog.ui \
    admininterface.ui \
    cafe_menagement.ui \
    cashier_interface.ui \
    dialoglogin.ui \
    employemenagement.ui \
    mainwindow.ui \
    newworkerdialog.ui \
    supplier_interface.ui \
    time_choice_dialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
