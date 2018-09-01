#include "rectangulo.h"
rectangulo::rectangulo(int _b,int _h):cuadrilatero(180,_b,_b,_h,_h){
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