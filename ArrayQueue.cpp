//
// Created by shello on 09-18-22.
//

#include "ArrayQueue.h"

ArrayQueue::ArrayQueue()
{
	inicio = 0;
	final = 0;
	n = 0;
	capacidad = 10;
	array = new Object*[capacidad];
	for(int i=0; i<capacidad; i++)
		array[i] = NULL;
}

ArrayQueue::~ArrayQueue()
{
	for(int i=0; i<capacidad; i++){
		if(array[i]){
			delete array[i];
		}
	}
	//libera el arreglo
	delete[] array;
}

Object* ArrayQueue::frente(){
	return NULL;
}
		
void ArrayQueue::imprime_cola(){
}
		
void ArrayQueue::anula(){
}
		
//Dequeue
Object* ArrayQueue::saca_de_cola(){
	return NULL;
}
		
//Queue
void ArrayQueue::pone_en_cola(Object*){
}
		
bool ArrayQueue::vacia(){
	return true;
}
