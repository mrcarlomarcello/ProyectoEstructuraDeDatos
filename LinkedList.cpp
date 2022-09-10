#include "LinkedList.h"

#define NULL 0

LinkedList::LinkedList()
{
	inicio=NULL;
	final=NULL;
	n=0;
}

LinkedList::~LinkedList()
{
	if(inicio)
		delete inicio;
}

void LinkedList::append(Object* item){
	Nodo* temp = new Nodo();
	temp->setItem(item);
	final->setSiguiente(temp);
	temp->setAnterior(final);
	final = temp;
	n++;
}

bool LinkedList::inserta(Object* item, int posicion){
	Nodo* newNode = new Nodo();
	Nodo* temp = inicio;
	newNode->setItem(item);
			
	if (posicion>=1 && posicion<=n+1){
		if (posicion==n+1){
			append(item);
		} else if (posicion == 1){
			for (int i=1; i<=posicion; i++)
				temp=temp->getSiguiente();
			inicio->setAnterior(newNode);
			newNode->setSiguiente(inicio);
			inicio = newNode;
		}else{ 
			for (int i=1; i<=posicion; i++)
				temp=temp->getSiguiente();
			temp->getAnterior()->setSiguiente(newNode);
			newNode->setAnterior(temp->getAnterior());
			newNode->setSiguiente(temp);
			temp->setAnterior(newNode);	
		}
		n++;
		return true;
	}else
		return false;
}

bool LinkedList::suprime(int posicion){
	if (posicion>=1 && posicion<=n){
		Nodo* temp = NULL;
		if (posicion==1){ 
			temp = inicio;
			inicio = inicio->getSiguiente();
			temp->setSiguiente(NULL);
			inicio->setAnterior(NULL);
			
		}else if (posicion == n){
			temp = final;
			final = final->getAnterior();
			final->setSiguiente(NULL);
			temp->setAnterior(NULL);
				
		}else{
			temp = inicio;
			for (int i=1; i<=posicion; i++)
				temp=temp->getSiguiente();
			temp->getAnterior()->setSiguiente(temp->getSiguiente());
			temp->getSiguiente()->setAnterior(temp->getAnterior());
			temp->setSiguiente(NULL);
			temp->setAnterior(NULL);
		} 
		delete temp;
		n--;
		return true;	
	}else
		return false;

}
