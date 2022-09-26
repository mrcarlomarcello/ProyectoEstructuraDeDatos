#pragma once
//
// Created by shello on 09-18-22.
//

#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H

#include "TDAPila.h"
#include "Nodo.h"

class LinkedStack : public TDAPila {
    public:
        LinkedStack();
        ~LinkedStack();
        virtual void Push(Object*);
        virtual Object* Pop();
        virtual Object* Top();
        virtual bool vacia();
        virtual void printStack();

    private:
        Nodo* inicio;
        Nodo* final;
        virtual void recorrerPila(int);
};


#endif //LINKEDSTACK_H
