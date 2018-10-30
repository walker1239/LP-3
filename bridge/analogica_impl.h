#ifndef ANALOGICA_IMPL_H
#define ANALOGICA_IMPL_H
#include "reloj_implementor.h"
#include <QPainter>
class analogica_impl:public reloj_implementor
{
public:
    analogica_impl(int hor, int min,bool pm,int _width,int _height);
    void da_lahora(QPainter * painter);
    void set_hora(int h){
        ho=h;
    }
    void set_min(int min){
        mi=min;
    }
    void set_seg(int seg){}
protected:
    bool pm;
    int width;
    int height;
};

#endif // ANALOGICA_IMPL_H
