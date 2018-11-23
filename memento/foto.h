#ifndef _FOTO_H_
#define _FOTO_H_
#include "memento.h"
using namespace std;

class foto
 {
     private:
     int state;

     public:
     foto(int _state){
          state = _state;
     }
     ~foto(){}
     void setmemento(memento* Memento){
          state = Memento->getstate();
     }

     memento* creatememento(){
          return new memento(state); 
     }
     void setstate(int _state){

          state=_state;
          
     }
     int getstate(){
          return state;
     }
     void dibujar(){
          cout <<"FOTO: "<<this->state << endl;
     }
 };
 


 #endif