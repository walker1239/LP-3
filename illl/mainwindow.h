#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include "Enfermedad.h"
#include "Iterator.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void actualizar();
private slots:
    void on_abrir_clicked();

	void on_buscar_clicked();

        void on_commandLinkButton_4_clicked();


        void on_commandLinkButton_3_clicked();

        void on_commandLinkButton_clicked();

        void on_commandLinkButton_2_clicked();

private:
    Ui::MainWindow *ui;
	QString fich;
        Enfermedades *l;
        Iterator<Enfermedad> *i;
};

#endif // MAINWINDOW_H
