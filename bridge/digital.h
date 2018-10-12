#ifndef DIGITAL_H
#define DIGITAL_H
#include "reloj.h"

class digital: public reloj
{
protected:
    int s;
public:
    digital(int hor, int min, int se){
        h=hor;
        m=min;
        s=se;
    }
    void dalahora() {
        cout<<h<<":"<<m<<":"<<s<<endl;
    }

};

#endif // DIGITAL_H
