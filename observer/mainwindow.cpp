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
    tabla subj(15,6);
    /*grafibarras *grab;
    grab=new grafibarras(&subj);
    subj.attach(grab);
   //grafibarras grab2(subj);
    subj.addpoint(17,20);
    subj.addpoint(15,20);
    subj.addpoint(35,20);
    subj.addpoint(45,20);
    subj.setXY(16,24,1);
    grab->drawMe(q);
    ui->l_area->setPixmap(*pixmap);*/
    q->drawRect(10,10,100,40);
    ui->l_area->setPixmap(*pixmap);

}
void tabla::notify() {
  for (int i = 0; i < obser.size(); i++){
      cout<<"size"<<obser.size()<<endl;
      obser[i]->update();
  }

}

MainWindow::~MainWindow()
{
    delete ui;
}
