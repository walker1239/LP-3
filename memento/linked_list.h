#ifndef LINKED_LIST
#define LINKED_LIST

#include <iostream>

using namespace std;

template <class T>
class linked_list;

template <class T>
class node
{
	private:
		T dato;
		node<T> * p_next;
	
	public:
		node(const T & d, node<T> * n = NULL);
		node();
		virtual ~node();
		void print();

	friend class linked_list<T>;
};

template <class T>
class linked_list
{
	private:
		node<T> * p_head;
		node<T> * p_last;
		node<T> * actual;
		int count;

	public:
		linked_list();
		virtual ~linked_list();
		void insert_front(const T & d);
		void insert_back(const T & d);
		bool find(const T & d);
		void remove_front();
		void remove_back();
		void reverse();
		T getFirstDato();
		T getLastDato();
		T Back(){
			if(!p_head )
	    {
	        throw std::out_of_range("Can't return value from empty list");
	    }
	    return p_last->dato;
		}




		int _size(node<T> *n){
			while (n != NULL) { 
		  		++count; 
		  		n = n->p_next;
			}
		}
		int size(){
			_size(p_head);
			return count;
		}

		T Begin()
		{
			return p_head->dato;
		}

		T avanazar()
		{	
			node<T> *aux;
			node<T> *tmp;
			aux=p_head->p_next;
			actual=p_head->p_next;
			tmp=p_head;

			return tmp->dato=aux->dato;
		}


		T retoceder(){
			node<T> *tmp= p_head;
			node<T> *tmp2;
			while(tmp->p_next!=actual){
				tmp2=tmp;
				tmp=tmp->p_next;
			}
			tmp2->p_next=NULL;
			delete tmp;
		}


		void print();

		class iterator
		{
			node<T> * n;
			
			public:
			iterator(node<T> * _n): n(_n) {}

			iterator & operator++()
			{
				n = n->p_next;
			}

			bool operator != (const iterator & it)
			{
				return n != it.n;
			}

			const T & operator*()
			{
				return n->dato;
			}
		};
			const iterator begin()
			{
			return p_head;
			}

			const iterator end(){

			return NULL;
			}
};
#include "linked_list.inl"
#endif