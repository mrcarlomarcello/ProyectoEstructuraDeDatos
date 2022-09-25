#include "ArrayList.h"
#include <iostream>
using namespace std;

//#define NULL 0
ArrayList::ArrayList()
{
    n=0;
    capacidad=10;
    array = new Object*[capacidad];
    for(int i=0; i<capacidad; i++)
        array[i] = NULL;

}

ArrayList::~ArrayList()
{
    //libera el contenido de las casillas
    for(int i=0; i<capacidad; i++){
        if(array[i]){
            delete array[i];
        }
    }
    //libera el arreglo
    delete[] array;
}

void ArrayList::anula(){

    if (n>0){
        for (int i=n; i <= n; i--)
            suprime(i);
    }
}

bool ArrayList::inserta(Object* item, int posicion){
    if (item == nullptr) {
        return false;
    }
    else if (posicion>=1 && posicion<=n+1){  //1. Validar rango
        if (posicion <= n){ //1.1 determinar si hay que hacer corrimientos
            for (int i=n+1; i >= posicion; i--){
                array[i] = array[i-1];   //hacer corrimientos
            }
        }
        array[posicion-1] = item; //insertar elemento
        n++;
        return true;
    }
    else
        return false;
}

Object* ArrayList::siguiente(int posicion){
    return recupera(posicion+1);
}

Object* ArrayList::anterior(int posicion){
    return recupera(posicion-1);
}

void ArrayList::append(Object*){} //declaramos la funcion virtual

void ArrayList::imprimir(Object* item){
	cout<< (item->toString()) <<endl;
}

void ArrayList::imprimir_lista(){
	for (int i=0; i < n; i++)
		imprimir(array[i]);  
}

bool ArrayList::suprime(int posicion){ 
	if (n>=1){  
		Object* item=NULL;
		if (posicion>=1 && posicion <= n){ //1. Validar rango
			Object* item = array[posicion-1];
			array[posicion-1]=NULL;
			for (int i=posicion; i < n; i++)//hacer corrimientos	
				array[i-1] = array[i];   
		}
		n--;
		return true;
	}	
	else	
		return false;
}

Object* ArrayList::recupera(int posicion)
{
	if (posicion>=1 && posicion <= n)
		return array[posicion-1];
	else
		return NULL;
}

int ArrayList::localiza(Object* item)
{
	for (int i=1; i <= n; i++){
		if (item == array[i-1])
			return i;
	}
	return -1;
}

Object* ArrayList::primero()
{
	if (n >= 1)
		return array[0];
	else 
		return NULL;
}

bool ArrayList::vacia()
{
	if (n>0)
		return false;
	else
		return true;		
}