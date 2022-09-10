#include "Alumno.h"

Alumno::Alumno()
{
	nombre = "";
	cuenta = "";	
}

Alumno::Alumno(string nombre, string cuenta)
{
	nombre = this->nombre;
	cuenta = this->cuenta;	
}

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