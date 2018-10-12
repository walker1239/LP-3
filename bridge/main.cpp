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
    analogico analo(7,50,1);
    digital digi(18,15,30);
    analo.dalahora();
    digi.dalahora();
    return a.exec();
}
