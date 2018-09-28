#ifndef CIRCLE_H
#define CIRCLE_H
#include "figure.h"
#include "points.h"
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>
class circle : public figure,public points
{
private:
  int radio;
  points *centro;

public:
  circle(const string _color, points *_centro, const int _radio = 0) : figure(_color), radio(_radio)
  {
      centro=_centro;
  }
  ~circle();
  void draw(QPainter * painter){
      painter->drawEllipse(centro->get_x(),centro->get_x(),10,10);
  }
};
#endif //CIRCLE_H
