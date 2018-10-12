#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class shape
{
	public:
		virtual void draw()=0;
		virtual float area()=0;
		virtual int perimetro()=0;
		
};
#endif