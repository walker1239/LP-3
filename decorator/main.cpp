#include "mainwindow.h"
#include <QApplication>
#include "decorator.h"
#include "elementx.h"
#include "elementy.h"
#include "elementz.h"
#include "pistola.h"
#include "QPainter"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
