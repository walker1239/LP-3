#ifndef DECISION_COMPRA_H
#define DECISION_COMPRA_H
#include "producto.cpp"
class decision_compra
{
private:
	decision_compra *next;

public:

    decision_compra(){
    	next=NULL;
    }
    virtual void Compra(producto *p){
    	next->Compra(p);
    }

    void Next(decision_compra *n)
    {
        if (next!=NULL){
          next->Next(n);
        }else{
          next = n;
        }
    }
   
};

#endif // BUILDER_H
