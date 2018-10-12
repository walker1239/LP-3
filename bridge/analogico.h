#ifndef ANALOGICO_H
#define ANALOGICO_H
#include "reloj.h"

class analogico:public reloj
{
public:
    analogico(int hor, int min, int se){
        h=hor;
        m=min;
    }
    void dalahora() {
        cout<<h<<":"<<m<<endl;
    }
};

#endif // ANALOGICO_H
