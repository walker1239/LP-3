#ifndef PUNTOS_H
#define PUNTOS_H

#include <iostream>
#include <vector>

using namespace std;

class puntos {
    
    vector < class Observer * > obser;
    int x;
    int y;
  public:
    void attach(Observer *obs) {
        obser.push_back(obs);
    }
    void setXY(int _x, int _y) {
        x = _x;
        y=_y;
        notify();
    }
    int getVal() {
      return x;
    }
    int gety(){
      return y;
    }
    void notify();
};
#endif 


