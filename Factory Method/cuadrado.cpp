#include "cuadrado.h"
cuadrado::cuadrado(int _l):cuadrilatero(180,_l,_l,_l,_l){
	l=_l;
}
cuadrado::~cuadrado(){

}
void cuadrado::draw(){
	cout<<"cuadrado"<<endl;
}
float cuadrado::area(){
	return l*l;
}