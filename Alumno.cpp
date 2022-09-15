#include "Alumno.h"


Alumno::Alumno()
{
	this->nombre = "";
	this->cuenta = "";
}



Alumno::Alumno(string _nombre, string _cuenta)
{
	this->nombre = _nombre;
	this->cuenta = _cuenta;
}

//definiendo las clases virtuales
bool Alumno::equals(Object*){}
string Alumno::toString() {}


string Alumno::getCuenta()
{
	return cuenta;
}

string Alumno::getNombre()
{
	return nombre;
}

void Alumno::setCuenta(string Newcuenta)
{
	cuenta = Newcuenta;
}

void Alumno::setNombre(string Newnombre)
{
	nombre = Newnombre;
}
