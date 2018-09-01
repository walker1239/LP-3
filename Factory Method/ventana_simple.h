#ifndef VENTANA_SIMPLE_H
#define VENTANA_SIMPLE_H

#include <iostream>
#include "absfact.h"
using namespace std;
class ventana_simple:public absfact
{
public:
	ventana_simple();
	~ventana_simple();
	shape* create_cuadrilatero();
	shape* create_circulos();	
};
#endif