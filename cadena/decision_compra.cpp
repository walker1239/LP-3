#include "decision_compra.h"
decision_compra::decision_compra(){
    next=NULL;
}
void decision_compra::Compra(producto *p){
    next->Compra(p);
}

void decision_compra::Next(decision_compra *n)
{
    if (next!=NULL){
      next->Next(n);
    }else{
      next = n;
    }
}
   