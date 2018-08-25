#include "rectangulo.h"
rectangulo::rectangulo(int _b=0,int _h=0):cuadrilatero(180,_b,_b,_h,_h){
	b=_b;
	h=_h;
}
rectangulo::~rectangulo(){

}
void rectangulo::draw(){
	cout<<"rectangulo"<<endl;
}
float rectangulo::area(){
	return b*h;
}