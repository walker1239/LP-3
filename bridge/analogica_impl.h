#ifndef ANALOGICA_IMPL_H
#define ANALOGICA_IMPL_H
#include "reloj_implementor.h"
class analogica_impl:public reloj_implementor
{
public:
    analogica_impl(int hor, int min,bool pm);
    void da_lahora();
protected:
    bool pm;
};

#endif // ANALOGICA_IMPL_H
