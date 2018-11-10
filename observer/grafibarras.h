#ifndef GRAFIBARRAS_H
#define GRAFIBARRAS_H
#include "observer.h"
using namespace std;


class grafibarras: public Observer {
  public:
    grafibarras(puntos *mod, int div): Observer(mod, div){}
    void update() {
       

        int v = getSubject()->getVal(), d = getSubject()->gety();
        cout<<"DIBUJO BARRAS"<<endl;
        cout << " x " << v << " y:  " << d << '\n';
    }
};

#endif 