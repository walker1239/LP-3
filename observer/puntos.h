#ifndef PUNTOS_H
#define PUNTOS_H
#include "observer.h"
class puntos
{
private:
    vector < class observer * > grafi;
    int x,y;
public:
    puntos();

    void setx(int _x){
        x=_x;
    }
    void sety(int _y){
        y=_y;
    }
    int getx(){
        return x;
    }

    int sety(){
        return y;
    }

};

#endif // PUNTOS_H
