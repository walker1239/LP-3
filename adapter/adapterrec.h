#ifndef ADAPTERREC_H
#define ADAPTERREC_H
#include "rectangulo.h"
#include <QPointF>
#include <QPainter>
#include <QColor>
#include <QPixmap>
#include <QPen>
#include "factoryrec.h"

class adapterrec
{
    rectangulo *reg;

public:
    adapterrec(rectangulo *rectangulo);

    void draw(QPainter * painter,QColor color);

};

#endif // ADAPTERREC_H
