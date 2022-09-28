//
// Created by dessire
// ordered by shell0
//

#include "ArrayQueue.h"
#include <iostream>
using namespace std;

ArrayQueue::ArrayQueue()
{
    inicio = -1;
    final = -1;
    n = 0;
    capacidad = 10;
    array = new Object*[capacidad];
    for(int i=0; i<capacidad; i++)
        array[i] = NULL;
}

ArrayQueue::~ArrayQueue()
{
    for(int i=0; i<capacidad; i++){
        if(array[i]){
            delete array[i];
        }
    }
    //libera el arreglo
    delete[] array;
}

void ArrayQueue::pone_en_cola(Object* item){

    if (item != nullptr) {
        if (final != -1 && final == n)
            cout << "\nCola llena\n";
        else{
            if (inicio == -1)
                inicio = 0;
            n++;
            final++;
            array[final] = item;
            cout << "\nPuesto en cola realizado con exito\n";
        }
    }
}//Queue

Object* ArrayQueue::saca_de_cola(){
    Object* dequeue = NULL;
    if (n>0){
        if (inicio == final){
            dequeue = array[final];
            array[final] = NULL;
            inicio = final = -1;
            n--;
            return dequeue;
        }
        else{
            dequeue = array[inicio];
            //array[inicio] = NULL;
            //inicio++;
            //n--;
            return dequeue;
        }
    }
    else
        return NULL;
}//Dequeue

Object* ArrayQueue::frente(){
    if (n >= 1)
        return array[0];
    else
        return NULL;
}

bool ArrayQueue::vacia(){
    if (inicio == -1 && final == -1)
        return true;
    else
        return false;
}

void ArrayQueue::imprime_cola(){
    if (n<=0)
        cout << "\nCola vacia\n";
    else{
        for(int i = inicio; i <= final; i++)
            imprimir(array[i]);
    }
}

void ArrayQueue::imprimir(Object* item){
    cout<< (item->toString()) << endl;
}

void ArrayQueue::anula(){
    if (n>0){
        for (int i=n; i <= n; i--)
            array[i] = NULL;
    }
}


