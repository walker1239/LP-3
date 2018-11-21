#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QPen>
#include <QColor>
#include <QPainter>
#include "grafibarras.h"
#include "grafilineas.h"
#include "grafipuntos.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_tableWidget_cellChanged(int row, int column);

private:
    Ui::MainWindow *ui;
    QPainter *q;
    QPixmap *pixmap;
    QPen *lapiz;
    QColor color;
    tabla subj;
    grafibarras *grab;
    grafipuntos *grap;
    grafilineas *gral;
};

#endif // MAINWINDOW_H
