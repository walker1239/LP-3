#ifndef FACTORYCIR_H
#define FACTORYCIR_H
#include <iostream>
#include <QPointF>
#include <QPainter>
#include <QColor>
#include <QPixmap>
#include <QPen>
using namespace std;
class factorycir
{
private:
    int radio;
    string color;
    factorycir();
    QPainter *painterfactorycir;
public:
    static factorycir* instance;
    static factorycir* get_instance();
    void set_radio(int _radio);
    int get_radio();
    void set_color(string _color);
    string get_color();

};

#endif // FACTORYCIR_H
