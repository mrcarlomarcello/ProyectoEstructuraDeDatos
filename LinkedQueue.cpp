//
// Created by shello on 09-18-22.
//

#include "LinkedQueue.h"
#include <iostream>
using namespace std;

LinkedQueue::LinkedQueue()
{
	inicio = NULL;
	final = NULL;
}

LinkedQueue::~LinkedQueue()
{
	if(final)
		delete final;
}

Object* LinkedQueue::frente(){
	if (vacia())
		return NULL;
	else 
		return inicio->getItem();
}
		
void LinkedQueue::imprime_cola(){
	if (vacia())
		cout << "\nCola Vacia" << endl;
	else{
		Nodo *ptr = inicio;
		while(ptr != NULL){
			cout << ptr->getItem()->toString() << endl;
			ptr = ptr->getSiguiente();
		}
	}
}
		
void LinkedQueue::anula(){
}
		
//Dequeue
Object* LinkedQueue::saca_de_cola(){
	Object* dequeue = NULL;
	if (vacia())
		return NULL;
	else if(inicio == final){
		dequeue = inicio->getItem();
		inicio = final = NULL;
		return dequeue;
	}else{
		Nodo *ptr = new Nodo();
		ptr = inicio;
		dequeue = inicio->getItem();
		inicio = inicio->getSiguiente();
		delete(ptr);
		return dequeue;
	}
}
		
//Queue
void LinkedQueue::pone_en_cola(Object* item){
	Nodo *ptr = new Nodo();
	ptr->setItem(item);
	
	if(inicio == NULL){
		inicio = ptr;
		final = ptr;
	}else{
		final->setSiguiente(ptr);
		final = ptr;
	}
}
		
bool LinkedQueue::vacia(){
	if (inicio == NULL && final == NULL)
		return true;
	else
		return false;
}