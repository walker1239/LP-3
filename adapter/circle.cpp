#include "circle.h"

circle::circle(int radio)
{
    fac=factorycir::get_instance();
    fac->set_radio(radio);
    puntos=new point();
}
circle::~circle()
{

}
float circle::area(){
    float a= float(pi*pow(fac->get_radio(),2));
    return a;
}
int circle::perimetro(){
    return int(2*pi*fac->get_radio());
}
void circle::draw(){
    cout<<"Circulo"<<endl;
}
point* circle::getpoints(){
    return puntos;
}
void circle::setpoints(int x, int y){
    puntos->set_x_y(x,y);
}

void circle::set_radio(int _radio){
    fac->set_radio(_radio);
}

int circle::get_radio(){
    return fac->get_radio();
}

void circle::set_color(string _color){
    fac->set_color(_color);
}

string circle::get_color(){
    return fac->get_color();
}
