#ifndef ABSFACT_H
#define ABSFACT_H

#include <iostream>
#include "shape.h"
#include "circulo.h"
#include "elipse.h"
#include "cuadrado.h"
#include "rectangulo.h"
using namespace std;
class absfact
{
public:
	virtual shape* create_cuadrilatero()=0;
	virtual shape* create_circulos()=0;	
	
};
#endif