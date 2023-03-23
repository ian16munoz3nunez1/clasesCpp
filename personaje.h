#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>

using namespace std;

class Personaje
{
    string nombre;
    string tipo;
    float fuerza;
    int salud;

public:
    Personaje();
    Personaje(const string&, const string&, float, int);

private:
    void mayusculas(string&);

};

#endif//PERSONAJE_H
