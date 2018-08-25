#include "shape.h"
#include "cuadrilatero.h"
#include "rectangulo.h"
#include "circulo.h"
int main()
{
	rectangulo r(2,4);
	cout<<r.area()<<endl;
	cuadrilatero c(180,13,14,3,13);
	cout<<c.area()<<endl;
	circulo cir(15);
	cout<<cir.area()<<endl;
	cir.draw();
	return 0;
}