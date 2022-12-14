#pragma once

#ifndef ALUMNO_H
#define ALUMNO_H

#include "Object.h"
#include <string>
using std::string;

class Alumno : public Object
{
	public:
		Alumno();
		Alumno(string, string);

        virtual bool equals(Object*);
        virtual string toString();
		
		virtual string getCuenta();
		virtual string getNombre();
		virtual void setCuenta(string);
		virtual void setNombre(string);
	protected:
		string cuenta;
		string nombre;	
};

#endif //ALUMNO_H