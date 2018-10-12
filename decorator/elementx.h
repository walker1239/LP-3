#ifndef ELEMENTX_H
#define ELEMENTX_H
#include "decorator.h"
#include <QPainter>
#include <QImage>

class elementx: public decorator
{
  public:
    elementx(widget *w): decorator(w){}
    void do_this()
    {
        cout << " elementx" << endl;
        decorator::do_this();
    }
    void drawMe(QPainter *DrawHere){
      QImage image1 ("images/elementox.png");
      DrawHere->drawImage(30,30,image1);
      cout<<"creadox";
    }
};

#endif // ELEMENTX_H
