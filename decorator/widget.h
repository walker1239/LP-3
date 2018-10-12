#ifndef INTERFAZELEMENTO_H
#define INTERFAZELEMENTO_H
#include <iostream>
#include "QPainter"
using namespace std;

class widget
{
  public:
    virtual void do_this() = 0;
    virtual void drawMe(QPainter *DrawHere)=0;
};

#endif // INTERFAZELEMENTO_H
