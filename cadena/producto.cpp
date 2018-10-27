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
		producto(int _precio=2000){
			descripcion="descripcion del producto";
			precio=_precio;
		}
		void set_precio(int precio_){
			precio=precio_;
		}
		int get_precio(){
			return precio;
		}

    	
};

#endif // BUILDER_H