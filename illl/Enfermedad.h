#ifndef ENFERMEDAD_H
#define ENFERMEDAD_H

#include <string>
#include "Lista.h"
#include <fstream>

#define MAX 10000

class Enfermedades;

class Enfermedad
{
private:
    string clave;
    int ini;
    int fin;
public:
    Enfermedad( string c , int i , int f)
    {
        clave=c;
        ini=i;
        fin=f;
    }
    string getClave()
    {
        return clave;
    }
    int getIni()
    {
        return ini;
    }
    int getFin()
    {
        return fin;
    }
    bool operator ==(Enfermedad & e)
    {
        return clave==e.clave;
    }
    bool operator >(Enfermedad & e)
    {
        return clave>e.clave;
    }
    friend ostream & operator <<(ostream &os , Enfermedad & e)
    {
        os<<e.clave<<" "<<e.ini<<" "<<e.fin<<endl;
        return os;
    }

    friend class Enfermedades ;

};

class Enfermedades
{
private:
    Lista<Enfermedad> *l;
public:
    Enfermedades();
    ~Enfermedades();
    void fichero_indice(char * nom);
    void cargar_indice(char * nom);
    //--------------------
    void cargar_fichero(char * nom);

    string getImage(char* nom_f, Nodo<Enfermedad> * n);
    string getImage(char* nom_f, string enf);

    string  mostrar_info(char* nom_f, Nodo<Enfermedad> * n);
    string mostrar_info(char* nom_f, string enf);
    Lista<Enfermedad> & getLista()
    {
        return *l;
    }
};

#endif // ENFERMEDAD_H
