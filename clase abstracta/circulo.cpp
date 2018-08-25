#include "circulo.h"

circulo::circulo(int _radio){
	radio=_radio;
}
circulo::~circulo(){

}
void circulo::draw(){
	cout<<"Circulo"<<endl;
}
float circulo::area(){
	return 3.1416 * radio*radio;
}
int circulo::perimetro(){
	return 2*3.1416 *radio;
}