//
// Created by shello on 09-14-22.
//
using namespace std;
#include "ProgramInit.h"
#include "TDALista.h"
#include "Alumno.h"
#include "ArrayList.h"
#include "ArrayStack.h"
#include "ArrayQueue.h"
#include "LinkedQueue.h"

#include <iostream>

bool EsUnNumero(const char* cadena)
{
  for( ; *cadena; ++cadena )
  {
    // En cuanto un caracter no sea numérico
    if( !std::isdigit(*cadena) )
      return false;
  }

  return true;
}

ProgramInit::ProgramInit(){

    int num = 0;
    TDALista* lista = NULL;
    TDACola* cola = NULL;
    //ArrayStack* arrayStack;
    string nombre;
    string cuenta;
    int posicion;
    int opciones;
    bool continuar = true;
    bool seguir;
    int contador = 0;
    char menu[5];
    //prueba
    cout << "Hello World! Compile test\n" << endl;
    
    do{
        cout << "\nMenú Principal"
             << "\n1. Trabajar con Listas"
             << "\n2. Trabajar con Pilas"
             << "\n3. Trabajar con Colas"
             << "\n4. Salir" << endl;
        cin >> menu;
        
		if (!EsUnNumero(menu) || (stoi(menu) > 9))
			num = 5;
		else
			num = stoi(menu);
			
        switch(num){
            case 1:
                do{
                    cout << "\nMenu Tipo de Lista"
                         << "\n1. Trabajar con ArrayList"
                         << "\n2. Trabajar con LinkedList"
                         << "\n3. Regresar al menú principal" << endl;
                    cin >> menu;
		
					if (!EsUnNumero(menu) || (stoi(menu) > 3))
						num = 4;
					else
						num = stoi(menu);

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
                            cin >> menu;
		
							if (!EsUnNumero(menu) || (stoi(menu) > 10))
								num = 11;
							else
								num = stoi(menu);
                            
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
		                                    	seguir = true;
		                                    else if (opciones == 2)
		                                    	seguir = false;
		                                    contador++;
	                                    	
										}while(opciones > 2);
										contador = 0;
	                                    
									}while(seguir);
									
									continuar = true;
                                    //Prueba
                                    //lista->imprimir_lista();
                                    break;
                                }

                                case 2:
                                {
                                    cout << "\n2. Imprimir Elementos" << endl;
                                    lista->imprimir_lista();
                                    continuar = true;
                                    break;
                                }

                                case 3:
                                {
                                    cout << "\n3. Buscar Elemento" << endl;
                                    cout << "\nIngrese el numero de cuenta del usuario: " << endl;
                                    cin >> cuenta;
									continuar = true;
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
                                	continuar = true;
                                    break;
                                }

                                case 5:
                                {
                                    cout << "\n5. Ver si está vacía" << endl;
                                    if(lista->vacia())
                                    	cout << "La lista esta vacía\n";
                                    else
                                    	cout << "La lista no esta vacía\n";
                                    continuar = true;	
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
                                    continuar = true;
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
									continuar = true;	
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
									continuar = true;
                                    break;
                                }

                                case 9:
                                {
                                    cout << "\n9. Borrar todos los Elementos (Anula)" << endl;
                                    lista->anula();
                                    cout << "\nLista anulada correctamente" << endl;
                                	continuar = true;
                                    break;
                                }
                                case 10:
					            {
									continuar = false;
					            	break;
					            }
					            default:
					            {
					            	cout << "\nOpción invalida" << endl;
					            	continuar = true;
								} 
                            }

                        }while(continuar);

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
                            cin >> menu;
                            
                            if (!EsUnNumero(menu) || (stoi(menu) > 10))
								num = 11;
							else
								num = stoi(menu);

                            switch (num){
                                case 1:
                                {
                                    cout << "\n1. Insertar Elemento" << endl;
                                    continuar = true;

                                }
                                    break;
                                case 2:
                                {
                                    cout << "\n2. Imprimir Elementos" << endl;
                                    continuar = true;
                                    break;
                                }
                                case 3:
                                {
                                    cout << "\n3. Buscar Elemento" << endl;
                                    continuar = true;
                                    break;
                                }

                                case 4:
                                {
                                    cout << "\n4. Borrar Elemento" << endl;
                                    continuar = true;
                                    break;
                                }

                                case 5:
                                {
                                    cout << "\n5. Ver si está vacía" << endl;
                                    continuar = true;
                                    break;
                                }
                                case 6:
                                {
                                    cout << "\n6. Obtener Elemento por Posición" << endl;
                                    continuar = true;
                                    break;
                                }
                                case 7:
                                {
                                    cout << "\n7. Obtener Siguiente" << endl;
                                    continuar = true;
                                    break;
                                }
                                case 8:
                                {
                                    cout << "\n8. Obtener Anterior" << endl;
                                    continuar = true;
                                    break;
                                }
                                case 9:
                                {
                                    cout << "\n9. Borrar todos los Elementos (Anula)" << endl;
                                    continuar = true;
                                    break;
                                }
                                case 10:
					            {
									continuar = false;
					            	break;
					            }
					            default:
					            {
					            	cout << "\nOpción invalida" << endl;
					            	continuar = true;
								} 
                            }

                        }while(continuar);
                    }
                    else if (num == 4){
                    	cout << "\nOpción invalida" << endl;
					    continuar = true;
					}
                }while(num != 3);
                continuar = true;
                break;

            case 2:
                do{
                    cout << "\nMenu Tipo de Pila"
                         << "\n1. Trabajar con ArrayStack"
                         << "\n2. Trabajar con LinkedStack"
                         << "\n3. Regresar al menu principal" << endl;
                    cin >> menu;
                    
                    if (!EsUnNumero(menu) || (stoi(menu) > 3))
						num = 4;
					else
						num = stoi(menu);

                    if (num == 1){
                    	
                        /*if (arrayStack)
                            delete arrayStack;
                        arrayStack = new ArrayStack();*/

                        do{
                            cout << "\nOperaciones de ArrayStack"
                                 << "\n1. “Empujar” (push)"
                                 << "\n2. “Sacar” (pop)"
                                 << "\n3. Ver Tope (top)"
                                 << "\n4. Verificar si está vacía"
                                 << "\n5. Imprimir elementos"
                                 << "\n6. Regresar al Menú Principal" << endl;
                            cin >> menu;
                            
                            if (!EsUnNumero(menu) || (stoi(menu) > 6))
								num = 7;
							else
								num = stoi(menu);

                            cuenta = "0001";//test
                            switch (num) {
                                case 1:
                                    /*cout << "Vamos a push prueba y 1" << endl;
                                    nombre = "prueba";
                                    //cuenta = "0001";
                                    Alumno* alumno = new Alumno(nombre, cuenta);
                                    arrayStack->Push(alumno);
                                    cuenta = "0002";*/
                                    continuar = true;
                                    break;
                                case 2:
                                    break;
                                case 3:
                                    /*cout << "Tope:" << endl;
                                    Alumno* alumno = arrayStack->Top();
                                    cout << alumno->getNombre() << endl;
                                    cout << alumno->getCuenta() << end;*/
                                    continuar = true;
                                    break;
                                case 4:
                                	continuar = true;
                                    break;
                                case 5:
                                	continuar = true;
                                    break;
                                case 6:
					            {
									continuar = false;
					            	break;
					            }
					            default:
					            {
					            	cout << "\nOpción invalida" << endl;
					            	continuar = true;
								}   
                            }
                        }while(continuar);

                    }else if (num == 2){
                        do{
                            cout << "\nOperaciones de LinkedStack"
                                 << "\n1. “Empujar” (push)"
                                 << "\n2. “Sacar” (pop)"
                                 << "\n3. Ver Tope (top)"
                                 << "\n4. Verificar si está vacía"
                                 << "\n5. Imprimir elementos"
                                 << "\n6. Regresar al Menú Principal" << endl;
                            cin >> menu;
                            
                            if (!EsUnNumero(menu) || (stoi(menu) > 6))
								num = 7;
							else
								num = stoi(menu);
							
							switch (num) {
                                case 1:                       
                                    continuar = true;
                                    break;
                                case 2:
                                    break;
                                case 3:
                                    continuar = true;
                                    break;
                                case 4:
                                	continuar = true;
                                    break;
                                case 5:
                                	continuar = true;
                                    break;
                                case 6:
					            {
									continuar = false;
					            	break;
					            }
					            default:
					            {
					            	cout << "\nOpción invalida" << endl;
					            	continuar = true;
								} 	
							}	
                        }while(continuar);
                    }
                    else if (num == 4){
                    	cout << "\nOpción invalida" << endl;
					    continuar = true;
					}
                }while(num != 3);
                continuar = true;
                break;

            case 3:
                do{
                    cout << "\nMenu Tipo de Cola"
                         << "\n1. Trabajar con ArrayQueue"
                         << "\n2. Trabajar con LinkedQueue"
                         << "\n3. Regresar al menu principal" << endl;
                    cin >> menu;
                    
                    if (!EsUnNumero(menu) || (stoi(menu) > 3))
						num = 4;
					else
						num = stoi(menu);

                    if (num == 1){
                    	
                    	if (cola)
                            delete cola;

                        cola = new ArrayQueue();

                        do{
                            cout << "\nOperaciones de ArrayQueue"
                                 << "\n1. Encolar (queue)"
                                 << "\n2. Desencolar (dequeue)"
                                 << "\n3. Ver Frente (peek)"
                                 << "\n4. Verificar si está vacía"
                                 << "\n5. Imprimir elementos"
                                 << "\n6. Regresar al Menú Principal" << endl;
                            cin >> menu;
		
							if (!EsUnNumero(menu) || (stoi(menu) > 6))
								num = 7;
							else
								num = stoi(menu);
                            
                            switch (num){
                                case 1:
                                {
                                    cout << "\n1. Encolar (queue)" << endl;
                                    do{
                                		cout << "\n1. Insertar Elemento" << endl;
	                                    cout << "\nIngrese el nombre:" << endl;
	                                    cin >> nombre;
	                                    cout << "\nIngrese la cuenta: " << endl;
	                                    cin >> cuenta;
	                                    Alumno* alumno = new Alumno(nombre, cuenta);
	                                    cola->pone_en_cola(alumno);
	                                    
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
									
									break;
                                }
                                case 2:
                                {
                                    cout << "\n2. Desencolar (dequeue)" << endl;
                                    
                                    Object* dequeue = cola->saca_de_cola();
                                    string Sdequeue = dequeue->toString();
                                    
                                    if (dequeue != NULL)
                                    	cout << Sdequeue << endl;
                                    else
                                    	cout << "\nCola Vacia\n";
                                    break;
                                }
                                case 3:
                                {
                                    cout << "\n3. Ver Frente (peek)" << endl;
                                    if (cola->frente() != NULL)
                                    	cout << cola->frente()->toString() << endl;
                                    else
                                    	cout << "\nCola Vacia\n";
                                    break;
                                }

                                case 4:
                                {
                                    cout << "\n4. Verificar si está vacía" << endl;
                                    if(cola->vacia())
                                    	cout << "La cola esta vacía\n";
                                    else
                                    	cout << "La cola no esta vacía\n";
                                    break;
                                }

                                case 5:
                                {
                                    cout << "\n5. Imprimir elementos" << endl;
                                    cola->imprime_cola();
                                    break;
                                }
                                case 6:
					            {
									continuar = false;
					            	break;
					            }
					            default:
					            {
					            	cout << "\nOpción invalida" << endl;
					            	continuar = true;
								}                                 
                            }
                            
                        }while(continuar);

                    }else if (num == 2){
                    	
                    	if (cola)
                            delete cola;

                        cola = new LinkedQueue();
                        
                        do{
                            cout << "\nOperaciones de LinkedQueue"
                                 << "\n1. Encolar (queue)"
                                 << "\n2. Desencolar (dequeue)"
                                 << "\n3. Ver Frente (peek)"
                                 << "\n4. Verificar si está vacía"
                                 << "\n5. Imprimir elementos"
                                 << "\n6. Regresar al Menú Principal" << endl;
                            cin >> menu;
		
							if (!EsUnNumero(menu) || (stoi(menu) > 6))
								num = 7;
							else
								num = stoi(menu);
								
                             switch (num){
                                case 1:
                                {
                                    cout << "\n1. Encolar (queue)" << endl;
                                    do{
                                		cout << "\n1. Insertar Elemento" << endl;
	                                    cout << "\nIngrese el nombre:" << endl;
	                                    cin >> nombre;
	                                    cout << "\nIngrese la cuenta: " << endl;
	                                    cin >> cuenta;
	                                    Alumno* alumno = new Alumno(nombre, cuenta);
	                                    cola->pone_en_cola(alumno);
	                                    
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
									
									break;
                                }
                                case 2:
                                {
                                    cout << "\n2. Desencolar (dequeue)" << endl;
                                    
                                    Object* dequeue = cola->saca_de_cola();
                                    string Sdequeue = dequeue->toString();
                                    
                                    if (dequeue != NULL)
                                    	cout << Sdequeue << endl;
                                    else
                                    	cout << "\nCola Vacia\n";
                                    break;
                                }
                                case 3:
                                {
                                    cout << "\n3. Ver Frente (peek)" << endl;
                                    if (cola->frente() != NULL)
                                    	cout << cola->frente()->toString() << endl;
                                    else
                                    	cout << "\nCola Vacia\n";
                                    break;
                                }

                                case 4:
                                {
                                    cout << "\n4. Verificar si está vacía" << endl;
                                    if(cola->vacia())
                                    	cout << "La cola esta vacía\n";
                                    else
                                    	cout << "La cola no esta vacía\n";
                                    break;
                                }

                                case 5:
                                {
                                    cout << "\n5. Imprimir elementos" << endl;
                                    cola->imprime_cola();
                                    break;
                                }
                                case 6:
					            {
									continuar = false;
					            	break;
					            }
					            default:
					            {
					            	cout << "\nOpción invalida" << endl;
					            	continuar = true;
								} 
                            }
                            
                        }while(continuar);
                    }
                    else if (num == 4){
                    	cout << "\nOpción invalida" << endl;
					    continuar = true;
					}
                }while(num != 3);
                continuar = true;
                break;
            case 4:
            {
				continuar = false;
            	break;
            }
            default:
            {
            	cout << "\nOpción invalida" << endl;
			}    	
        }

    }while(continuar);
		
};