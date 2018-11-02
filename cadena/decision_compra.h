#ifndef DECISION_COMPRA
#define DECISION_COMPRA

#include "producto.h"
class decision_compra
{
private:
    decision_compra *next;

public:

    decision_compra();
    virtual ~decision_compra(){}
    virtual void Compra(producto *p);

    void Next(decision_compra *n);
};
#endif