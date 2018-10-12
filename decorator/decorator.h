#ifndef DECORATOR_H
#define DECORATOR_H
#include "widget.h"
#include "QPainter"
class decorator: public widget
{
    widget *wid;
  public:
    decorator(widget *w)
    {
        wid = w;
    }
    void do_this()
    {
        wid->do_this();
    }

};
#endif // DECORATOR_H
