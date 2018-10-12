#include "mainwindow.h"
#include "ui_mainwindow.h"
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
    pis=new pistola();

}

MainWindow::~MainWindow()
{
    delete ui;
}
widget* MainWindow::create(bool x,bool y,bool z){
    widget* tmp=nullptr;
    pixmap->fill();
    pis->drawMe(q);
    //ui->l_area->setPixmap(*pixmap);
    if(x){
        tmp=new elementx(pis);
        tmp->drawMe(q);
    }
    if(y){
        tmp=new elementy(pis);
        tmp->drawMe(q);
    }
    if(z){
        tmp=new elementz(pis);
        tmp->drawMe(q);
    }
    ui->l_area->setPixmap(*pixmap);
    return tmp;
}
void MainWindow::on_pushButton_clicked()
{
    create(ui->mira->isChecked(),ui->largo->isChecked(),ui->culata->isChecked());

}
