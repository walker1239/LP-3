#include <iostream>
#include "foto.h"
#include "caretaker.h"
using namespace std;

int main(){
	foto* Foto = new foto(1);
	caretaker* care = new caretaker();
    Foto->dibujar();
    
  //  care->setmemento(Foto->creatememento());

   	Foto->setstate(2);
  	Foto->dibujar();
    //foto del anterior
 	  care->setmemento(Foto->creatememento());

  	Foto->setstate(3);
  	Foto->dibujar();
    //foto next
    care->setmemento_next(Foto->creatememento());
    //dibuja anterior
    Foto->setmemento(care->getmemento());

    Foto->dibujar();
    //dibuja el siguiente
    Foto->setmemento(care->redo());

    Foto->dibujar();




  return 0;
}