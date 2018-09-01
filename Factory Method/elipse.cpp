#include "elipse.h"

elipse::elipse(int _radio){
	radio=_radio;
}
elipse::~elipse(){

}
void elipse::draw(){
	cout<<"elipse"<<endl;
}
float elipse::area(){
	return 3.1416 * radio*radio;
}
int elipse::perimetro(){
	return 2*3.1416 *radio;
}