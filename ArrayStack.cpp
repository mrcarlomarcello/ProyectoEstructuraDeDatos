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

void ArrayStack::Push(Object* _simbolo) {
    if (this->top >= (MAX_SIZE -1))
    {
        cout << "Límite de la pila alcanzado, prueba 'Sacar' un elemento de la pila.\n";
        return;
    }
    this->array[++top] = _simbolo;
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

bool ArrayStack::vacia(){}

void ArrayStack::printStack(){}