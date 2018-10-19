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
    ui->commandLinkButton_2->setEnabled(false);
    ui->commandLinkButton_3->setEnabled(false);
    ui->commandLinkButton_4->setEnabled(false);
    ui->commandLinkButton->setEnabled(false);

    setWindowTitle("..::Enfermedades::..");


	fich="enf";

	QImage im ;
	im.load("");
	ui->imagen->setPixmap(QPixmap::fromImage(im));
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
                ui->commandLinkButton_2->setEnabled(true);
                ui->commandLinkButton_3->setEnabled(true);
                ui->commandLinkButton_4->setEnabled(true);
                ui->commandLinkButton->setEnabled(true);

                l=new Enfermedades();
       // l.cargar_fichero(( char *)(ui->fichero->text().toStdString().c_str()));
		l->cargar_fichero((char *)fich.toStdString().c_str());
                i=new IterLista<Enfermedad>(l->getLista());

    }

}

void MainWindow::on_buscar_clicked()
{
        Nodo<Enfermedad> **p;
	QString enfe=QObject::trUtf8(ui->enfermedad->text().toStdString().c_str());

	ui->textEdit->setText(QObject::trUtf8((char *)(l->mostrar_info((char *)fich.toStdString().c_str(),enfe.toStdString())).c_str()));

        l->getLista().find(*(new Enfermedad(ui->enfermedad->text().toStdString(),0,0)),p);
        i->setAct(*p);

        QImage im ;
	im.load(QObject::trUtf8((char *)(l->getImage((char *)fich.toStdString().c_str(),(ui->enfermedad->text()).toStdString())).c_str()));
	ui->imagen->setPixmap(QPixmap::fromImage(im));
}

// boton al final >>
void MainWindow::actualizar()
{
    ui->enfermedad->setText((char *)(i->getDato().getClave().c_str()));
    ui->textEdit->setText(QObject::trUtf8((char *)(l->mostrar_info((char *)fich.toStdString().c_str(),i->getDato().getClave())).c_str()));

    QImage im ;
    im.load(QObject::trUtf8((char *)(l->getImage((char *)fich.toStdString().c_str(),i->getDato().getClave())).c_str()));
    ui->imagen->setPixmap(QPixmap::fromImage(im));
}

void MainWindow::on_commandLinkButton_4_clicked()
{

    i->end();
    actualizar();

}

void MainWindow::on_commandLinkButton_3_clicked()
{
    ++(*i);
    actualizar();
}

void MainWindow::on_commandLinkButton_clicked()
{


    i->begin();
    actualizar();
}

void MainWindow::on_commandLinkButton_2_clicked()
{
    --(*i);
    actualizar();
}
