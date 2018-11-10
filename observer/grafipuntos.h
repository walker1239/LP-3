#ifndef GRAFIPUNTOS_H
#define GRAFIPUNTOS_H
#include "observer.h"
using namespace std;

class grafipuntos: public Observer {
  public:
    grafipuntos(puntos *mod, int div): Observer(mod, div){}
    void update() {

        int v = getSubject()->getVal(), d = getSubject()->gety();
        cout<<"DIBUJO PUNTOS"<<endl;
        cout << " x " << v << " y:  " << d << '\n';
    }
};

#endif 