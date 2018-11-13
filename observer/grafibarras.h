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
       	cout << " x " <<x[i].getx() << " y:  " << x[i].gety() << '\n';
       }
       cout<<endl<<endl<<endl;
    }
};

#endif 