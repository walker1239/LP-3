#ifndef TABLA_H
#define TABLA_H
#include <iostream>
#include <vector>
#include "puntos.h"
using namespace std;

class tabla {
    
    vector < class Observer * > obser;
    vector <puntos> punt;
  public:
    tabla(int _x=0,int _y=0){
        addpoint(_x,_y);
    }
    void attach(Observer *obs) {
        obser.push_back(obs);
    }
    void setXY(int _x,int _y,int i) {
        punt[i].setXYp(_x,_y);
        notify();
    }
    void setX(int _x,int i) {
        punt[i].setXp(_x);
        notify();
    }
    void setY(int _y,int i) {
        punt[i].setYp(_y);
        notify();
    }
    void addpoint(int _x,int _y) {
        puntos a(_x,_y);
        punt.push_back(a);
        notify();
    }
    vector <puntos> getpoints() {
      return punt;
    }
    void notify();
};
#endif 


