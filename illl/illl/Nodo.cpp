#include "Nodo.h"

Nodo::Nodo (string c, int i , int f)
  {
  	clave=c;
  	ini=i;
  	fin=f;
  	sig=0;
  }
  void Nodo::matate()
  {
  	if(sig) sig->matate();
  	else
  		delete this;
  }

  void Nodo::print( ostream & os)
  {
    if(sig)
    	sig->print(os);
    	os<<clave<<"#"<<ini<<" "<<fin<<endl;
   
   
  }
