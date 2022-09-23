//
// Created by shello on 09-14-22.
//
using namespace std;
#include "ProgramInit.h"
#include "TDALista.h"
#include "TDAPila.h"
#include "Alumno.h"
#include "ArrayList.h"
#include "ArrayStack.h"
#include "Object.h"
#include "Simbolo.h"

#include <iostream>

ProgramInit::ProgramInit(){

    int num;
    TDALista* lista = NULL;
    TDAPila* arrayStack = NULL;
    string nombre;
    string cuenta;
    int posicion;
    int opciones;
    bool continuar;
    int contador = 0;
    //prueba
    cout << "Hello World! Compile test 2\n" << endl;


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

                        if (lista)
                            delete lista;

                        lista = new ArrayList();

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

                            switch (num){
                                case 1:
                                {
                                	
                                	do{
                                		cout << "\n1. Insertar Elemento" << endl;
	                                    cout << "\nIngrese el nombre:" << endl;
	                                    cin >> nombre;
	                                    cout << "\nIngrese la cuenta: " << endl;
	                                    cin >> cuenta;
	                                    cout << "\nIngrese la posicion: " << endl;
	                                    cin >> posicion;
	                                    Alumno* alumno = new Alumno(nombre, cuenta);
	                                    if (lista->inserta(alumno, posicion))
	                                    	cout << "\nInsertado con exito\n";
	                                    else
	                                    	cout << "\nNo se pudo insertar\n";
	                                    
	                                    do{
	                                    	
	                                    	if (contador > 0)
	                                    		cout << "\nEsa no es una de las opciones\n";
	                                    	cout << "¿Desea seguir insertando? 1 = Si, 2 = No: \n";
	                                    	cin >> opciones;
		                                    if (opciones == 1)
		                                    	continuar = true;
		                                    else if (opciones == 2)
		                                    	continuar = false;
		                                    contador++;
	                                    	
										}while(opciones > 2);
										contador = 0;
	                                    
									}while(continuar);
                                    
                                    //Prueba
                                    //lista->imprimir_lista();
                                    break;
                                }

                                case 2:
                                {
                                    cout << "\n2. Imprimir Elementos" << endl;
                                    lista->imprimir_lista();
                                    break;
                                }

                                case 3:
                                {
                                    cout << "\n3. Buscar Elemento" << endl;
                                    cout << "\nIngrese el numero de cuenta del usuario: " << endl;
                                    cin >> cuenta;
	
                                    //lista->localiza();
                                    break;
                                }

                                case 4:
                                {
                                    cout << "\n4. Borrar Elemento" << endl;
                                    cout << "\nIngrese la posicion del elemento que desea eliminar: " << endl;
                                    cin >> posicion;
                                    if(lista->suprime(posicion))
                                    	cout << "\nElemento eliminado con exito" << endl;
                                    else
                                    	cout << "\nEl elemento no se pudo eliminar" << endl;
                                    break;
                                }

                                case 5:
                                {
                                    cout << "\n5. Ver si está vacía" << endl;
                                    if(lista->vacia())
                                    	cout << "La lista esta vacía\n";
                                    else
                                    	cout << "La lista no esta vacía\n";
                                    	
                                    break;
                                }

                                case 6:
                                {
                                    cout << "\n6. Obtener Elemento por Posición" << endl;
                                    cout << "\nIngrese la posicion del elemento que desea obtener: " << endl;
                                    cin >> posicion;
                                    if(lista->recupera(posicion) != NULL){
                                    	cout << "\nElemento:\n";
                                    	cout << lista->recupera(posicion)->toString() << endl;
									}
                                    else
                                    	cout << "\nPosicion invalida" << endl;
                                    break;
                                }

                                case 7:
                                {
                                    cout << "\n7. Obtener Siguiente" << endl;
                                    cout << "\nIngrese la posicion de un elemento para obtener su siguiente: " << endl;
                                    cin >> posicion;
                                    if(lista->siguiente(posicion) != NULL){
                                    	cout << "\nElemento:\n";
                                    	cout << lista->siguiente(posicion)->toString() << endl;
									}else
										cout << "\nEl espacio siguiente esta vacio" << endl;	
                                    break;
                                }

                                case 8:
                                {
                                    cout << "\n8. Obtener Anterior" << endl;
                                    cout << "\nIngrese la posicion de un elemento para obtener su anterior: " << endl;
                                    cin >> posicion;
                                    if(lista->anterior(posicion) != NULL){
                                    	cout << "\nElemento:\n";
                                    	cout << lista->anterior(posicion)->toString() << endl;
									}else
										cout << "\nEl espacio anterior esta vacio" << endl;	
                                    break;
                                }

                                case 9:
                                {
                                    cout << "\n9. Borrar todos los Elementos (Anula)" << endl;
                                    lista->anula();
                                    cout << "\nLista anulada correctamente" << endl;
                                    break;
                                }
                            }

                        }while(num != 10);

                    }
                    else if (num == 2){
                    	if (lista)
                            delete lista;

                        //lista = new LinkedList();
                        
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

                            switch (num){
                                case 1:
                                {
                                    cout << "\n1. Insertar Elemento" << endl;

                                }
                                    break;
                                case 2:
                                {
                                    cout << "\n2. Imprimir Elementos" << endl;
                                    break;
                                }
                                case 3:
                                {
                                    cout << "\n3. Buscar Elemento" << endl;
                                    break;
                                }

                                case 4:
                                {
                                    cout << "\n4. Borrar Elemento" << endl;
                                    break;
                                }

                                case 5:
                                {
                                    cout << "\n5. Ver si está vacía" << endl;
                                    break;
                                }
                                case 6:
                                {
                                    cout << "\n6. Obtener Elemento por Posición" << endl;
                                    break;
                                }
                                case 7:
                                {
                                    cout << "\n7. Obtener Siguiente" << endl;
                                    break;
                                }
                                case 8:
                                {
                                    cout << "\n8. Obtener Anterior" << endl;
                                    break;
                                }
                                case 9:
                                {
                                    cout << "\n9. Borrar todos los Elementos (Anula)" << endl;
                                    break;
                                }
                            }

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
                        //borra el stack
                        if (arrayStack)
                            delete arrayStack;

                        arrayStack = new ArrayStack();

                        do{
                            cout << "\nOperaciones de ArrayStack"
                                 << "\n1. “Empujar” (push)"
                                 << "\n2. “Sacar” (pop)"
                                 << "\n3. Ver Tope (top)"
                                 << "\n4. Verificar si está vacía"
                                 << "\n5. Imprimir elementos"
                                 << "\n6. Regresar al Menú Principal" << endl;
                            cin >> num;

                            switch (num) {
                                case 1:
                                    cout << "Vamos a push @" << endl;
                                    Simbolo* simStack;// = new Simbolo();
                                    simStack->setSimbolo('@');
                                    arrayStack->Push(simStack);
                                    break;
                                case 2:
                                    cout << "not done yet" << endl;
                                    break;
                                case 3:
                                    cout << "Tope:" << endl;
                                    Simbolo* sim = arrayStack->Top();
                                    cout << sim->getSimbolo() << endl;
                                    break;
                            }
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
};