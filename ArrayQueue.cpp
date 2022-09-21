//
// Created by shello on 09-18-22.
//

#include "ArrayQueue.h"
#include <iostream>
using namespace std;

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
	if (n >= 1)
		return array[0];
	else 
		return NULL;
}

void ArrayQueue::imprimir(Object* item){
	cout<< (item->toString()) << endl;
}
		
void ArrayQueue::imprime_cola(){
	if (n < 0)
		cout << "\nQueue vacio\n";
	else{
		for(int i = inicio; i < final; i++)
			imprimir(array[i]);
	}
}
		
void ArrayQueue::anula(){
	if (n>0){
        for (int i=n; i <= n; i--)	
			array[i] = NULL; 
    }
}
		
//Dequeue
Object* ArrayQueue::saca_de_cola(){
	if (n<0)
		return NULL;
	else{
		if (inicio == final)
			inicio = final = -1;
		else
			inicio++;
	}	
}
		
//Queue
void ArrayQueue::pone_en_cola(Object* item){
	
	if (item != nullptr) {
        if (final == n-1)  
        	cout << "\nQueue lleno\n";
	    else{
	    	if (inicio == -1)
	    		inicio = 0;
	    	n++;
	    	array[final] = item;
	    	final++;
	    	cout << "\nQueue realizado con exito\n";
	    }
	}
}
		
bool ArrayQueue::vacia(){
	if (inicio == -1 && final == -1)
		return true;
	else
		return false;
}
