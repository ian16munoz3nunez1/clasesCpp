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

    void setNombre(const string&);
    void setTipo(const string&);
    void setFuerza(float);
    void setSalud(int);

    string getNombre();
    string getTipo();
    float getFuerza();
    int getSalud();

private:
    void mayusculas(string&);

};

#endif//PERSONAJE_H
