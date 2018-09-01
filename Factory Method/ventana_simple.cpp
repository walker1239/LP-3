#include "ventana_simple.h"
ventana_simple::ventana_simple(){

}
ventana_simple::~ventana_simple(){

}
shape* ventana_simple::create_cuadrilatero(){
	return new cuadrado();
}
shape* ventana_simple::create_circulos(){
	return new circulo();

}