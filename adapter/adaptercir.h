#ifndef ADAPTERCIR_H
#define ADAPTERCIR_H
#include <QPainter>
#include "circle.h"
#include <QColor>
#include <QPixmap>
#include <QPen>
#include "factorycir.h"
class adaptercir
{
private:
    circle* cir;
public:
    adaptercir(circle* circ);
    void draw(QPainter * painter,QColor color);
    void color(QPainter *colorcir,QColor color);
};

#endif // ADAPTERCIR_H
