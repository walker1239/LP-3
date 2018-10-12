#ifndef ELEMENTZ_H
#define ELEMENTZ_H
#include "decorator.h"
#include "QPainter"
class elementz: public decorator
{
  public:
    elementz(widget *w): decorator(w){}
    void do_this()
    {
        decorator::do_this();
        cout << " elementz" << endl;
    }
    void drawMe(QPainter *DrawHere){
      QImage image1 ("images/elementoz.png");
      DrawHere->drawImage(30,30,image1);
      cout<<"creadoz";
    }
};

#endif // ELEMENTZ_H
