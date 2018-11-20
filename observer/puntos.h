#ifndef PUNTOS_H
#define PUNTOS_H
#include <iostream>
#include <vector>
using namespace std;

class puntos {
    int x;
    int y;
  public:
    puntos(int _x=0,int _y=0){
        x=_x;
        y=_y;
    }
    void setXYp(int _x, int _y) {
        x = _x;
        y=_y;
    
    }
    void setXp(int _x) {
        x = _x;
    }
    void setYp(int _y) {
        y=_y;
    }
    int getx() {
      return x;
    }
    int gety(){
      return y;
    }
    void notify();
};
#endif 


