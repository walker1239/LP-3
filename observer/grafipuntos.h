#ifndef GRAFIPUNTOS_H
#define GRAFIPUNTOS_H
#include "observer.h"
using namespace std;

class grafipuntos: public Observer {
  public:
    grafipuntos(tabla* tab): Observer(tab){}
    void update(){

       vector<puntos> x = (tab->getpoints());
       cout<<"DIBUJO BARRAS"<<endl;

       cout<<endl<<endl<<endl;
       for (int i = 0; i < x.size(); ++i)
       {
        cout << " x " <<x[i].getx() << " y:  " << x[i].gety() << '\n';
       }
       cout<<endl<<endl<<endl;
    }
    void drawMe(QPainter *DrawHere){
        vector<puntos> x = (tab->getpoints());
        for (int i = 0; i < x.size(); ++i)
            DrawHere->drawRect(x[i].getx(),x[i].gety(),2,x[i].gety());
    }
};

#endif 
