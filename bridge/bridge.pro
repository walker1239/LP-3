#-------------------------------------------------
#
# Project created by QtCreator 2018-10-12T17:10:58
#
#-------------------------------------------------

QT       += core gui widgets

TARGET = bridge
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

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    analogica_impl.cpp \
    analogico.cpp \
    digital.cpp \
    digital_impl.cpp \
    main.cpp \
    mainwindow.cpp \
    reloj.cpp \
    reloj_implementor.cpp \
    analogica_impl.cpp \
    analogico.cpp \
    digital.cpp \
    digital_impl.cpp \
    main.cpp \
    mainwindow.cpp \
    reloj.cpp \
    reloj_implementor.cpp

HEADERS += \
        mainwindow.h \
    analogica_impl.h \
    analogico.h \
    digital.h \
    digital_impl.h \
    mainwindow.h \
    reloj.h \
    reloj_implementor.h \
    analogica_impl.h \
    analogico.h \
    digital.h \
    digital_impl.h \
    mainwindow.h \
    reloj.h \
    reloj_implementor.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
