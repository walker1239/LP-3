
#include "producto.h"

producto::producto(int _precio){
	descripcion="descripcion del producto";
	precio=_precio;
}
void producto::set_precio(int precio_){
	precio=precio_;
}
int producto::get_precio(){
	return precio;
}