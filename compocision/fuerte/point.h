#ifndef POINT_H
#define POINT_H 

#include <iostream>
using namespace std;

template <class T>
class point
{
private:
	T x;
	T y; 
public:
	point(T _x=0, T _y=0);
	~point();
	void set_x(T _x);
	void set_y(T _y);
	T get_x();
	T get_y();
};
#include "point.inl"
#endif