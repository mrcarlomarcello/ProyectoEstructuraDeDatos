#include "Simbolo.h"

using namespace std;

Simbolo::Simbolo()
{
    this->simbolo= '\0';
}

//definiendo las clases virtuales
bool Simbolo::equals(Object* item){}

string  Simbolo::toString() {
    temp = this->simbolo;
    return temp;
}

void Simbolo::setSimbolo(char _simbolo) {
    this->simbolo = _simbolo;
}

char Simbolo::getSimbolo(){
    return this->simbolo;
}
