#ifndef ELIPSE_H
#define ELIPSE_H

#include <iostream>
#include "shape.h"
using namespace std;

class elipse : public shape
{
	private:
		int radio;
	public:
		elipse(int _radio=0);
		~elipse();
		void draw();
		float area();
		int perimetro();
		
};
#endif