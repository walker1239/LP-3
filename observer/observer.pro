#-------------------------------------------------
#
# Project created by QtCreator 2018-11-09T15:10:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = observer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    puntos.cpp \
    grafipuntos.cpp \
    grafibarras.cpp \
    grafilineas.cpp \
    observer.cpp

HEADERS  += mainwindow.h \
    puntos.h \
    grafipuntos.h \
    grafibarras.h \
    grafilineas.h \
    observer.h

FORMS    += mainwindow.ui
