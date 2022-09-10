#ifndef NODO_H
#define NODO_H

#include "Object.h"

class Nodo
{
	public:
		Nodo();
		~Nodo();
		
		void setSiguiente(Nodo*);
		void setAnterior(Nodo*);
		void setItem(Object*);
		Nodo* getSiguiente();
		Nodo* getAnterior();
		
		//TODO: Hacer gets/sets
		
	protected:
		Nodo* siguiente;
		Object* item;
		Nodo* anterior;
};

#endif