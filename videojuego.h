#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include "personaje.h"

class Videojuego
{
    Personaje personajes[5];
    size_t cont;

public:
    Videojuego();

    void agregarPersonaje(const Personaje&);
    void mostrar();

};

#endif//VIDEOJUEGO_H
