//
// Created by shello on 09-18-22.
//

#include "ArrayStack.h"

//#include "stdafx.h"
#include <iostream>

using namespace std;

ArrayStack::ArrayStack() {
    this->top = -1;
    this->array = new Object*[MAX_SIZE];
    for(int i=0; i<MAX_SIZE; i++)
        array[i] = NULL;
}

ArrayStack::~ArrayStack() {}

void ArrayStack::Push(Object* _simbolo) {
    if (this->top >= (MAX_SIZE -1))
    {
        cout << "Limite de la pila alcanzado\n";
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