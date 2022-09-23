//
// Created by shello on 09-18-22.
//

#include "LinkedStack.h"
#include <iostream>
using namespace std;

LinkedStack::LinkedStack()
{
    inicio = NULL;
    final = NULL;
}

LinkedStack::~LinkedStack()
{
    if(final)
        delete final;
}

void LinkedStack::Push(Object* _item) {
    Nodo *ptr = new Nodo();
    ptr->setItem(_item);

    if(inicio == NULL){
        inicio = ptr;
        final = ptr;
    }else{
        ptr->setAnterior(final);
        final = ptr;
    }
}

Object* LinkedStack::Pop(){
    if (inicio == NULL)
    {
        cout << "Pila vacía\n";
        return NULL;
    }else {
        Object *temp = final->getItem();
        final = final->getAnterior();
        // creo que lekea memoria
        return temp;
    }
}

Object* LinkedStack::Top(){}

bool LinkedStack::vacia() {
    return (this->inicio == NULL);
}

void LinkedStack::printStack() {
    cout << "Usaremos recursión para sacar la pila en orden y volver armarla." << endl;
    this->recorrerPila(0);
}

void LinkedStack::recorrerPila(int tope) {}

