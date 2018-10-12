#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QPen>
#include <QColor>
#include <QPainter>
#include "decorator.h"
#include "elementx.h"
#include "elementy.h"
#include "elementz.h"
#include "pistola.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    widget* create(bool x,bool y,bool z);

private slots:

    void on_pushButton_clicked();
private:
    Ui::MainWindow *ui;
    QPainter *q;
    QPixmap *pixmap;
    QPen *lapiz;
    pistola* pis;
   // widget *deco;

};

#endif // MAINWINDOW_H
