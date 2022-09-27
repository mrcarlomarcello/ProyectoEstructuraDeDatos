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

#include <iostream>
ProgramInit::ProgramInit(){

    int num;
    TDALista* lista = NULL;
    TDAPila* arrayStack = NULL;
    TDACola* cola = NULL;
    string nombre;
    string cuenta;
    string simbolo;
    int posicion;
    int opciones;
    bool continuar;
    int contador = 0;
    TextoMenu* Menu;
    //prueba
    //cout << "Hello World! Compile test\n" << endl;

    do{
        Menu->printMainMenu();
        cin >> num;

        switch(num){
            case 1:
                do{
                    Menu->printMenuLista();
                    cin >> num;
                    switch(num){
                        case 1:
                        {
                            if (lista)
                                delete lista;

                            lista = new ArrayList();

                            do{
                                Menu->printMenuArrayList();
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
                                        cout << "\nIngrese el nombre:" << endl;
                                        cin >> nombre;
                                        cout << "\nIngrese la cuenta: " << endl;
                                        cin >> cuenta;

                                        Alumno* alumno = new Alumno(nombre, cuenta);
                                        int query = lista->localiza(alumno);

                                        if (query == -1)
                                            cout << "Sí existe" << endl;
                                        else
                                            cout << "Not found" << endl;

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

                            }while(num != 10);
                            break;
                        }
                        case 2:
                        {
                            if (lista)
                                delete lista;

                            lista = new LinkedList();

                            do{
                                Menu->printMenuLinkedList();
                                cin >> num;

                                switch (num){
                                    case 1:
                                    {
                                        cout << "\n1. Insertar Elemento" << endl;
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
                                        cout << "\nIngrese el nombre:" << endl;
                                        cin >> nombre;
                                        cout << "\nIngrese la cuenta: " << endl;
                                        cin >> cuenta;

                                        Alumno* alumno = new Alumno(nombre, cuenta);
                                        int query = lista->localiza(alumno);

                                        if (query == -1)
                                            cout << "Not found" << endl;
                                        else
                                            cout << "Found in pos : " << query + 1 << endl;

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

                            }while(num != 10);
                        }
                    }
                }while(num != 3);
                break;

            case 2:
                do{
                    Menu->printMenuPila();
                    cin >> num;
                    switch (num) {
                        case 1:{
                            //borra el stack
                            if (arrayStack)
                                delete arrayStack;

                            arrayStack = new ArrayStack();

                            do{
                                Menu->printMenuArrayStack();
                                cin >> num;

                                switch (num) {
                                    case 1:{
                                        cout << "[     Vamos a push un simbolo a la vez     ]" << endl;
                                        cin >> simbolo;
                                        Simbolo* simStack = new Simbolo();
                                        simStack->setSimbolo(simbolo[0]);
                                        arrayStack->Push(simStack);
                                        cout << "[ Listo, hemos agregado: " << simbolo[0] << " ] "<< endl;
                                        break;
                                    }
                                    case 2:{
                                        Object* popedItem = arrayStack->Pop();
                                        cout << "[ Listo hemos Poped-out: " << popedItem->toString()<< " << Poped ]" << endl;
                                        break;
                                    }
                                    case 3:{
                                        cout << "[    Veamos el Tope de la pila   :    ]" << endl;
                                        Object* sim = arrayStack->Top();
                                        cout << "[   Tope : "<< sim->toString() << " ] "<< endl;
                                        break;
                                    }
                                    case 4:{
                                        cout << "Está Vacía?: " << endl;
                                        string temp = arrayStack->vacia() ? "true" : "false";
                                        cout <<  temp << endl;
                                        break;
                                    }
                                    case 5:{
                                        arrayStack->printStack();                                        
                                        break;
                                    }

                                }
                            }while(num != 6);
                            break;
                        }
                        case 2:{
                            //borra el stack
                            if (arrayStack)
                                delete arrayStack;

                            arrayStack = new LinkedStack();

                            do{
                                Menu->printMenuLinkedStack();
                                cin >> num;

                                switch (num) {
                                    case 1:{
                                        cout << "[     Vamos a push un simbolo a la vez     ]" << endl;
                                        cin >> simbolo;
                                        Simbolo* simStack = new Simbolo();
                                        simStack->setSimbolo(simbolo[0]);
                                        arrayStack->Push(simStack);
                                        cout << "[ Listo, hemos agregado: " << simbolo[0] << " ] "<< endl;
                                        break;
                                    }
                                    case 2:{
                                        Object* popedItem = arrayStack->Pop();
                                        cout << "[ Listo hemos Poped-out: " << popedItem->toString()<< " << Poped ]" << endl;
                                        break;
                                    }
                                    case 3:{
                                        cout << "[    Veamos el Tope de la pila   :    ]" << endl;
                                        Object* sim = arrayStack->Top();
                                        cout << "[   Tope : "<< sim->toString() << " ] "<< endl;
                                        break;
                                    }
                                    case 4:{
                                        cout << "Está Vacía?: " << endl;
                                        string temp = arrayStack->vacia() ? "true" : "false";
                                        cout <<  temp << endl;
                                        break;
                                    }
                                    case 5:{
                                        arrayStack->printStack();                                        
                                        break;
                                    }

                                }
                            }while(num != 6);
                            break;
                        }
                    }
                }while(num != 3);
                break;

            case 3:
                do{
                    Menu->printMenuCola();
                    cin >> num;
                    switch(num){
                        case 1:{

                            if (cola)
                                delete cola;

                            cola = new ArrayQueue();

                            do{
                                Menu->printMenuArrayQueue();
                                cin >> num;

                                switch (num){
                                    case 1:
                                    {
                                        cout << "\n1. Encolar (queue)" << endl;

                                        cout << "\n1. Insertar Elemento" << endl;
                                        cout << "\nIngrese el nombre:" << endl;
                                        cin >> nombre;
                                        cout << "\nIngrese la cuenta: " << endl;
                                        cin >> cuenta;
                                        Alumno* alumno = new Alumno(nombre, cuenta);
                                        cola->pone_en_cola(alumno);

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

                            }while(num != 6);
                            break;
                        }
                        case 2:{

                            if (cola)
                                delete cola;

                            cola = new LinkedQueue();

                            do{
                                Menu->printMenuLinkedQueue();
                                cin >> num;

                                switch (num){
                                    case 1:
                                    {
                                        cout << "\n1. Encolar (queue)" << endl;

                                        cout << "\n1. Insertar Elemento" << endl;
                                        cout << "\nIngrese el nombre:" << endl;
                                        cin >> nombre;
                                        cout << "\nIngrese la cuenta: " << endl;
                                        cin >> cuenta;
                                        Alumno* alumno = new Alumno(nombre, cuenta);
                                        cola->pone_en_cola(alumno);

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

                            }while(num != 6);
                        }
                    }

                }while(num != 3);
                break;
        }

    }while(num != 4);
};