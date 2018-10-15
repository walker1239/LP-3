#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    pixmap=new QPixmap(311,271);
    pixmap->fill();

    //color.setRgb(0,0,0,255);

    //lapiz=new QPen(color);


    ui->base->setPixmap(*pixmap);
    q=new QPainter(pixmap);



    QImage image1 ("reloj.png");
    q->drawImage(50,0,image1);

    q->drawLine(150.0, 100.0, 150.0, 20.0);
    ui->base->setPixmap(*pixmap);


}

MainWindow::~MainWindow()
{
    delete ui;
}






void MainWindow::on_hora_editingFinished()
{
    hora= ui->hora->text().toInt();
    q->drawLine(187.0, 40.0, 150.0, 100.0);
    ui->base->setPixmap(*pixmap);

}

void MainWindow::on_min_editingFinished()
{
    minutos=ui->min->text().toInt();

}

void MainWindow::on_seg_editingFinished()
{
    segundos=ui->seg->text().toInt();
}
