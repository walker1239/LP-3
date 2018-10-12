#ifndef RELOJ_IMPLEMENTOR_H
#define RELOJ_IMPLEMENTOR_H
#include <iostream>
using namespace std;
class reloj_implementor
{
public:
    reloj_implementor(int hor,int min);
    virtual void da_lahora();

protected:
    int ho,mi;
};


#endif // RELOJ_IMPLEMENTOR_H
