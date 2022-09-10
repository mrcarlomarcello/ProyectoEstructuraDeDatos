#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include "TDALista.h"
#include "ArrayList.h"

int main(int argc, char** argv) {
	
	int num;
	
	do{
		cout << "\nMenú Principal" 
			 << "\n1. Trabajar con Listas" 
			 << "\n2. Trabajar con Pilas"
			 << "\n3. Trabajar con Colas" 
			 << "\n4. Salir" << endl;
		cin >> num;
		
		switch(num){
			case 1:	
				do{
					cout << "\nMenu Tipo de Lista" 
			 			 << "\n1. Trabajar con ArrayList" 
			             << "\n2. Trabajar con LinkedList"
			            << "\n3. Regresar al menú principal" << endl;
					cin >> num;
					
					if (num == 1){
						
						do{
							cout << "\nOperaciones de ArrayList"
							<< "\n1. Insertar Elemento"
							<< "\n2. Imprimir Elementos"
							<< "\n3. Buscar Elemento"
							<< "\n4. Borrar Elemento"
							<< "\n5. Ver si está vacía"
							<< "\n6. Obtener Elemento por Posición"
							<< "\n7. Obtener Siguiente"
							<< "\n8. Obtener Anterior"
							<< "\n9. Borrar todos los Elementos (Anula)"
							<< "\n10. Regresar al Menú Principal" << endl;
							cin >> num;
						}while(num != 10);
						 	
					}else if (num == 2){
						do{
							cout << "\nOperaciones de LinkedList"
							<< "\n1. Insertar Elemento"
							<< "\n2. Imprimir Elementos"
							<< "\n3. Buscar Elemento"
							<< "\n4. Borrar Elemento"
							<< "\n5. Ver si está vacía"
							<< "\n6. Obtener Elemento por Posición"
							<< "\n7. Obtener Siguiente"
							<< "\n8. Obtener Anterior"
							<< "\n9. Borrar todos los Elementos (Anula)"
							<< "\n10. Regresar al Menú Principal" << endl;
							cin >> num;
						}while(num != 10);
					}
				}while(num != 3);
				
				break;
			case 2:
				do{
					cout << "\nMenu Tipo de Pila" 
			 			 << "\n1. Trabajar con ArrayStack" 
			             << "\n2. Trabajar con LinkedStack"
			            << "\n3. Regresar al menu principal" << endl;
					cin >> num;
					
					if (num == 1){
						
						do{
							cout << "\nOperaciones de ArrayStack"
							<< "\n1. “Empujar” (push)"
							<< "\n2. “Sacar” (pop)"
							<< "\n3. Ver Tope (top)"
							<< "\n4. Verificar si está vacía"
							<< "\n5. Imprimir elementos"
							<< "\n6. Regresar al Menú Principal" << endl;
							cin >> num;
						}while(num != 6);
						 	
					}else if (num == 2){
						
						do{
							cout << "\nOperaciones de LinkedStack"
							<< "\n1. “Empujar” (push)"
							<< "\n2. “Sacar” (pop)"
							<< "\n3. Ver Tope (top)"
							<< "\n4. Verificar si está vacía"
							<< "\n5. Imprimir elementos"
							<< "\n6. Regresar al Menú Principal" << endl;
							cin >> num;
						}while(num != 6);
					}
					
				}while(num != 3);
				break;
			case 3:
				do{
					cout << "\nMenu Tipo de Cola" 
			 			 << "\n1. Trabajar con ArrayQueue" 
			             << "\n2. Trabajar con LinkedQueue"
			            << "\n3. Regresar al menu principal" << endl;
					cin >> num;
					
					if (num == 1){
						
						do{
							cout << "\nOperaciones de ArrayQueue"
							<< "\n1. “Encolar” (queue)"
							<< "\n2. “Desencolar” (dequeue)"
							<< "\n3. Ver Frente (peek)"
							<< "\n4. Verificar si está vacía"
							<< "\n5. Imprimir elementos"
							<< "\n6. Regresar al Menú Principal" << endl;
							cin >> num;
						}while(num != 6);
						 	
					}else if (num == 2){
						
						do{
							cout << "\nOperaciones de LinkedQueue"
							<< "\n1. “Encolar” (queue)"
							<< "\n2. “Desencolar” (dequeue)"
							<< "\n3. Ver Frente (peek)"
							<< "\n4. Verificar si está vacía"
							<< "\n5. Imprimir elementos"
							<< "\n6. Regresar al Menú Principal" << endl;
							cin >> num;
						}while(num != 6);
					}	
					
				}while(num != 3);
				break;
		}
	
	}while(num != 4);
	
	
	

}
