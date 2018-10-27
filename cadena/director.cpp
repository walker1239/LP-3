#ifndef DIRECTOR_H
#define DIRECTOR_H
#include "decision_compra.cpp"
class director: public decision_compra
{
public:

  //director();

	void Compra(producto *p){
		if(p->get_precio()>4000){
			cout << "director siguiente   ";
            decision_compra::Compra(p); 
		}else{
			cout << "director compra   ";
		}

	}
    
};

#endif // DIRECTOR_H