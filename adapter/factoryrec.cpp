#include "factoryrec.h"
factoryrec* factoryrec::instance=0;
factoryrec::factoryrec()
{
    base=0;
    altura=0;
    color="black";
}

factoryrec* factoryrec::get_instance(){
    if(instance==0){
        instance=new factoryrec;
    }
    return instance;

}

void factoryrec::set_lados(int _base,int _altura){
    base=_base;
    altura=_altura;
}

int factoryrec::get_base(){
    return base;
}
int factoryrec::get_altura(){
    return altura;
}
void factoryrec::set_color(string _color){
    color=_color;
}

string factoryrec::get_color(){
    return color;
}
void factoryrec::set_base(int _b){
    base=_b;
}
void factoryrec::set_altura(int _h){
    altura=_h;
}
