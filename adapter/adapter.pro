#-------------------------------------------------
#
# Project created by QtCreator 2018-09-29T12:11:54
#
#-------------------------------------------------

QT       += core gui widgets

TARGET = adapter
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
    adaptercir.cpp \
    adapterrec.cpp \
    circle.cpp \
    cuadrilatero.cpp \
    point.cpp \
    rectangulo.cpp \
    factorycir.cpp \
    factoryrec.cpp

HEADERS += \
        mainwindow.h \
    adaptercir.h \
    adapterrec.h \
    circle.h \
    cuadrilatero.h \
    point.h \
    rectangulo.h \
    shape.h \
    factorycir.h \
    factoryrec.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
