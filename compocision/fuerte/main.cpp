#include "robot.h"
#include "point.h"
int main()
{
	robot<int> t;
	t.moveto(30,50);
	cout<<"moviendo..."<<endl;
	t.printpos();
	return 0;
}