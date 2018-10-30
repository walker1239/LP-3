#ifndef DIGITAL_H
#define DIGITAL_H
#include "reloj.h"

class digital: public reloj
{
protected:
    int s;
public:
    digital(int hor=12, int min=60, int se=30){
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
    void set_seg(int s){
        impl->set_seg(s);
    }

};

#endif // DIGITAL_H
