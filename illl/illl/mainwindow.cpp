#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->enfermedad->setEnabled(false);
    ui->buscar->setEnabled(false);
    ui->lenf->setEnabled(false);
	//ui->textEdit->setEnabled(false);

    setWindowTitle("..::Enfermedades::..");


	fich="enf";

	QImage im ;
   // im.load("");
    //ui->imagen->setPixmap(QPixmap::fromImage(im));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_abrir_clicked()
{
	if(ui->fichero->text()==""||ui->fichero->text()!=fich)
	{
		QMessageBox::information(this,"ERROR","Fichero no valido");
		ui->fichero->setText("");
	}
    else
    {
		ui->enfermedad->setEnabled(true);
		ui->buscar->setEnabled(true);
		ui->lenf->setEnabled(true);
		ui->abrir->setEnabled(false);
		ui->fichero->setEnabled(false);

		l=new Lista();
       // l.cargar_fichero(( char *)(ui->fichero->text().toStdString().c_str()));
		l->cargar_fichero((char *)fich.toStdString().c_str());
    }

}

void MainWindow::on_buscar_clicked()
{
	ui->textEdit->setText((char *)(l->mostrar_info((char *)fich.toStdString().c_str(),(ui->enfermedad->text()).toStdString())).c_str());

	QImage im ;
	im.load((char *)(l->getImage((char *)fich.toStdString().c_str(),(ui->enfermedad->text()).toStdString())).c_str());
	ui->imagen->setPixmap(QPixmap::fromImage(im));
}
