#pragma once
//
// Created by shello on 09-21-22.
//

#ifndef PROYECTOESTRUCTURADEDATOS_TDAPILA_H
#define PROYECTOESTRUCTURADEDATOS_TDAPILA_H

#include "Object.h"

class TDAPila {
    public:

        virtual void Push(Object*)=0;
        virtual Object* Pop()=0;
        virtual Object* Top()=0;
        virtual void printStack()=0;
};


#endif //PROYECTOESTRUCTURADEDATOS_TDAPILA_H
