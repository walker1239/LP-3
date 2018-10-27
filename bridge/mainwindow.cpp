#include "mainwindow.h"
#include "ui_mainwindow.h"

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
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_hora_editingFinished()
{
    ana->set_hora(ui->hora->text().toInt());
}

void MainWindow::on_minuto_editingFinished()
{
    ana->set_min(ui->minuto->text().toInt());
}

void MainWindow::on_drawn_pressed()
{

    ana->dalahora(q);
    ui->l_area->setPixmap(*pixmap);
    //pixmap->fill();

}
