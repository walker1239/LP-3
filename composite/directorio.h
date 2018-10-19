#ifndef DIRECTORIO_H
#define DIRECTORIO_H
#include <iostream>
#include "fileabstract.h"
#include <vector>
using namespace std;

class Directorio: public Fileabstract
{
	private:
		string nombre;
		vector<Fileabstract*> Files;

    public:
        Directorio(string nom=""){
        	nombre=nom;
        }
        ~Directorio(){}
        void add(Fileabstract* Fi){
        	Files.push_back(Fi);
        }

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
           
        	
        	for(int i=0; i<Files.size();i++){

            	
        			cout<<nombre;
            		cout<<"->";
            		Files[i]->listar();
            		cout<<endl;
            }
           	for(int i=0; i<Files.size();i++){

 					Files[i]->dibujar();
        			
            } 
           

     //       cout<<endl;
        }
        
        void dibujararbol(){
        	cout<<"digraph mytree{";
        	cout<<endl;
        	dibujar();
        	cout<<"}";
        }
    
	
};
#endif 
