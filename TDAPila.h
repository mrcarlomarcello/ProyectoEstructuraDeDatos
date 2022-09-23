#pragma once
//
// Created by shello on 09-21-22.
//

#ifndef TDAPILA_H
#define TDAPILA_H

#include "Object.h"

class TDAPila{

    public:
        virtual void Push(Object*)=0;
        virtual Object* Pop()=0;
        virtual Object* Top()=0;
        virtual bool vacia()=0;
        virtual void printStack()=0;

    protected:
        virtual void recorrerPila(int)=0;
};


#endif //TDAPILA_H
