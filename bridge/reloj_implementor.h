#ifndef RELOJ_IMPLEMENTOR_H
#define RELOJ_IMPLEMENTOR_H
#include <iostream>
#include <QPainter>
using namespace std;
class reloj_implementor
{
public:
    reloj_implementor(int hor,int min);
    virtual void da_lahora(QPainter * painter);
    virtual void set_hora(int h)=0;
    virtual void set_min(int min)=0;
protected:
    int ho,mi;
};


#endif // RELOJ_IMPLEMENTOR_H
