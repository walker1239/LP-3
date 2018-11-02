#ifndef PRESIDENTE_H
#define PRESIDENTE_H
#include "decision_compra.h"
class presidente: public decision_compra
{
public:
	presidente(){}
	~presidente(){}
	void Compra(producto *p);
};

#endif // BUILDER_H
