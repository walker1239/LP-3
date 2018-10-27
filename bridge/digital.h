#ifndef DIGITAL_H
#define DIGITAL_H
#include "reloj.h"

class digital: public reloj
{
protected:
    int s;
public:
    digital(int hor, int min, int se){
        impl=new digital_impl(hor,min,se);
    }
    void dalahora(QPainter * painter) {
        impl->da_lahora(painter);
    }
    void set_hora(int h){
        impl->set_hora(h);
    }
    void set_min(int m){
        impl->set_min(m);
    }

};

#endif // DIGITAL_H
