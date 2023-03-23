#include <fstream>
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
        cout << personajes[i];
}

void Videojuego::guardar()
{
    ofstream archivo("personajes.txt");

    if(archivo.is_open())
    {
        for(size_t i = 0; i < cont; i++)
        {
            archivo << personajes[i].getNombre() << endl;
            archivo << personajes[i].getTipo() << endl;
            archivo << personajes[i].getFuerza() << endl;
            archivo << personajes[i].getSalud() << endl;
        }

        cout << "DATOS GUARDADOS" << endl;
    }
    else
        cout << "ERROR AL GUARDAR LOS DATOS" << endl;

    archivo.close();
}

