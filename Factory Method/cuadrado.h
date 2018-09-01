#ifndef CUADRADO_H
#define CUADRADO_H

#include <iostream>
#include "cuadrilatero.h"
using namespace std;

class cuadrado : public cuadrilatero
{
	private:
		int l;
	public:
		cuadrado(int l=0);
		~cuadrado();
		void draw();
		float area();
		
};
#endif