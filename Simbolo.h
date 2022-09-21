#pragma once

#include "Object.h"

#ifndef SIMBOLO_H
#define SIMBOLO_H

class Simbolo : public Object
{
	public:
        Simbolo();
		virtual bool equals(Object*);
        //virtual string toString();
        void setSimbolo(char);
        char getSimbolo;

	protected:
        char simbolo;
};

#endif //SIMBOLO_H