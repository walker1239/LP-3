#include <iostream>
#include "foto.h"
#include "caretaker.h"
using namespace std;

int main(){
	foto* Foto = new foto(1);
    Foto->dibujar();

    caretaker* care = new caretaker();
    care->setmemento(Foto->creatememento());

   	Foto->setstate(2);
  	Foto->dibujar();
 	
    Foto->setmemento(care->getmemento());
    Foto->dibujar();

  return 0;
}