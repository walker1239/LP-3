#ifndef ANALOGICO_H
#define ANALOGICO_H
#include "reloj.h"

class analogico:public reloj
{
public:
    analogico(int hor, int min, bool pm){
        impl=new analogica_impl(hor,min,pm);
    }
    void dalahora() {
        impl->da_lahora();
    }
};

#endif // ANALOGICO_H
