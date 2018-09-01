#include "ventana_simple.h"
#include "ventana_estili.h"
int main()
{
	shape *vent;
	ventana_estili r;
	vent=r.create_cuadrilatero();
	vent->draw();
	return 0;
}