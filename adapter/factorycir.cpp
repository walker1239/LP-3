#include "factorycir.h"
factorycir* factorycir::instance=0;
factorycir::factorycir()
{
    radio=0;
    color="black";
}

factorycir* factorycir::get_instance(){
    if(instance==0){
        instance=new factorycir();
    }
    return instance;

}

void factorycir::set_radio(int _radio){
    radio=_radio;
}

int factorycir::get_radio(){
    return radio;
}

void factorycir::set_color(string _color){
    color=_color;
   //painterfactorycir->setBrush(QColor(255, 0, 0, 127));
}

string factorycir::get_color(){
    return color;
}

