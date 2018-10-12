#include "point.h"

point::point(int _x,int _y)
{
    x=_x;
    y=_y;
}
void point::set_x(int _x){
    x=_x;
}
void point::set_y(int _y){
    y=_y;
}
void point::set_x_y(int _x,int _y){
    x=_x;
    y=_y;
}
int point::get_x(){
    return x;
}
int point::get_y(){
    return y;
}
