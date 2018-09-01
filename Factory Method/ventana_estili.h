#ifndef VENTANA_ESTILI_H
#define VENTANA_ESTILI_H

#include <iostream>
#include "absfact.h"
using namespace std;
class ventana_estili:public absfact
{
public:
	ventana_estili();
	~ventana_estili();
	shape* create_cuadrilatero();
	shape* create_circulos();	
};
#endif