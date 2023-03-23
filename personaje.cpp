#include "personaje.h"

Personaje::Personaje()
{

}

Personaje::Personaje(const string &nombre, const string &tipo, float fuerza, int salud)
{
    this->nombre = nombre;
    this->tipo = tipo;
    this->fuerza = fuerza;
    this->salud = salud;

    mayusculas(this->nombre);
    mayusculas(this->tipo);
}

void Personaje::mayusculas(string &cadena)
{
    for(size_t i = 0; i < cadena.length(); i++)
        cadena[i] = toupper(cadena[i]);
}

