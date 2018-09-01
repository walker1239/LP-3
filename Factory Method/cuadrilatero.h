#ifndef CUADRILATERO_H
#define CUADRILATERO_H

#include <iostream>
#include "shape.h"
using namespace std;

class cuadrilatero : public shape
{
	private:
		int l1,l2,l3,l4,an;
	public:
		cuadrilatero(int _an,int _l1,int _l2,int _l3,int _l4);
		virtual ~cuadrilatero();
		void draw();
		float area();
		int perimetro();
		
};
#endif