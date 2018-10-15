#ifndef ANALOGICO_H
#define ANALOGICO_H
#include "reloj.h"

class analogico:public reloj
{
public:
    analogico(int hor, int min, bool pm){
        impl=new analogica_impl(hor,min,pm);
    }
    void dalahora(QPainter * painter) {
        impl->da_lahora(painter);
    }
    void set_hora(int _hora){
        impl->set_hora(_hora);
    }

    int get_hora(){
        impl->get_hora();
    }
};

#endif // ANALOGICO_H
