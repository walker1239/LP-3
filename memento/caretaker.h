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
     	list.insert_back(Memento);
     }

    void setmemento_next(memento* Memento){
        next_list.insert_front(Memento);
     }


    memento* getmemento(){
        last_listmementos=list.Back();
        list.remove_front();
        return last_listmementos;
    }
    memento* redo(){
        next_listmementos=next_list.Back();
        next_list.remove_front();
        return next_listmementos;
    }




 private:
 	linked_list<memento*> list;
    linked_list<memento*> next_list;

    memento *last_listmementos;
    memento *next_listmementos;

 };
 
 #endif
 

