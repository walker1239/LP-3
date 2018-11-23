#ifndef _CARETAKER_H_
#define _CARETAKER_H_
#include <vector>
#include "memento.h"
//#include "linked_list.h"
using namespace std;

 class caretaker
 {
 public:
     caretaker(int _n){index=-1;n=_n;}
     ~caretaker(){}
     void addmemento(memento* Memento){
        list.push_back(Memento);
        index++;
     }
     memento* next(){
         if(index==list.size()-1)
             return list[index];
         index++;
         return list[index];
     }
     memento* previous(){
         if(index==0)
             return list[index];
         index--;
         return list[index];
     }

  private:
     vector<memento*> list;
     int index;
     int n;
     void refresh(){
         if(n==list.size()){
             for(int i=0;i<n;i++){
                 if(i!=n-1){
                     list[i]=list[i+1];
                 }
             }
         }
     }
 };
 
 #endif
 

