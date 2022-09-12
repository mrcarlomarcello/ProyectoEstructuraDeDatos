#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include "TDALista.h"

class ArrayList : public TDALista
{
	public:
		ArrayList();
		~ArrayList();
		
		virtual void anula();
		virtual bool inserta(Object*,int);
		virtual Object* siguiente(int);
		virtual Object* anterior(int);
		//virtual void append(Object*);
		void imprimir(Object*);
		virtual void imprimir_lista(); 
		virtual bool suprime(int);
		virtual Object* recupera(int);
		virtual int localiza(Object*);
		virtual Object* primero();
		virtual bool vacia();
		
	protected:
		Object** array;
		int capacidad;
		int n; //size
};

#endif