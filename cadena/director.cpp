#include "director.h"
void director::Compra(producto *p){
	if(p->get_precio()>4000){
		cout << "director siguiente   ";
        decision_compra::Compra(p); 
	}else{
		cout << "director compra   ";
	}
}
    
