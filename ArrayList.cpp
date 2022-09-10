#include "ArrayList.h"

#define NULL 0

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

 bool ArrayList::inserta(Object* item, int posicion){ 
	if (item == nullptr) {
		return false;
	}
	else if (posicion>=1 && posicion<=n+1){  //1. Validar rango
		if (posicion <= n){ //1.1 determinar si hay que hacer corrimientos
			for (int i=n; i >= posicion; i--)
				array[i+1] = array[i];   //hacer corrimientos	
		}
		array[posicion-1] = item; //insertar elemento
		n++;
		return true;
	}	
	else	
		return false;
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
