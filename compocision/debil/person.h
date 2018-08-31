#ifndef PERSONA_H
#define PERSONA_H 

#include <iostream>
using namespace std;

class person
{
private:
	string nombre;
	int edad;
public:
	person(string name="", int age=0);
	~person();
	string get_nombre();
};
#endif