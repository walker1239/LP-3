#ifndef RELOJTIEMPO_H
#define RELOJTIEMPO_H
#include <iostream>
using namespace std;

class reloj
{
protected:
    int h,m;
public:
    virtual void dalahora()=0;
};

#endif // RELOJTIEMPO_H
