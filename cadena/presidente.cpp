#ifndef PRESIDENTE_H
#define PRESIDENTE_H
#include "decision_compra.cpp"
class presidente: public decision_compra
{
public:
	void Compra(producto *p){
		if(p->get_precio()>0){
			cout << "presidente compra   ";
            
            }


	}

  //manager();
    
};

#endif // BUILDER_H