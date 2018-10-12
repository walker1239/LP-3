#ifndef DIGITAL_H
#define DIGITAL_H
#include "reloj.h"

class digital: public reloj
{
protected:
    int s;
public:
    digital(int hor, int min, int se){
        impl=new digital_impl(hor,min,se);
    }
    void dalahora() {
        impl->da_lahora();
    }

};

#endif // DIGITAL_H
