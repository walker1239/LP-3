#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <cmath>
#include "shape.h"
#include "point.h"
#include "factorycir.h"
using namespace std;
class circle
{
private:
    factorycir *fac;
    double const pi=3.1416;
    point* puntos;

public:

    circle(int radio=0);
    virtual ~circle();
    void draw();
    float area();
    int perimetro();
    point *getpoints();
    void setpoints(int x, int y);
    void set_radio(int _radio);
    int get_radio();
    void set_color(string _color);
    string get_color();

};

#endif // CIRCLE_H
