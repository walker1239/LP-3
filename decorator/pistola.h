#ifndef PISTOLA_H
#define PISTOLA_H
#include "widget.h"

class pistola: public widget
{
  public:
    void do_this()
    {
    }
    void drawMe(QPainter *DrawHere){
      QImage image1 ("images/pistola.png");
      DrawHere->drawImage(30,30,image1);
    }
};
#endif // PISTOLA_H
