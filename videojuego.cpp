#include "videojuego.h"

Videojuego::Videojuego()
{
    cont = 0;
}

void Videojuego::agregarPersonaje(const Personaje &personaje)
{
    if(cont < 5)
    {
        personajes[cont] = personaje;
        cont++;
    }
    else
        cout << "Arreglo lleno" << endl << "No se puede agregar el personaje" << endl;
}

void Videojuego::mostrar()
{
    for(size_t i = 0; i < cont; i++)
    {
        Personaje &p = personajes[i];
        cout << "Nombre: " << p.getNombre() << endl;
        cout << "Tipo: " << p.getTipo() << endl;
        cout << "Fuerza: " << p.getFuerza() << endl;
        cout << "Salud: " << p.getSalud() << endl;
        cout << endl;
    }
}

