#ifndef GRAFIBARRAS_H
#define GRAFIBARRAS_H
#include "observer.h"
using namespace std;


class grafibarras: public Observer {
  public:
    grafibarras(tabla* tab): Observer(tab){}
    void update(){

       vector<puntos> x = (tab->getpoints());
       cout<<"DIBUJO BARRAS"<<endl;
       
       cout<<endl<<endl<<endl;
       for (int i = 0; i < x.size(); ++i)
       {
        cout << " x " <<x[i].gety() << " y:  " << x[i].getx() << '\n';
       }
       cout<<endl<<endl<<endl;
    }
    void drawMe(QPainter *DrawHere){
        QImage image1 ("images/pc.png");
        DrawHere->drawImage(0,0,image1);
        vector<puntos> x = (tab->getpoints());
        for (int i = 0; i < x.size(); ++i)
            DrawHere->drawRect(x[i].getx()+20,350-x[i].gety(),1,x[i].gety());
    }
};

#endif 
