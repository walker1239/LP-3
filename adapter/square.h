#ifndef SQUARE_H
#define SQUARE_H
#include "figure.h"
#include "points.h"
class square : public figure
{
  private:
    points *puntos[4];

  public:
    square(const string _color="", points *_puntos[4]=nullptr) : figure(_color) {
        *puntos=*_puntos;
    }
    ~square();
    void draw(QPainter * painter){
        static const QPointF points[4] = {
            QPointF(puntos[0]->get_x(),puntos[0]->get_y()),
            QPointF(puntos[1]->get_x(),puntos[1]->get_y()),
            QPointF(puntos[2]->get_x(),puntos[2]->get_y()),
            QPointF(puntos[3]->get_x(),puntos[3]->get_y())
        };

        painter->drawPolygon(points,4);
    }
};
#endif //SQUARE_H
