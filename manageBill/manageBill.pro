#-------------------------------------------------
#
# Project created by QtCreator 2020-01-28T10:42:57
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = manageBill
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    dialogclient.cpp \
    dialogsupplier.cpp \
    dialogproducts.cpp \
    dialogbalances.cpp \
    dialoginvoicecomplete.cpp \
    dialogaddinvoice.cpp \
    dialogaddproducts.cpp \
    dialogemployee.cpp \
    dialogadd.cpp \
    dialoginvoiceproduct.cpp


HEADERS += \
        mainwindow.h \
    dialogclient.h \
    dialogsupplier.h \
    dialogproducts.h \
    dialogbalances.h \
    dialoginvoicecomplete.h \
    dialogaddinvoice.h \
    dialogaddproducts.h \
    dialogemployee.h \
    dialogadd.h \
    dialoginvoiceproduct.h


FORMS += \
        mainwindow.ui \
    dialogclient.ui \
    dialogsupplier.ui \
    dialogproducts.ui \
    dialogbalances.ui \
    dialoginvoicecomplete.ui \
    dialogaddinvoice.ui \
    dialogaddproducts.ui \
    dialogemployee.ui \
    dialogadd.ui \
    dialoginvoiceproduct.ui


RESOURCES += \
    icon.qrc
