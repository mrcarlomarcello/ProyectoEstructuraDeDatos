//
// Created by shello on 09-18-22.
//
/*
#include "ArrayStack.h"

#include "stdafx.h"
#include <iostream>

using namespace std;

ArrayStack::ArrayStack() {
    this->top = -1;
    StackDeAlumnos = new Object*[MAX_SIZE];
    for(int i=0; i<MAX_SIZE; i++)
        StackDeAlumnos[i] = NULL;
}

void ArrayStack::Push(Object* _alumno) {
    if (this->top >= (MAX_SIZE -1))
    {
        cout << "Limite de la pila alcanzado\n";
        return;
    }
    this->StackDeAlumnos[++top] = _alumno;
}

Object* ArrayStack::Pop(){
    if (top == -1)
    {
        cout << "Pila vacía\n";
        return NULL;
    }
    return StackDeAlumnos[top--];

}

Object* ArrayStack::Top()
{
    if (top == -1)
    {
        cout << "STACK IS EMPTY\n";
        return NULL;
    }
    return StackDeAlumnos[top];
}
*/