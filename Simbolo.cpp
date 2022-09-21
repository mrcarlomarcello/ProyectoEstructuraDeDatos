#include "Simbolo.h"

using namespace std;

Simbolo::Simbolo() {
}

//definiendo las clases virtuales
bool Simbolo::equals(Object* item){
}

void Simbolo::setSimbolo(char _simbolo) {
    this->simbolo = _simbolo;
}

char Simbolo::getSimbolo(){
    return this->simbolo;
}
