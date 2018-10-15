#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QColor>
#include <QPixmap>
#include <QPen>
#include "reloj.h"
#include "analogico.h"
#include "digital.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = NULL);
    ~MainWindow();

private slots:


    void on_hora_editingFinished();

    void on_min_editingFinished();

    void on_seg_editingFinished();

private:
    Ui::MainWindow *ui;
    int hora,minutos,segundos;
    QPainter *q;
    QPen *lapiz;
    QColor color;
    QPixmap *pixmap;
    analogico *analo;
};

#endif // MAINWINDOW_H
