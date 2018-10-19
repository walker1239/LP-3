#ifndef FILE_H
#define FILE_H
#include <iostream>
#include "fileabstract.h"
using namespace std;

class File: public Fileabstract
{
	private:
		string nombre;
		
    public:
        File(string nom=""){
        	nombre=nom;
        
        }
        ~File(){}
        void listar(){
        	cout<<nombre<<'\t';
        }
        void set_nombre(string nom){
        	nombre=nom;
        }
        string get_nombre(){
        	return nombre;
        }

        void dibujar(){
        	//listar();
        }
};


#endif