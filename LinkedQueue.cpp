//
// Created by shello on 09-18-22.
//

#include "LinkedQueue.h"

LinkedQueue::LinkedQueue()
{
	Nodofrente = NULL;
	final=NULL;
}

LinkedQueue::~LinkedQueue()
{
	if(final)
		delete final;
}

Object* LinkedQueue::frente(){
	return NULL;
}
		
void LinkedQueue::imprime_cola(){
}
		
void LinkedQueue::anula(){
}
		
//Dequeue
Object* LinkedQueue::saca_de_cola(){
	return NULL;
}
		
//Queue
void LinkedQueue::pone_en_cola(Object*){
}
		
bool LinkedQueue::vacia(){
	return true;
}