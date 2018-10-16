#ifndef LISTA
#define LISTA
#include<iostream>
#include <fstream>
#include <string>
#include "Nodo.h"
#define MAX 10000
using namespace std;

class Lista
{
	private:
	Nodo *head;
	Nodo *last;
	int tam;
	public:
	Lista();
	~Lista();
	bool find(string nom , Nodo **& tmp);
	bool add ( string nom, int i, int f);
	void fichero_indice(char * nom);
	void cargar_indice(char * nom);
	//--------------------
	void cargar_fichero(char * nom);
	
	string getImage(char* nom_f, Nodo * n);
	string getImage(char* nom_f, string enf);
	
    string  mostrar_info(char* nom_f, Nodo * n);
    string mostrar_info(char* nom_f, string enf);
	friend ostream & operator <<(ostream &os , Lista & l);
};

#endif
