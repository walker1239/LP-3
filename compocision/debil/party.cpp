#include "party.h"
#include <vector>
party::party(string _name){
	name=_name;
}
party::~party(){

}
void party::invitarPersona(person * _p){
	personas.push_back(_p);
}
void party::printpersons(){
	//for(auto it:personas){
	//	cout<<it.get_nombre();
	//}
	for(int i=0;i<personas.size();i++){
		cout<<personas[i]->get_nombre()<<endl;
	}
}