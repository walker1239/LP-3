#ifndef DIGITAL_IMPL_H
#define DIGITAL_IMPL_H
#include "reloj_implementor.h"
class digital_impl:public reloj_implementor
{
public:
    digital_impl(int hor, int min, int seg);
    void da_lahora(QPainter * painter);
protected:
    int s;
};

#endif // DIGITAL_IMPL_H
