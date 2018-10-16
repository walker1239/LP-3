#include "Enfermedad.h"

Enfermedades::Enfermedades()
{
    l=new Lista<Enfermedad>();
}

Enfermedades::~Enfermedades()
{
    delete l;
}
void Enfermedades::fichero_indice(char * nom)
{
   ofstream guardar (nom);
   guardar<<l->getTam()<<endl;
   guardar<<*l<<endl;
   guardar.close();
}
void Enfermedades::cargar_indice(char * nom)
{
        char linea[60];

        int i,f,t;
        fstream lee(nom);
        lee>>t;
        lee.getline(linea, 60);
         while(t--)
         {
                lee.getline(linea, 60,'#');
                lee>>i>>f;
                //cout<<"l ->"<<linea<<" "<<i<<" "<<f<<endl;
                l->Add(*(new Enfermedad(linea,i,f)));
                lee.getline(linea, 60);
         }
         lee.close();
}

//void cargar_fichero(char * nom);
//void mostrar_info(char* nom_f, Nodo * n);

string Enfermedades::mostrar_info(char* nom_f, Nodo<Enfermedad> * n)
{
    if(!n)
        return "";

        char cad[MAX];
    ifstream sal(nom_f);
    sal.seekg(n->getDato().getIni());
    sal.getline(cad,MAX,'#');
   // system("clear");
    //cout<<"enf"<<n->clave<<endl<<endl;
    sal.getline(cad,MAX,'$');
   // cout<<"cont"<<cad<<endl<<endl;
    sal.close();
    return cad;
}
string Enfermedades::mostrar_info(char* nom_f, string enf)
{
    Nodo<Enfermedad> **aux;
    if(!l->find(*(new Enfermedad (enf, 0 , 0)),aux))
    {

        return "No lo encontro";
     }
    return  mostrar_info(nom_f,*aux);

}
//Lee el fichero y agrega a la lista
void  Enfermedades::cargar_fichero(char * nom_f)
{
  // cout<<"cargar fichero "<<endl;
        char cad[MAX];
        string name;
        string contenido;
        ifstream lee(nom_f);
        int t,a=1,b=0;
        lee>>t;
        cout<<t<<endl;
        lee.getline(cad,MAX);
        while(t--)
    {
        lee.getline(cad,MAX,'#');
        name=cad;

        lee.getline(cad,MAX,'$');
        contenido=cad;
                cout<<">"<<name<<"<"<<endl;
                cout<<">"<<contenido<<"<"<<endl;

       b=name.length()+contenido.length()+2+a;
           cout<<"a " <<a<< " b "<<b <<endl;
       l->Add(*(new Enfermedad(name,a,b)));
       a=b;


    }


    lee.close();
}
//Devolver nombre fichero imagen
string  Enfermedades::getImage(char* nom_f, Nodo<Enfermedad> * n)
{
    if(!n)
        return "";

    return n->getDato().getClave() + ".jpg";

}
string  Enfermedades::getImage(char* nom_f, string enf)
{
    Nodo<Enfermedad> **aux;
      if(!l->find(*(new Enfermedad (enf, 0 , 0)),aux))
    {
        //si no lo encuentra fichero vacio
        return "";
     }
    return  getImage(nom_f,*aux);
}

