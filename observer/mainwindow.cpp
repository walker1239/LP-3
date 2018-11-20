#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    pixmap=new QPixmap(631,371);
    pixmap->fill();
    //circulo=new QPixmap(400,300);
    //circulo->fill();

    color.setNamedColor("black");

    lapiz=new QPen(color);




    ui->l_area->setPixmap(*pixmap);
    q=new QPainter(pixmap);


    //QRectF rect(10,29,15,20);
   // q->drawRect(10,29,15,20);

    //ui->l_area->setPixmap(*pixmap);






    grab=new grafibarras(&subj);
    subj.attach(grab);
    /*subj.addpoint(17,20);
    subj.addpoint(50,20);
    subj.addpoint(35,20);
    subj.addpoint(45,20);
    subj.setXY(20,24,1);
    grab->drawMe(q);
    ui->l_area->setPixmap(*pixmap);*/
    //for(int i=1;i<10;i++)
        //subj.addpoint(ui->tableWidget->item(i,1),ui->tableWidget->item(i,2))
    QString a;
    int y;
    int x;
    string text;
    for(int i=0;i<10;i++){
        a=(ui->tableWidget->item(i,1)->text());
        text = a.toUtf8().constData();
        y=std::atoi( text.c_str() );

        a=(ui->tableWidget->item(i,0)->text());
        text = a.toUtf8().constData();
        x=std::atoi( text.c_str() );
        subj.addpoint(x,y);
        cout<<"x"<<x<<"y"<<y<<endl;
    }
    grab->drawMe(q);
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

void MainWindow::on_tableWidget_cellChanged(int row, int column)
{
    pixmap->fill();
    QString a;
    int y;
    int x;
    string text;
    a=(ui->tableWidget->item(row,1)->text());
    text = a.toUtf8().constData();
    y=std::atoi( text.c_str() );

    a=(ui->tableWidget->item(row,0)->text());
    text = a.toUtf8().constData();
    x=std::atoi( text.c_str() );
    subj.setXY(x,y,row+1);
    grab->drawMe(q);
    ui->l_area->setPixmap(*pixmap);
}
