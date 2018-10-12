#ifndef ELEMENTY_H
#define ELEMENTY_H
#include "decorator.h"
#include "QPainter"

class elementy: public decorator
{
  public:
    elementy(widget *w): decorator(w){}
    void do_this()
    {
        decorator::do_this();
        cout << " elementy" << endl;
    }
    void drawMe(QPainter *DrawHere){
      QImage image1 ("images/elementoy.png");
      DrawHere->drawImage(30,30,image1);
      cout<<"creadoy";
    }
};
#endif // ELEMENTY_H
