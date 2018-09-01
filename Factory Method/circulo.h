#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
#include "shape.h"
using namespace std;

class circulo : public shape
{
	private:
		int radio;
	public:
		circulo(int _radio=0);
		~circulo();
		void draw();
		float area();
		int perimetro();
		
};
#endif