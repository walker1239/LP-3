#ifndef MANAGER_H
#define MANAGER_H
#include "decision_compra.cpp"
class manager: public decision_compra
{
public:

  //manager();

	void Compra(producto *p){
		if(p->get_precio()>2000){
			cout << "manager siguiente   ";
            decision_compra::Compra(p); 
		}else{
			cout << "manager compra   ";
		}


	}
    
};

#endif // MANAGER_H
