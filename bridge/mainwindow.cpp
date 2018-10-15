#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
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
    analo = new analogico(4,5,1);

    //q->drawLine(150.0, 100.0, 190.0, 30.0);
    //q->drawLine(150.0, 100.0, 220.0, 60.0);


    //q->drawLine(150.0, 100.0, 220.0, 140.0);
  // q->drawLine(150.0, 100.0, 190.0, 170.0);

   //q->drawLine(150.0, 100.0, 110.0, 170.0);





    ui->base->setPixmap(*pixmap);

    int x,y;



}

MainWindow::~MainWindow()
{
    delete ui;
}






void MainWindow::on_hora_editingFinished()
{

    hora= ui->hora->text().toInt();
    analo->set_hora(hora);
    if(hora==2){
        q->drawLine(150.0, 100.0, 220.0, 60.0);
    }
    if(hora==4){
        q->drawLine(150.0, 100.0, 220.0, 140.0);
    }
    if(hora==8){
        q->drawLine(150.0, 100.0, 80.0, 140.0);
    }
    if(hora==10){
        q->drawLine(150.0, 100.0, 80.0, 60.0);
    }
    if(hora==1){
        q->drawLine(150.0, 100.0, 190.0, 30.0);
    }
    if(hora==5){
       q->drawLine(150.0, 100.0, 190.0, 170.0);
    }
    if(hora==7){
        q->drawLine(150.0, 100.0, 110.0, 170.0);
    }
    if(hora==11){
        q->drawLine(150.0, 100.0, 110.0, 30.0);
    }
    if(hora==12){
        q->drawLine(150.0, 100.0, 150.0, 20.0);
    }
    if(hora==6){
        q->drawLine(150.0, 100.0, 150.0, 180.0);
    }
    if(hora==3){
        q->drawLine(150.0, 100.0, 230.0, 100.0);
    }
    if(hora==9){
        q->drawLine(150.0, 100.0, 70.0, 100.0);
    }
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
