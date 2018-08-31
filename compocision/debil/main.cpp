#include "party.h"
#include "person.h"


int main()
{
	party p("fiesta");
	person *w = new person("walker",17);
	person *s = new person("sofia",17);
	person *t = new person("trika",17);
	p.invitarPersona(w);
	p.invitarPersona(s);
	p.invitarPersona(t);
	p.printpersons();
	return 0;
}