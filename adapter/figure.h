#ifndef FIGURE_H
#define FIGURE_H
#include <iostream>
#include <string>
#include <vector>
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>
using namespace std;

class figure
{
  protected:
    string color;

  public:
    figure(const string &_color = "");
    virtual ~figure() = default;
    virtual void draw();
};

#endif // FIGURE_H
