//
// Created by shello on 09-14-22.
//
using namespace std;
#include "ProgramInit.h"
#include "TDALista.h"
#include "Alumno.h"
#include "ArrayList.h"
#include <iostream>

ProgramInit::ProgramInit(){

    int num;
    TDALista* lista = NULL;
    string nombre;
    string cuenta;

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
                                    cout << "\n1. Insertar Elemento" << endl;
                                    cout << "\nIngrese el nombre:" << endl;
                                    cin >> nombre;
                                    cout << "\nIngrese la cuenta: " << endl;
                                    cin >> cuenta;
                                    cout << "AQUI HAY UN ERROR !!! " << endl;
									//<-----arreglar esto
                                    //Alumno* alumno = new Alumno(nombre, cuenta);
                                    //lista->inserta(alumno, posicion);
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
};