#include "Lista.h"
#include <stdlib.h>


Lista::Lista()
{
	head =last=0;
	tam=0;
}
Lista::~Lista()
{
	if(head)
		head->matate();
}
bool Lista::find(string nom , Nodo **& tmp)
{
	tmp=&head;
	while (*tmp)
	{
		if((*tmp)->clave==nom) return true ;
		if((*tmp)->clave>nom)  return false;
		
		  tmp=&((*tmp)->sig);
	}
	return false;
}
bool Lista::add ( string nom, int i, int f)
{
	Nodo ** aux;
	if(find(nom,aux)) return false;
	Nodo *nuevo= new Nodo(nom, i , f);
	nuevo->sig=*aux;
	*aux=nuevo;
	tam++;
	return true;
}
//sobrecarga de operador <<
ostream & operator <<(ostream &os , Lista & l)
{
  l.head->print(os);
  return os;
}
void Lista::fichero_indice(char * nom)
{
   ofstream guardar (nom);
   guardar<<tam<<endl;
   guardar<<*this<<endl;
   guardar.close();
}
void Lista::cargar_indice(char * nom)
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
		add(linea,i,f);
		lee.getline(linea, 60);
	 }
	 lee.close();
}

//void cargar_fichero(char * nom);
//void mostrar_info(char* nom_f, Nodo * n);

string Lista::mostrar_info(char* nom_f, Nodo * n)
{
    if(!n)
        return "";
        
   	char cad[MAX];        
    ifstream sal(nom_f);
    sal.seekg(n->ini);
    sal.getline(cad,MAX,'#');
   // system("clear");
    //cout<<"enf"<<n->clave<<endl<<endl;
    sal.getline(cad,MAX,'$');    
   // cout<<"cont"<<cad<<endl<<endl;
    sal.close();
    return cad;
}
string Lista::mostrar_info(char* nom_f, string enf)
{
    Nodo **aux;
    if(!find(enf,aux))
    {

        return "No lo encontro";
     }   
    return  mostrar_info(nom_f,*aux);
    
}
//Lee el fichero y agrega a la lista 
void Lista::cargar_fichero(char * nom_f)
{
    cout<<nom_f<<endl;

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
        //cout<<">"<<name<<"<"<<endl;
        //cout<<">"<<contenido<<"<"<<endl;

        b=name.length()+contenido.length()+2+a;
        //cout<<"a " <<a<< " b "<<b <<endl;
        add(name,a,b);
        a=b;
    }


    lee.close();
}
//Devolver nombre fichero imagen
string Lista::getImage(char* nom_f, Nodo * n)
{
    if(!n)
        return "";

    return n->clave + ".jpg";

}
string Lista::getImage(char* nom_f, string enf)
{
    Nodo **aux;
    if(!find(enf,aux))
    {
        //si no lo encuentra fichero vacio
        return "";
     }   
    return  getImage(nom_f,*aux);
}
