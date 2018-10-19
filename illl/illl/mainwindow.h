#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Lista.h"
namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_abrir_clicked();

	void on_buscar_clicked();

private:
    Ui::MainWindow *ui;
	QString fich;
	Lista *l;
};

#endif // MAINWINDOW_H
