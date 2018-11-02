#ifndef DIRECTOR_H
#define DIRECTOR_H
#include "decision_compra.cpp"
class director: public decision_compra
{
public:

  	director(){}
  	~director(){}
	void Compra(producto *p);
    
};

#endif // DIRECTOR_H