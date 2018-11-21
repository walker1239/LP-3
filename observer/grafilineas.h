#ifndef GRAFILINEAS_H
#define GRAFILINEAS_H
#include "observer.h"

class grafilineas: public Observer
{
public:
    grafilineas(tabla* tab): Observer(tab){}
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
        for (int i = 0; i < x.size()-1; ++i)
            DrawHere->drawLine(x[i].getx()+20+557,350-x[i].gety(),x[i+1].getx()+20+557,350-x[i+1].gety());
    }
};


#endif // GRAFILINEAS_H
