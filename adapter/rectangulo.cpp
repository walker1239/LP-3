#include "rectangulo.h"
rectangulo::rectangulo(int _b,int _h):cuadrilatero(180,_b,_b,_h,_h){
    fac=factoryrec::get_instance();
    fac->set_lados(_h,_b);
}
rectangulo::~rectangulo(){

}
void rectangulo::draw(){
	cout<<"rectangulo"<<endl;
}
float rectangulo::area(){
    return float(fac->get_altura()*fac->get_base());
}
void rectangulo::set_base(int _b){
    fac->set_base(_b);
}
void rectangulo::set_altura(int _h){
    fac->set_altura(_h);
}
int rectangulo::get_base(){
    return fac->get_base();
}
int rectangulo::get_altura(){
    return fac->get_altura();
}
