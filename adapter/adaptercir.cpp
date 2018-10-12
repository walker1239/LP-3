#include "adaptercir.h"

adaptercir::adaptercir(circle* circ)
{
    cir=circ;
}
void adaptercir::draw(QPainter * painter,QColor color){
    point* c;
    c=cir->getpoints();
    painter->setBrush(color);
    painter->drawEllipse(c->get_x(),c->get_y(),cir->get_radio(),cir->get_radio());
}



void adaptercir::color(QPainter * colorcir,QColor color){

   // colorcir->setBrush(QColor(255, 0, 0, 127));
    colorcir->setBrush(color);
}
