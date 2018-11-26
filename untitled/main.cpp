//#include "mainwindow.h"
//#include <QApplication>
#include <iostream>
#include "foto.h"
#include "caretaker.h"
using namespace std;

int main()
{
    foto* Foto = new foto(1);
    caretaker* care = new caretaker(4);

    //  care->setmemento(Foto->creatememento());

      Foto->setstate(2);
      Foto->dibujar();
      //foto del anterior
      care->addmemento(Foto->creatememento());

      Foto->setstate(3);
      Foto->dibujar();
      //foto next
      care->addmemento(Foto->creatememento());
      //dibuja anterior
      Foto->setstate(6);
      Foto->dibujar();
      //foto next
      care->addmemento(Foto->creatememento());
      Foto->setstate(8);
      Foto->dibujar();
      //foto next
      care->addmemento(Foto->creatememento());
      Foto->setstate(9);
      Foto->dibujar();
      //foto next
      care->addmemento(Foto->creatememento());
      memento *m= care->previous();

      //dibuja el siguiente
      cout<<m->getstate()<<endl;

      m= care->previous();
      cout<<m->getstate()<<endl;

      m= care->previous();
      cout<<m->getstate()<<endl;
      m= care->previous();
      cout<<m->getstate()<<endl;
      m= care->previous();
      cout<<m->getstate()<<endl;
      m= care->previous();
      cout<<m->getstate()<<endl;
      Foto->setstate(10);
      Foto->dibujar();
      //foto next
      care->addmemento(Foto->creatememento());
      m= care->previous();
      cout<<m->getstate()<<endl;
  return 0;
}

/*{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}*/
