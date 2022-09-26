//
// Created by shello on 09-18-22.
//

#include "ArrayStack.h"

//#include "stdafx.h"
#include <iostream>

using namespace std;

ArrayStack::ArrayStack() {
    this->top = -1;
    this->MAX_SIZE=10;
    this->array = new Object* [this->MAX_SIZE];
    for(int i=0; i<MAX_SIZE; i++)
        array[i] = NULL;
}

ArrayStack::~ArrayStack() {}

void ArrayStack::Push(Object* _item) {
    if (this->top >= (MAX_SIZE -1))
    {
        cout << "Límite de la pila alcanzado, prueba 'Sacar' un elemento de la pila.\n";
        return;
    }
    this->array[++top] = _item;
}

Object* ArrayStack::Pop(){
    if (top == -1)
    {
        cout << "Pila vacía\n";
        return NULL;
    }
    return array[top--];

}

Object* ArrayStack::Top()
{
    if (top == -1)
    {
        cout << "STACK IS EMPTY\n";
        return NULL;
    }
    return array[top];
}

bool ArrayStack::vacia(){
    if(top == -1)
        return true;
    return false;
}

void ArrayStack::printStack(){
    cout << "Usaremos recursión para sacar la pila en orden y volver armarla." << endl;
    this->recorrerPila(top);
}

void ArrayStack::recorrerPila(int pos) {
    if(pos == -1){ cout << "Listo este es el fondo o la pila está va©ía. " << endl; return;}
    Object* temp = this->Pop();
    cout << " [ " << temp->toString() << " ] " << endl;
    recorrerPila(top);
    this->Push(temp);
}