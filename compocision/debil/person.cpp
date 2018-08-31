#include "person.h"
person::person(string name, int age){
	nombre=name;
	edad=age;
}
person::~person(){

}
string person::get_nombre(){
	return nombre;
}
