#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
using namespace std;
class producto
{
	private:
		int precio;
		string descripcion;

	public:
		producto(int _precio=2000);
		~producto(){}
		void set_precio(int precio_);
		int get_precio();

    	
};

#endif