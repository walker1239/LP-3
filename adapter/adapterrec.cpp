#include "adapterrec.h"

adapterrec::adapterrec(rectangulo* rectangulo)
{
    reg=rectangulo;

}
void adapterrec::draw(QPainter * painter,QColor color){

    point* punt;
    punt=reg->getpoints();
    painter->setBrush(color);
    painter->drawRect(punt->get_x(),punt->get_y(),reg->get_base(),reg->get_altura());
}
