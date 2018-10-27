#include "mainwindow.h"
#include <QApplication>
#include "reloj.h"
#include "analogico.h"
#include "digital.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
