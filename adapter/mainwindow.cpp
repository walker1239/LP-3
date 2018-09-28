#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pixmap = new QPixmap(600, 400);
    pixmap->fill();

    pen = new QPen(QColor("black"));

    ui->label_draw_area->setPixmap(*pixmap);

    painter = new QPainter(pixmap);
    painter->setPen(*pen);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::draw_circle(QPainter * painter)
{
    painter->drawEllipse({100, 100}, 30, 30);
}

void MainWindow::on_b_draw_circle_clicked()
{

}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    switch(index)
    {
            case 1:
            pixmap->fill(QColor(255,255,255));
            circle->draw(painter);
            break;
            case 2:
            pixmap->fill(QColor(255,255,255));
            square->draw(painter);
            break;

     }
    ui->label_draw_area->setPixmap(*pixmap);
}
