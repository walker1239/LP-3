#ifndef PARTY_H
#define PARTY_H 
#include <vector>
#include <iostream>
#include "person.h"
using namespace std;

class party
{
private:
	vector<person*>personas;
	string name;
public:
	party(string _name="");
	~party();
	void invitarPersona(person *_p);
	void printpersons();

};
#endif