#include <iostream>
using namespace std;

template <class T>
class double_linked_list;

template <class T>
class d_node
{
	private:
		T dato;
		d_node<T> * p_next;
		d_node<T> * p_prev;
	
	public:
		d_node(const T & d, d_node<T> * n = NULL, d_node<T> * p = NULL)
		{
			dato=d;
			p_next=n;
			p_prev=p;
		}
		void print(){
			cout<<dato<<"->";
		}
	
	
	friend class double_linked_list<T>;
};

template <class T>
class double_linked_list
{
	private:
		d_node<T> * p_head;
		d_node<T> * p_last;
		d_node<T> * actual;
		int count=1;

	public:
		double_linked_list();
		virtual ~double_linked_list(){}
		void insert_front(const T & d);
		void insert_back(const T & d);
		void remove_front();
		void remove_back();
		void reverse();
		T Begin();
		T getLastDato();
		T retroceder();
		T avanzar();
		void print();
		void _size(d_node<T> *n);
		int size();
};

template<class T>
double_linked_list<T>::double_linked_list(){
	p_head=NULL;
	p_last=NULL;
}

template<class T>
void double_linked_list<T>::insert_front(const T & d){
	d_node<T> *nuevo=new d_node<T>(d,p_head,p_last);
   	if(p_head==NULL){
   		actual=p_last=nuevo;
   		p_head=p_last=nuevo;
   	}else{
   		nuevo->p_next=p_head;
   		p_head->p_prev=nuevo;
   		actual=nuevo;
   		p_head=nuevo;
   	}
}

template<class T>
void double_linked_list<T>::insert_back(const T & d){
	d_node<T> *nuevo=new d_node<T>(d,p_head,p_last);
	if(p_last==NULL){
		p_head=p_last=nuevo;
	}else{
		p_last->p_next=nuevo;
		nuevo->p_prev=p_last;
		p_last=nuevo;
	}
}

template<class T>
void double_linked_list<T>::remove_front(){
	if(p_head==NULL){
		//cout<<"Esta vacia la lista "<<endl;
	}else{
		if(p_head==p_last){
			p_head=p_last=NULL;//en el caso que solo tengo un nono
		}else{
			d_node<T> *aux=p_head;
			p_head=p_head->p_next;
			p_head->p_prev=NULL;
			delete aux;
			//cout<<"se elimino el primer elemento"<<endl;
		}
	}
}

template<class T>
void double_linked_list<T>::remove_back(){
	if(p_head==NULL){
		//cout<<"Esta vacio la lista"<<endl;
	}else{
		if(p_head==p_last){
			p_head=p_last=NULL;
		}else{
			d_node<T> *aux=p_last;
			p_last=p_last->p_prev;
			p_last->p_next=NULL;
			delete aux;
		//	cout<<"se elimino el ultimo elemento"<<endl;
		}
	}

}

template<class T>
void double_linked_list<T>::reverse(){
	cout<<"el reverse : "<<endl;
	d_node<T> *auxx = p_head;
	while (auxx != NULL) {
    	d_node<T> *tmp = auxx->p_next;
    	auxx->p_next = auxx->p_prev;
    	auxx->p_prev = tmp;
    	if (tmp == NULL) {
        	p_last = p_head;
        	p_head = auxx;
    	}
    auxx = tmp;
	}
}

template<class T>
void double_linked_list<T>::print(){
	d_node<T> *aux=p_head;
	bool seguir=true;
	while(seguir){
		cout<<aux->dato<<" , ";
		if(aux==p_last){
			seguir=false;
		}
		aux=aux->p_next;
	}
}


template<class T>
T double_linked_list<T>::Begin(){

	return p_head->dato;
}

template<class T>
T double_linked_list<T>::getLastDato(){

	cout<<"el ultimo dato de la lista es : "<<endl;
	cout<<p_last->dato;
}


template<class T>
T double_linked_list<T>::retroceder(){
	d_node<T> *aux=actual;
	if(actual->p_next!=NULL){
		actual=actual->p_next;
		aux=actual->p_prev;
	}else{
		cout<<"No puede retroceder mas "<<endl;
	}
	return actual->dato;
	
}



template<class T>
T double_linked_list<T>::avanzar(){
	d_node<T> *tmp= actual;
	if(actual->p_prev!=p_head->p_prev){
	actual=actual->p_prev;
	tmp=actual->p_next;
	}else{
		cout<<"No puede avanzar mas "<<endl;
	}
	return actual->dato;
}		


template<class T>
void double_linked_list<T>::_size(d_node<T> *n){
	count=1;
	while (n != p_last) { 
		n = n->p_next;
		count++; 
		}

	}
template<class T>
int double_linked_list<T>::size(){
	_size(p_head);
	return count;
}






/*template<class T>
T double_linked_list<T>::Beginn(){

	return p_head->dato;
}
*/


/*
int main(){
	double_linked_list<int> lista;
	for(int i=0;i<100;i++){
	lista.insert_front(i);
	}
	lista.print();
	cout<<"dsfdsafsdfads"<<endl;

	lista.reverse();
	lista.print();


	return 0;
}
*/