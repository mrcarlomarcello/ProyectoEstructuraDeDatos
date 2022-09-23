//
// Created by shello on 09-23-22.
//
using namespace std;
#include "TextoMenu.h"
#include <iostream>

void TextoMenu::printMainMenu() {
    cout << "\nMenú Principal"
         << "\n1. Trabajar con Listas"
         << "\n2. Trabajar con Pilas"
         << "\n3. Trabajar con Colas"
         << "\n4. Salir" << endl;
}

void TextoMenu::printMenuLista() {
    cout << "\nMenu Tipo de Lista"
         << "\n1. Trabajar con ArrayList"
         << "\n2. Trabajar con LinkedList"
         << "\n3. Regresar al menú principal" << endl;
}

void TextoMenu::printMenuArrayList() {
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
}

void TextoMenu::printMenuLinkedList() {
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
}

void TextoMenu::printMenuPila() {
    cout << "\nMenu Tipo de Pila"
         << "\n1. Trabajar con ArrayStack"
         << "\n2. Trabajar con LinkedStack"
         << "\n3. Regresar al menu principal" << endl;
}

void TextoMenu::printMenuArrayStack() {
    cout << "\nOperaciones de ArrayStack"
         << "\n1. “Empujar” (push)"
         << "\n2. “Sacar” (pop)"
         << "\n3. Ver Tope (top)"
         << "\n4. Verificar si está vacía"
         << "\n5. Imprimir elementos"
         << "\n6. Regresar al Menú Principal" << endl;
}

void TextoMenu::printMenuLinkedStack() {
    cout << "\nOperaciones de LinkedStack"
         << "\n1. “Empujar” (push)"
         << "\n2. “Sacar” (pop)"
         << "\n3. Ver Tope (top)"
         << "\n4. Verificar si está vacía"
         << "\n5. Imprimir elementos"
         << "\n6. Regresar al Menú Principal" << endl;
}

void TextoMenu::printMenuCola() {
    cout << "\nMenu Tipo de Cola"
         << "\n1. Trabajar con ArrayQueue"
         << "\n2. Trabajar con LinkedQueue"
         << "\n3. Regresar al menu principal" << endl;
}

void TextoMenu::printMenuArrayQueue() {
    cout << "\nOperaciones de ArrayQueue"
         << "\n1. Encolar (queue)"
         << "\n2. Desencolar (dequeue)"
         << "\n3. Ver Frente (peek)"
         << "\n4. Verificar si está vacía"
         << "\n5. Imprimir elementos"
         << "\n6. Regresar al Menú Principal" << endl;
}

void TextoMenu::printMenuLinkedQueue() {
    cout << "\nOperaciones de LinkedQueue"
         << "\n1. Encolar (queue)"
         << "\n2. Desencolar (dequeue)"
         << "\n3. Ver Frente (peek)"
         << "\n4. Verificar si está vacía"
         << "\n5. Imprimir elementos"
         << "\n6. Regresar al Menú Principal" << endl;
}