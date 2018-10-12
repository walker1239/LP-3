#ifndef POINT_H
#define POINT_H
#include <iostream>

using namespace std;

class point
{
    protected:
        int x,y;
public:
        point(int _x = 60, int _y=60);
        ~point();
        void set_x(int _x);
        void set_y(int _y);
        void set_x_y(int _x,int _y);
        int get_x();
        int get_y();
};

#endif // POINT_H
