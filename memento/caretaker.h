#ifndef _CARETAKER_H_
#define _CARETAKER_H_

#include "memento.h"
using namespace std;

 class caretaker
 {
 public:
     caretaker(){}
     ~caretaker(){}
     void setmemento(memento* Memento){
          memento = Memento;
     }
     memento* getmemento(){
          return memento;
     }
 private:
     memento* memento;
 };
 
 #endif
 

