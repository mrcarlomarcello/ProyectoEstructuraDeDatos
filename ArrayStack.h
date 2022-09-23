#pragma once
//
// Created by shello on 09-18-22.
//

#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include "TDAPila.h"

class ArrayStack : public TDAPila{
    public:

        ArrayStack();
        ~ArrayStack();

        virtual void Push(Object*);
        virtual Object* Pop();
        virtual Object* Top();
        virtual bool vacia();
        virtual void printStack();

    private:
        Object** array;
        int top;
        int MAX_SIZE;
};


#endif //ARRAYSTACK_H
