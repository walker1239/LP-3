#ifndef RELOJ_IMPLEMENTOR_H
#define RELOJ_IMPLEMENTOR_H

class reloj_implementor
{
private:
    int hora,minutos;
public:
    reloj_implementor(int hor,int min);
    virtual void da_lahora();
};


#endif // RELOJ_IMPLEMENTOR_H
