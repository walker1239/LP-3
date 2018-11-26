#include <iostream>
#include "foto.h"
#include "caretaker.h"
using namespace std;

int main(){
	foto* Foto = new foto(1);
	caretaker* care = new caretaker();
    Foto->setstate(1);
    Foto->dibujar();
    
    care->setmemento(Foto->creatememento());

   	Foto->setstate(2);
  	Foto->dibujar();
    
 	  care->setmemento(Foto->creatememento());

  	Foto->setstate(3);
  	Foto->dibujar();
    care->setmemento(Foto->creatememento());

    Foto->setstate(4);
    Foto->dibujar();
    care->setmemento(Foto->creatememento());

    Foto->setstate(5);
    Foto->dibujar();
    care->setmemento(Foto->creatememento());

    Foto->setstate(6);
    Foto->dibujar();
    care->setmemento(Foto->creatememento());


    //dibuja anterior
        //care->avanza();
   // Foto->setmemento(care->getmemento());
    Foto->setmemento(care->retrosede());
    Foto->dibujar();

    Foto->setmemento(care->retrosede());
    Foto->dibujar();


    Foto->setmemento(care->retrosede());
    Foto->dibujar();

    Foto->setmemento(care->retrosede());
    Foto->dibujar();

    Foto->setmemento(care->retrosede());
    Foto->dibujar();


    Foto->setmemento(care->avanzar());
    Foto->dibujar();

    Foto->setmemento(care->avanzar());
    Foto->dibujar();

    Foto->setmemento(care->avanzar());
    Foto->dibujar();

    Foto->setmemento(care->avanzar());
    Foto->dibujar();

    Foto->setmemento(care->avanzar());
    Foto->dibujar();






  

    




  return 0;
}