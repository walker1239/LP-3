#ifndef _MEMENTO_H_
#define _MEMENTO_H_

using namespace std;

 class memento
 {
 private:
     
public:
     int state;

     memento(int _state){
          state=_state;
     }
     ~memento(){}
     void setstate(int _state){
          state=_state;
     }
     int getstate(){
          return state;
     }
     
 };
 
 

 #endif