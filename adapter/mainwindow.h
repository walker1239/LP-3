#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "adaptercir.h"
#include "adapterrec.h"
#include <QMainWindow>
#include <QMouseEvent>
#include <vector>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = NULL);
    ~MainWindow();
    void mousePressEvent(QMouseEvent *event);
    void refresh();
private slots:
    void on_cuadradito_currentIndexChanged(int index);

    void on_lado_editingFinished();

    void on_radio_editingFinished();


    void on_bases_editingFinished();

    void on_colores_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    vector<adapterrec*>adaprect;
    vector<rectangulo*>vecrect;
    vector<circle*>cir;
    vector<adaptercir*>adapcir;
    QPixmap *pixmap;
    QPixmap *circulo;
    QPen *lapiz;
    QPen *lapizcirculo;
    QPainter *circulitos;
    QPainter *q;
    QColor color;
    QColor colorcir;
    bool c;
    int altura,base,radio;

};

#endif // MAINWINDOW_H
