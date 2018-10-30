#ifndef ANALOGICO_H
#define ANALOGICO_H
#include "reloj.h"
#include <QPainter>
class analogico:public reloj
{
public:
    analogico(int hor=12, int min=60, bool pm=1,int h=480, int w=680){
        impl=new analogica_impl(hor,min,pm,h,w);
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
    void set_seg(int seg){}
};

#endif // ANALOGICO_H
