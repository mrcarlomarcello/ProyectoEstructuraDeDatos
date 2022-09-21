#pragma once

#ifndef SIMBOLO_H
#define SIMBOLO_H

#include "Object.h"

class Simbolo : public Object
{
	public:
        //Simbolo();
		//virtual bool equals(Object*);
        //virtual string toString();
        virtual void setSimbolo(char);
        virtual char getSimbolo();

	protected:
        char simbolo;
};

#endif //SIMBOLO_H