#ifndef NODO
#define NODO
#include <iostream>

using namespace std;

class Lista;
class Nodo
{
  private:
  string clave;
  int ini;
  int fin;
  Nodo *sig;
  
  public:
  Nodo (string c, int i , int f);
  void matate();
  void print( ostream & os);
  
  friend class Lista;
};
#endif
