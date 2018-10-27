#include <iostream>
using namespace std;
#include "presidente.cpp"
#include "director.cpp"
#include "manager.cpp"


int main(){
	presidente p;
	director d;
	manager m;
	producto *pro;
	m.Next(&d);
  	m.Next(&p);

  	int precio;
  	int numero_productos;
  	cout<<"numero de productos ";
  	cin>>numero_productos;
  	for(int i = 1; i <= numero_productos; i++){
  		cout<<"precio del producto ";
  		cin>>precio;
  		pro->set_precio(precio);
    	m.Compra(pro);
    	cout << '\n';
  	}

	return 0;
}