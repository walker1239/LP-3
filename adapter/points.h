#ifndef POINTS_H
#define POINTS_H
#include "figure.h"
class points
{
  protected:
    qreal x;
    qreal y;

  public:
    points(const int _x = 0, const int _y = 0);
    virtual ~points() = default;
    void set_x_y(int _x,int _y){
        x=_x;
        y=_y;
    }
    qreal get_x(){
        return x;
    }
    qreal get_y(){
        return y;
    }


};
#endif //POINTS_H
