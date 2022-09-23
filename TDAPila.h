#pragma once
//
// Created by shello on 09-21-22.
//

#ifndef PROYECTOESTRUCTURADEDATOS_TDAPILA_H
#define PROYECTOESTRUCTURADEDATOS_TDAPILA_H

#include "Simbolo.h"

class TDAPila {
    public:

        virtual void Push(Simbolo*)=0;
        virtual Simbolo* Pop()=0;
        virtual Simbolo* Top()=0;
        virtual void printStack()=0;
};


#endif //PROYECTOESTRUCTURADEDATOS_TDAPILA_H
