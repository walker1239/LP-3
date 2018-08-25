#include "cuadrilatero.h"
#include <cmath>
cuadrilatero::cuadrilatero(int _an=0,int _l1=0,int _l2=0,int _l3=0,int _l4=0)
{
	an=_an;
	l1=_l1;
	l2=_l2;
	l3=_l3;
	l4=_l4;
}
cuadrilatero::~cuadrilatero()
{

}
void cuadrilatero::draw()
{
	cout<< "cuadrilatero"<<endl;
}
int cuadrilatero::perimetro()
{
	return l1+l2+l3+l4;
}
float cuadrilatero::area()
{
	int s=perimetro()/2;
	float A= pow((s-l1)*(s-l2)*(s-l3)*(s-l4)-l1*l2*l3*l4*(pow((cos(an/2)*3.1416/180),2)),0.5);
	return A;
}