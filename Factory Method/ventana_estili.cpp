#include "ventana_estili.h"
ventana_estili::ventana_estili(){

}
ventana_estili::~ventana_estili(){

}
shape* ventana_estili::create_cuadrilatero(){
	return new rectangulo();
}
shape* ventana_estili::create_circulos(){
	return new elipse();

}