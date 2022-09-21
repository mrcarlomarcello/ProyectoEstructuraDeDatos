#pragma once
//
// Created by shello on 09-18-22.
//

#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#include "TDACola.h"

class ArrayQueue : public TDACola
{
	public:
		ArrayQueue();
		~ArrayQueue();
		
		virtual Object* frente();
		
		virtual void imprime_cola();
		
		virtual void anula();
		
		//Dequeue
		virtual Object* saca_de_cola(); 
		
		//Queue
		virtual void pone_en_cola(Object*);
		
		virtual bool vacia();
	protected:
		int capacidad;
		int n;
		int inicio;
		int final;
		Object** array;
};

#endif //ARRAYQUEUE_H
