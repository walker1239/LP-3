#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QPixmap>
#include <QPen>
#include <QColor>
#include <QPainter>
#include "analogico.h"
#include "digital.h"
#include "reloj.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_hora_editingFinished();

    void on_minuto_editingFinished();

    void on_drawn_pressed();

    void on_segundo_editingFinished();

private:
    Ui::MainWindow *ui;
    QPainter *q;
    QPixmap *pixmap;
    QPen *lapiz;
    analogico *ana;
    digital *digi;
};

#endif // MAINWINDOW_H
