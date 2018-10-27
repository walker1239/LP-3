#ifndef RELOJTIEMPO_H
#define RELOJTIEMPO_H
#include <iostream>
#include "reloj_implementor.h"
#include "analogica_impl.h"
#include "digital_impl.h"
using namespace std;

class reloj
{
protected:
    reloj_implementor* impl;
public:
    virtual void dalahora(QPainter * painter)=0;
};

#endif // RELOJTIEMPO_H
