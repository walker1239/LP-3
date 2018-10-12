#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    pixmap=new QPixmap(400,300);
    pixmap->fill();
    //circulo=new QPixmap(400,300);
    //circulo->fill();

    //color.setNamedColor("black");
    color.setRgb(0,0,0,255);
    colorcir.setRgb(0,0,0,255);
    lapiz=new QPen(color);
    lapizcirculo=new QPen(colorcir);

    ui->base->setPixmap(*pixmap);
    q=new QPainter(pixmap);
    //circulitos=new QPainter(pixmap)
    //q->setPen(*lapiz);
    //factoryrec::get_instance();
    /*lapizcirculo=new QPen(color);
    circulitos=new QPainter(pixmap);
    circulitos->setPen(*lapizcirculo);
*/



    rectangulo*aux=new rectangulo();

    factoryrec::get_instance()->set_altura(0);
    aux->setpoints(100,100);
    vecrect.push_back(aux);

    circle*aux2=new circle(0);
    factorycir::get_instance();
    aux2->setpoints(60,60);
    cir.push_back(aux2);
    ui->lado->setDisabled(true);
    ui->bases->setDisabled(true);
    ui->radio->setDisabled(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::mousePressEvent(QMouseEvent *event){
     ui->base->setPixmap(*pixmap);

    if(!c){
       // q->setPen(*lapiz);
        rectangulo*aux1=new rectangulo();
        aux1->set_altura(altura);
        aux1->set_base(base);
        aux1->setpoints(event->x(),event->y());
        vecrect.push_back(aux1);
        adapterrec*tmp3=new adapterrec(aux1);
        tmp3->draw(q,color);
        adaprect.push_back(tmp3);

    }
    else{
       // q->setPen(*lapizcirculo);
        circle*aux=new circle();
        aux->set_radio(radio);
        aux->setpoints(event->x(),event->y());
        cir.push_back(aux);
        adaptercir* tmp2=new adaptercir(aux);
        tmp2->draw(q,colorcir);
        adapcir.push_back(tmp2);

    }
    ui->base->setPixmap(*pixmap);
}
void MainWindow::on_cuadradito_currentIndexChanged(int index)
{

    switch(index)
        {
            case 0:
            ui->lado->setDisabled(true);
            ui->bases->setDisabled(true);
            ui->radio->setDisabled(true);
            ui->colores->setDisabled(true);
            break;

            case 1:
            c=0;
            ui->radio->setDisabled(true);
            ui->lado->setDisabled(false);
            ui->bases->setDisabled(false);
            break;

            case 2:
            c=1;
            ui->lado->setDisabled(true);
            ui->bases->setDisabled(true);
            ui->radio->setDisabled(false);
            break;
        }
}
void MainWindow::on_lado_editingFinished()
{
    pixmap->fill();
    altura= ui->lado->text().toInt();
    vecrect[0]->set_altura(altura);
    refresh();

}
void MainWindow::on_radio_editingFinished()
{
    circulo->fill();
    radio= ui->radio->text().toInt();
    cir[0]->set_radio(radio);
    refresh();
}
void MainWindow::on_bases_editingFinished()
{
    pixmap->fill();
    base= ui->bases->text().toInt();
    vecrect[0]->set_base(base);
    refresh();
}
void MainWindow::refresh(){
    for (int y = 0; y < int(adaprect.size()); y++)
    {
        adaprect[y]->draw(q,color);
    }
    for (int j=0; j<int(adapcir.size()); j++)
    {
        adapcir[j]->draw(q,colorcir);
    }

}

void MainWindow::on_colores_currentIndexChanged(int index)
{
    switch (index) {
        case 1:
        if(c){
            colorcir.setRgb(255,0,0,100);
            for (int j=0; j<int(adapcir.size()); j++)
            {


                adapcir[j]->draw(q,colorcir);

            }
        }else{
            color.setRgb(255,0,0,100);
            for (int j=0; j<int(adaprect.size()); j++)
            {
                adaprect[j]->draw(q,color);
            }
        }


        break;

        case 2:
        if(c){
            colorcir.setRgb(0,255,0,100);
            for (int j=0; j<int(adapcir.size()); j++)
            {


                adapcir[j]->draw(q,colorcir);

            }
        }else{
            color.setRgb(0,255,0,100);
            for (int j=0; j<int(adaprect.size()); j++)
            {
                adaprect[j]->draw(q,color);
            }
        }

        default:
        if(c){
            colorcir.setRgb(0,0,0,255);
            for (int j=0; j<int(adapcir.size()); j++)
            {


                adapcir[j]->draw(q,colorcir);

            }
        }else{
            color.setRgb(0,0,0,255);
            for (int j=0; j<int(adaprect.size()); j++)
            {
                adaprect[j]->draw(q,color);
            }
        }
        break;
    }
    //q->setPen(*lapiz);
    q->setPen(*lapizcirculo);
   // refresh();
}
