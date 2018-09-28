#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include <QMainWindow>
#include "circle.h"
#include "figure.h"
#include "points.h"
#include "square.h"


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
    void on_b_draw_circle_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    void draw_circle(QPainter * painter);

private:
    Ui::MainWindow *ui;

    // draw objects
    QPainter * painter;
    QPixmap * pixmap;
    QPen * pen;
    figure * figures;
    circle * circle;
    square * square;

};


#endif // MAINWINDOW_H
