//
// Created by shello on 09-14-22.
//
using namespace std;
#include "ProgramInit.h"
#include "TDALista.h"
#include "TDAPila.h"
#include "Alumno.h"
#include "Simbolo.h"
#include "ArrayList.h"
#include "LinkedList.h"
#include "ArrayStack.h"
#include "LinkedStack.h"
#include "ArrayQueue.h"
#include "LinkedQueue.h"
#include "TextoMenu.h"
#include "Util.h"

#include <iostream>

ProgramInit::ProgramInit(){

    int num = 0;
    TDALista* lista = NULL;
    TDAPila* arrayStack = NULL;
    TDACola* cola = NULL;
    string nombre;
    string cuenta;
    string simbolo;
    int posicion;
    int opciones;
    bool continuar = true;
    //bool seguir;
    int contador = 0;
    char menu[5];
    TextoMenu* Menu;
    Util util;
    
    do{
        Menu->printMainMenu();
        cin >> menu;
        
        if (!util.EsUnNumero(menu) || (stoi(menu) > 9))
			num = 5;
		else
			num = stoi(menu);

        switch(num) {
            case 1: {
                do {
                    Menu->printMenuLista();
                    cin >> menu;

                    if (!util.EsUnNumero(menu) || (stoi(menu) > 3))
                        num = 4;
                    else
                        num = stoi(menu);

                    switch (num) {
                        case 1: {
                            if (lista)
                                delete lista;

                            lista = new ArrayList();

                            do {
                                Menu->printMenuArrayList();
                                cin >> menu;

                                if (!util.EsUnNumero(menu) || (stoi(menu) > 10))
                                    num = 11;
                                else
                                    num = stoi(menu);

                                switch (num) {
                                    case 1: {

                                        do {
                                            cout << "\n1. Insertar Elemento" << endl;
                                            cout << "\nIngrese el nombre:" << endl;
                                            cin >> nombre;
                                            cout << "\nIngrese la cuenta: " << endl;
                                            cin >> cuenta;
                                            cout << "\nIngrese la posicion: " << endl;
                                            cin >> posicion;
                                            Alumno *alumno = new Alumno(nombre, cuenta);
                                            if (lista->inserta(alumno, posicion))
                                                cout << "\nInsertado con exito\n";
                                            else
                                                cout << "\nNo se pudo insertar\n";

                                            do {

                                                if (contador > 0)
                                                    cout << "\nEsa no es una de las opciones\n";
                                                cout << "¿Desea seguir insertando? 1 = Si, 2 = No: \n";
                                                cin >> opciones;
                                                if (opciones == 1)
                                                    continuar = true;
                                                else if (opciones == 2)
                                                    continuar = false;
                                                contador++;

                                            } while (opciones > 2);
                                            contador = 0;

                                        } while (continuar);

                                        //Prueba
                                        //lista->imprimir_lista();
                                        break;
                                    }
                                    case 2: {
                                        cout << "\n2. Imprimir Elementos" << endl;
                                        lista->imprimir_lista();
                                        continuar = true;
                                        break;
                                    }
                                    case 3: {
                                        cout << "\n3. Buscar Elemento" << endl;
                                        cout << "\nIngrese el nombre:" << endl;
                                        cin >> nombre;
                                        cout << "\nIngrese la cuenta: " << endl;
                                        cin >> cuenta;

                                        Alumno *alumno = new Alumno(nombre, cuenta);
                                        int query = lista->localiza(alumno);

                                        if (query == -1)
                                            cout << "Sí existe" << endl;
                                        else
                                            cout << "Not found" << endl;

                                        continuar = true;

                                        break;
                                    }
                                    case 4: {
                                        cout << "\n4. Borrar Elemento" << endl;
                                        cout << "\nIngrese la posicion del elemento que desea eliminar: " << endl;
                                        cin >> posicion;
                                        if (lista->suprime(posicion))
                                            cout << "\nElemento eliminado con exito" << endl;
                                        else
                                            cout << "\nEl elemento no se pudo eliminar" << endl;
                                        continuar = true;
                                        break;
                                    }
                                    case 5: {
                                        cout << "\n5. Ver si está vacía" << endl;
                                        if (lista->vacia())
                                            cout << "La lista esta vacía\n";
                                        else
                                            cout << "La lista no esta vacía\n";
                                        continuar = true;
                                        continuar = true;
                                        break;
                                    }
                                    case 6: {
                                        cout << "\n6. Obtener Elemento por Posición" << endl;
                                        cout << "\nIngrese la posicion del elemento que desea obtener: " << endl;
                                        cin >> posicion;
                                        if (lista->recupera(posicion) != NULL) {
                                            cout << "\nElemento:\n";
                                            cout << lista->recupera(posicion)->toString() << endl;
                                        } else
                                            cout << "\nPosicion invalida" << endl;
                                        continuar = true;
                                        break;
                                    }
                                    case 7: {
                                        cout << "\n7. Obtener Siguiente" << endl;
                                        cout << "\nIngrese la posicion de un elemento para obtener su siguiente: "
                                             << endl;
                                        cin >> posicion;
                                        if (lista->siguiente(posicion) != NULL) {
                                            cout << "\nElemento:\n";
                                            cout << lista->siguiente(posicion)->toString() << endl;
                                        } else
                                            cout << "\nEl espacio siguiente esta vacio" << endl;
                                        continuar = true;
                                        break;
                                    }
                                    case 8: {
                                        cout << "\n8. Obtener Anterior" << endl;
                                        cout << "\nIngrese la posicion de un elemento para obtener su anterior: "
                                             << endl;
                                        cin >> posicion;
                                        if (lista->anterior(posicion) != NULL) {
                                            cout << "\nElemento:\n";
                                            cout << lista->anterior(posicion)->toString() << endl;
                                        } else
                                            cout << "\nEl espacio anterior esta vacio" << endl;
                                        continuar = true;
                                        break;
                                    }
                                    case 9: {
                                        cout << "\n9. Borrar todos los Elementos (Anula)" << endl;
                                        lista->anula();
                                        cout << "\nLista anulada correctamente" << endl;
                                        continuar = true;
                                        break;
                                    }
                                    case 10: {
                                        continuar = false;
                                        break;
                                    }
                                    default: {
                                        cout << "\nOpción invalida" << endl;
                                        continuar = true;
                                    }
                                }

                            } while (continuar);
                            break;
                        }
                        case 2: {
                            if (lista)
                                delete lista;

                            lista = new LinkedList();

                            do {
                                Menu->printMenuLinkedList();
                                cin >> menu;

                                if (!util.EsUnNumero(menu) || (stoi(menu) > 10))
                                    num = 11;
                                else
                                    num = stoi(menu);

                                switch (num) {
                                    case 1: {
                                        cout << "\n1. Insertar Elemento" << endl;
                                        do {
                                            cout << "\n1. Insertar Elemento" << endl;
                                            cout << "\nIngrese el nombre:" << endl;
                                            cin >> nombre;
                                            cout << "\nIngrese la cuenta: " << endl;
                                            cin >> cuenta;
                                            cout << "\nIngrese la posicion: " << endl;
                                            cin >> posicion;
                                            Alumno *alumno = new Alumno(nombre, cuenta);

                                            if (lista->inserta(alumno, posicion))
                                                cout << "\nInsertado con exito\n";
                                            else
                                                cout << "\nNo se pudo insertar\n";

                                            do {

                                                if (contador > 0)
                                                    cout << "\nEsa no es una de las opciones\n";
                                                cout << "¿Desea seguir insertando? 1 = Si, 2 = No: \n";
                                                cin >> opciones;
                                                if (opciones == 1)
                                                    continuar = true;
                                                else if (opciones == 2)
                                                    continuar = false;
                                                contador++;

                                            } while (opciones > 2);

                                            contador = 0;

                                        } while (continuar);
                                        break;
                                    }
                                    case 2: {
                                        cout << "\n2. Imprimir Elementos" << endl;
                                        lista->imprimir_lista();
                                        break;
                                    }
                                    case 3: {
                                        cout << "\n3. Buscar Elemento" << endl;
                                        cout << "\nIngrese el nombre:" << endl;
                                        cin >> nombre;
                                        cout << "\nIngrese la cuenta: " << endl;
                                        cin >> cuenta;

                                        Alumno *alumno = new Alumno(nombre, cuenta);
                                        int query = lista->localiza(alumno);

                                        if (query == -1)
                                            cout << "Not found" << endl;
                                        else
                                            cout << "Found in pos : " << query + 1 << endl;

                                        break;
                                    }
                                    case 4: {
                                        cout << "\n4. Borrar Elemento" << endl;
                                        cout << "\nIngrese la posicion del elemento que desea eliminar: " << endl;
                                        cin >> posicion;
                                        if (lista->suprime(posicion))
                                            cout << "\nElemento eliminado con exito" << endl;
                                        else
                                            cout << "\nEl elemento no se pudo eliminar" << endl;
                                        break;
                                    }
                                    case 5: {
                                        cout << "\n5. Ver si está vacía" << endl;
                                        if (lista->vacia())
                                            cout << "La lista esta vacía\n";
                                        else
                                            cout << "La lista no esta vacía\n";
                                        continuar = true;
                                        break;
                                    }
                                    case 6: {
                                        cout << "\n6. Obtener Elemento por Posición" << endl;
                                        cout << "\nIngrese la posicion del elemento que desea obtener: " << endl;
                                        cin >> posicion;
                                        if (lista->recupera(posicion) != NULL) {
                                            cout << "\nElemento:\n";
                                            cout << lista->recupera(posicion)->toString() << endl;
                                        } else
                                            cout << "\nPosicion invalida" << endl;
                                        continuar = true;
                                        break;
                                    }
                                    case 7: {
                                        cout << "\n7. Obtener Siguiente" << endl;
                                        cout << "\nIngrese la posicion de un elemento para obtener su siguiente: "
                                             << endl;
                                        cin >> posicion;
                                        if (lista->siguiente(posicion) != NULL) {
                                            cout << "\nElemento:\n";
                                            cout << lista->siguiente(posicion)->toString() << endl;
                                        } else
                                            cout << "\nEl espacio siguiente esta vacio" << endl;
                                        continuar = true;
                                        break;
                                    }
                                    case 8: {
                                        cout << "\n8. Obtener Anterior" << endl;
                                        cout << "\nIngrese la posicion de un elemento para obtener su anterior: "
                                             << endl;
                                        cin >> posicion;
                                        if (lista->anterior(posicion) != NULL) {
                                            cout << "\nElemento:\n";
                                            cout << lista->anterior(posicion)->toString() << endl;
                                        } else
                                            cout << "\nEl espacio anterior esta vacio" << endl;
                                        continuar = true;
                                        break;
                                    }
                                    case 9: {
                                        cout << "\n9. Borrar todos los Elementos (Anula)" << endl;
                                        lista->anula();
                                        cout << "\nLista anulada correctamente" << endl;
                                        continuar = true;
                                        break;
                                    }
                                    case 10: {
                                        continuar = false;
                                        break;
                                    }
                                    default: {
                                        cout << "\nOpción invalida" << endl;
                                        continuar = true;
                                    }
                                }

                            } while (num != 10);
                        }
                        case 4: {
                            cout << "\nOpción Invalida" << endl;
                        }
                    }
                } while (num != 3);
                continuar = true;
                break;
            }

            case 2: {
                do {
                    Menu->printMenuPila();
                    cin >> menu;

                    if (!util.EsUnNumero(menu) || (stoi(menu) > 3))
                        num = 4;
                    else
                        num = stoi(menu);

                    switch (num) {
                        case 1: {
                            //borra el stack
                            if (arrayStack)
                                delete arrayStack;

                            arrayStack = new ArrayStack();

                            do {
                                Menu->printMenuArrayStack();
                                cin >> menu;

                                if (!util.EsUnNumero(menu) || (stoi(menu) > 6))
                                    num = 7;
                                else
                                    num = stoi(menu);

                                switch (num) {
                                    case 1: {
                                        cout << "[     Vamos a push @lgo: solo un simbolo a la vez     ]" << endl;
                                        cin >> simbolo;
                                        Simbolo *simStack = new Simbolo();
                                        simStack->setSimbolo(simbolo[0]);
                                        arrayStack->Push(simStack);
                                        cout << "[ Listo, hemos agregado: " << simbolo[0] << " ] " << endl;
                                        continuar = true;
                                        break;
                                    }
                                    case 2: {
                                        Object *popedItem = arrayStack->Pop();
                                        cout << "[ Listo hemos Poped-out: " << popedItem->toString() << " << Poped ]"
                                             << endl;
                                        continuar = true;
                                        break;
                                    }
                                    case 3: {
                                        cout << "[    Veamos el Tope de la pila   :    ]" << endl;
                                        Object *sim = arrayStack->Top();
                                        cout << "[   God it worked... este es el tope : " << sim->toString() << " ] "
                                             << endl;
                                        continuar = true;
                                        break;
                                    }
                                    case 4: {
                                        cout << "yeah not done... veamos si funciona Vacía: " << endl;
                                        string temp = arrayStack->vacia() ? "true" : "false";
                                        cout << temp << endl;
                                        continuar = true;
                                        break;
                                    }
                                    case 5: {
                                        arrayStack->printStack();
                                        cout << "falta too " << endl;
                                        continuar = true;
                                        break;
                                    }
                                    case 6: {
                                        continuar = false;
                                        break;
                                    }
                                    default: {
                                        cout << "\nOpción invalida" << endl;
                                        continuar = true;
                                    }
                                }
                            } while (num != 6);
                            break;
                        }
                        case 2: {
                            //borra el stack
                            if (arrayStack)
                                delete arrayStack;

                            arrayStack = new LinkedStack();

                            do {
                                Menu->printMenuLinkedStack();
                                cin >> menu;

                                if (!util.EsUnNumero(menu) || (stoi(menu) > 6))
                                    num = 7;
                                else
                                    num = stoi(menu);

                                switch (num) {
                                    case 1: {
                                        cout << "[     Vamos a push @lgo: solo un simbolo a la vez     ]" << endl;
                                        cin >> simbolo;
                                        Simbolo *simStack = new Simbolo();
                                        simStack->setSimbolo(simbolo[0]);
                                        arrayStack->Push(simStack);
                                        cout << "[ Listo, hemos agregado: " << simbolo[0] << " ] " << endl;
                                        continuar = true;
                                        break;
                                    }
                                    case 2: {
                                        Object *popedItem = arrayStack->Pop();
                                        cout << "[ Listo hemos Poped-out: " << popedItem->toString() << " << Poped ]"
                                             << endl;
                                        continuar = true;
                                        break;
                                    }
                                    case 3: {
                                        cout << "[    Veamos el Tope de la pila   :    ]" << endl;
                                        Object *sim = arrayStack->Top();
                                        cout << "[   God it worked... este es el tope : " << sim->toString() << " ] "
                                             << endl;
                                        continuar = true;
                                        break;
                                    }
                                    case 4: {
                                        cout << "yeah not done... veamos si funciona Vacía: " << endl;
                                        string temp = arrayStack->vacia() ? "true" : "false";
                                        cout << temp << endl;
                                        continuar = true;
                                        break;
                                    }
                                    case 5: {
                                        arrayStack->printStack();
                                        continuar = true;
                                        break;
                                    }
                                    case 6: {
                                        continuar = false;
                                        break;
                                    }
                                    default: {
                                        cout << "\nOpción invalida" << endl;
                                        continuar = true;
                                    }
                                }
                            } while (num != 6);
                            break;
                        }
                        case 4: {
                            cout << "\nOpción invalida" << endl;
                            continuar = true;
                        }
                    }

                } while (num != 3);
                continuar = true;
                break;
            }

            case 3: {
                do {
                    Menu->printMenuCola();
                    cin >> menu;

                    if (!util.EsUnNumero(menu) || (stoi(menu) > 3))
                        num = 4;
                    else
                        num = stoi(menu);

                    switch (num) {
                        case 1: {

                            if (cola)
                                delete cola;

                            cola = new ArrayQueue();

                            do {
                                Menu->printMenuArrayQueue();
                                cin >> menu;

                                if (!util.EsUnNumero(menu) || (stoi(menu) > 6))
                                    num = 7;
                                else
                                    num = stoi(menu);

                                switch (num) {
                                    case 1: {
                                        cout << "\n1. Encolar (queue)" << endl;

                                        cout << "\n1. Insertar Elemento" << endl;
                                        cout << "\nIngrese el nombre:" << endl;
                                        cin >> nombre;
                                        cout << "\nIngrese la cuenta: " << endl;
                                        cin >> cuenta;
                                        Alumno *alumno = new Alumno(nombre, cuenta);
                                        cola->pone_en_cola(alumno);
                                        continuar = true;

                                        break;
                                    }
                                    case 2: {
                                        cout << "\n2. Desencolar (dequeue)" << endl;

                                        Object *dequeue = cola->saca_de_cola();
                                        string Sdequeue = dequeue->toString();

                                        if (dequeue != NULL)
                                            cout << Sdequeue << endl;
                                        else
                                            cout << "\nCola Vacia\n";

                                        continuar = true;
                                        break;
                                    }
                                    case 3: {
                                        cout << "\n3. Ver Frente (peek)" << endl;
                                        if (cola->frente() != NULL)
                                            cout << cola->frente()->toString() << endl;
                                        else
                                            cout << "\nCola Vacia\n";
                                        continuar = true;
                                        break;
                                    }
                                    case 4: {
                                        cout << "\n4. Verificar si está vacía" << endl;
                                        if (cola->vacia())
                                            cout << "La cola esta vacía\n";
                                        else
                                            cout << "La cola no esta vacía\n";
                                        continuar = true;
                                        break;
                                    }
                                    case 5: {
                                        cout << "\n5. Imprimir elementos" << endl;
                                        cola->imprime_cola();
                                        continuar = true;
                                        break;
                                    }
                                    case 6: {
                                        continuar = false;
                                        break;
                                    }
                                    default: {
                                        cout << "\nOpción invalida" << endl;
                                        continuar = true;
                                    }
                                }

                            } while (continuar);
                            break;
                        }
                        case 2: {

                            if (cola)
                                delete cola;

                            cola = new LinkedQueue();

                            do {
                                Menu->printMenuLinkedQueue();
                                cin >> menu;

                                if (!util.EsUnNumero(menu) || (stoi(menu) > 6))
                                    num = 7;
                                else
                                    num = stoi(menu);

                                switch (num) {
                                    case 1: {
                                        cout << "\n1. Encolar (queue)" << endl;

                                        cout << "\n1. Insertar Elemento" << endl;
                                        cout << "\nIngrese el nombre:" << endl;
                                        cin >> nombre;
                                        cout << "\nIngrese la cuenta: " << endl;
                                        cin >> cuenta;
                                        Alumno *alumno = new Alumno(nombre, cuenta);
                                        cola->pone_en_cola(alumno);
                                        continuar = true;
                                        break;
                                    }
                                    case 2: {
                                        cout << "\n2. Desencolar (dequeue)" << endl;

                                        Object *dequeue = cola->saca_de_cola();
                                        string Sdequeue = dequeue->toString();

                                        if (dequeue != NULL)
                                            cout << Sdequeue << endl;
                                        else
                                            cout << "\nCola Vacia\n";

                                        continuar = true;
                                        break;
                                    }
                                    case 3: {
                                        cout << "\n3. Ver Frente (peek)" << endl;
                                        if (cola->frente() != NULL)
                                            cout << cola->frente()->toString() << endl;
                                        else
                                            cout << "\nCola Vacia\n";
                                        continuar = true;
                                        break;
                                    }
                                    case 4: {
                                        cout << "\n4. Verificar si está vacía" << endl;
                                        if (cola->vacia())
                                            cout << "La cola esta vacía\n";
                                        else
                                            cout << "La cola no esta vacía\n";
                                        continuar = true;
                                        break;
                                    }
                                    case 5: {
                                        cout << "\n5. Imprimir elementos" << endl;
                                        cola->imprime_cola();
                                        continuar = true;
                                        break;
                                    }
                                    case 6: {
                                        continuar = false;
                                        break;
                                    }
                                    default: {
                                        cout << "\nOpción invalida" << endl;
                                        continuar = true;
                                    }
                                }

                            } while (continuar);
                        }
                        case 4: {
                            cout << "\nOpción invalida" << endl;
                            continuar = true;
                        }
                    }

                } while (num != 3);
                continuar = true;
                break;
            }

            case 4:{
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