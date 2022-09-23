#pragma once
//
// Created by shello on 09-18-22.
//

#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include "TDAPila.h"
#include "Simbolo.h"
const int MAX_SIZE = 10;

class ArrayStack : public TDAPila{
    public:
        ArrayStack();
        ~ArrayStack();
        void Push(Simbolo*);
        Simbolo* Pop();
        Simbolo* Top();
        void printStack();

    private:
        Simbolo** array;
        int top;
};


#endif //ARRAYSTACK_H
