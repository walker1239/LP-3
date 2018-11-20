#ifndef _CARETAKER_H_
#define _CARETAKER_H_
#include <vector>
#include "memento.h"
#include "linked_list.h"
using namespace std;

 class caretaker
 {
 public:
     caretaker(){}
     ~caretaker(){}
     void setmemento(memento* Memento){
     	list.insert_front(memento);

     	//mementolist[mementos]->setmemento(fotito->creatememento());
    
     }
    memento* getmemento(){
       	//return _memento;
    }





 private:
 	linked_list<memento*> list;
 	int mementos=20;
    int act;
    caretaker* mementolist;
   	foto* fotito; 

 };
 
 #endif
 

