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
            DrawHere->drawEllipse(x[i].getx()+20+297,346-x[i].gety(),4,4);
    }
};

#endif 
