#pragma once
//
// Created by dessire
// ordered by shell0
//

#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#include "TDACola.h"

class ArrayQueue : public TDACola
{
public:

    ArrayQueue();
    ~ArrayQueue();

    virtual void pone_en_cola(Object*);//Queue
    virtual Object* saca_de_cola();//Dequeue
    virtual Object* frente();//peek
    virtual bool vacia();
    virtual void imprime_cola();
    void imprimir(Object* item);
    virtual void anula();

protected:
    int capacidad;
    int n;
    int inicio;
    int final;
    Object** array;
};

#endif //ARRAYQUEUE_H
