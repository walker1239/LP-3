#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLCDNumber>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pixmap=new QPixmap(700,700);
    pixmap->fill();


    QColor color("black");
    lapiz=new QPen(color);


    ui->l_area->setPixmap(*pixmap);
    q=new QPainter(pixmap);
    q->setPen(*lapiz);
    ana=new analogico();
    digi=new digital();
    q->translate(480 / 2, 680 / 2);
    q->scale(480 / 200.0, 480 / 200.0);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_hora_editingFinished()
{
    ana->set_hora(ui->hora->text().toInt());
    digi->set_hora(ui->hora->text().toInt());
}

void MainWindow::on_minuto_editingFinished()
{
    ana->set_min(ui->minuto->text().toInt());
    digi->set_min(ui->minuto->text().toInt());
}

void MainWindow::on_segundo_editingFinished()
{
    digi->set_seg(ui->segundo->text().toInt());
}
void MainWindow::on_drawn_pressed()
{

    pixmap->fill();
    ana->dalahora(q);
    digi->dalahora(q);
    ui->l_area->setPixmap(*pixmap);
    //pixmap->fill();



}

