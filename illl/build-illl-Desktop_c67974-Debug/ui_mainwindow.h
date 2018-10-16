/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *lenf;
    QLineEdit *fichero;
    QCommandLinkButton *abrir;
    QPushButton *buscar;
    QLineEdit *enfermedad;
    QLabel *imagen;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(800, 500);
        MainWindow->setMinimumSize(QSize(800, 500));
        MainWindow->setMaximumSize(QSize(800, 500));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 67, 21));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(30, 110, 431, 301));
        lenf = new QLabel(centralWidget);
        lenf->setObjectName(QStringLiteral("lenf"));
        lenf->setGeometry(QRect(30, 70, 101, 31));
        fichero = new QLineEdit(centralWidget);
        fichero->setObjectName(QStringLiteral("fichero"));
        fichero->setGeometry(QRect(100, 30, 113, 27));
        abrir = new QCommandLinkButton(centralWidget);
        abrir->setObjectName(QStringLiteral("abrir"));
        abrir->setGeometry(QRect(220, 30, 71, 31));
        buscar = new QPushButton(centralWidget);
        buscar->setObjectName(QStringLiteral("buscar"));
        buscar->setGeometry(QRect(380, 70, 97, 27));
        enfermedad = new QLineEdit(centralWidget);
        enfermedad->setObjectName(QStringLiteral("enfermedad"));
        enfermedad->setGeometry(QRect(130, 70, 231, 27));
        imagen = new QLabel(centralWidget);
        imagen->setObjectName(QStringLiteral("imagen"));
        imagen->setGeometry(QRect(490, 120, 271, 271));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Fichero: ", Q_NULLPTR));
        lenf->setText(QApplication::translate("MainWindow", "Enfermedad: ", Q_NULLPTR));
        abrir->setText(QApplication::translate("MainWindow", "abrir", Q_NULLPTR));
        buscar->setText(QApplication::translate("MainWindow", "Buscar", Q_NULLPTR));
        imagen->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
