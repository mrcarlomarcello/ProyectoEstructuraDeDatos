#include "Util.h"
#include <iostream>
#include <ctype.h>

#include <string>
#include <fstream>
#include <streambuf>

using namespace std;

bool Util::EsUnNumero(const char* cadena)
{
    for( ; *cadena; ++cadena )
    {
        // En cuanto un caracter no sea numérico
        if( !isdigit(*cadena) )
            return false;
    }
    return true;
}