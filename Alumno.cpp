#include "Alumno.h"
#include <iostream>
using namespace std;

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
bool Alumno::equals(Object* item){
}

string Alumno::toString() {
	string alumno;
	alumno = "Nombre: " + nombre + " - Cuenta: " + cuenta;
	return alumno;
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
