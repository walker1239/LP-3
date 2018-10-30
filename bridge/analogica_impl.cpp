#include "analogica_impl.h"

analogica_impl::analogica_impl(int hor, int min,bool _pm,int _width,int _height):reloj_implementor(hor,min)
{
    pm=_pm;
    width=_width;
    height=_height;
}
void analogica_impl::da_lahora(QPainter * painter){
    cout<<ho<<":"<<mi<<":"<<pm<<endl;
    static const QPoint hourHand[3] = {
        QPoint(7, 8),
        QPoint(-7, 8),
        QPoint(0, -40)
    };
    static const QPoint minuteHand[3] = {
        QPoint(7, 8),
        QPoint(-7, 8),
        QPoint(0, -70)
    };

    QColor hourColor(127, 0, 127);
    QColor minuteColor(0, 127, 127, 191);

    int side = qMin(width, height);
    cout<<side<<endl;
    painter->setRenderHint(QPainter::Antialiasing);
    painter->setPen(Qt::NoPen);
    painter->setBrush(hourColor);
    painter->save();
    painter->rotate(30.0 * ((ho + 1 / 60.0)));//6 hora
    painter->drawConvexPolygon(hourHand, 3);
    painter->restore();
    painter->setPen(hourColor);
    for (int i = 0; i < 12; ++i) {
        painter->drawLine(88, 0, 96, 0);
        painter->rotate(30.0);
    }
    painter->setPen(Qt::NoPen);
    painter->setBrush(minuteColor);

    painter->save();
    painter->rotate(6.0 * (mi + 1 / 60.0));//10 minutos
    painter->drawConvexPolygon(minuteHand, 3);
    painter->restore();
    painter->setPen(minuteColor);
    for (int j = 0; j < 60; ++j) {
        if ((j % 5) != 0)
            painter->drawLine(92, 0, 96, 0);
        painter->rotate(6.0);
    }
    painter->restore();

}

