#ifndef ROBOT_H
#define ROBOT_H 

#include <iostream>
#include "point.h"
using namespace std;

template <class T>
class robot
{
private:
	point<T> p; 
public:
	robot();
	~robot();
	void moveto(T _x,T _y);
	void printpos();
};
#include "robot.inl"
#endif