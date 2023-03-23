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

void Videojuego::abrir()
{
    ifstream archivo("personajes.txt");

    if(archivo.is_open())
    {
        Personaje personaje;
        string cadena;
        float fuerza;
        int salud;

        while(true)
        {
            getline(archivo, cadena);
            personaje.setNombre(cadena);

            getline(archivo, cadena);
            personaje.setTipo(cadena);

            if(archivo.eof()) break;

            getline(archivo, cadena);
            fuerza = stof(cadena);
            personaje.setFuerza(fuerza);

            getline(archivo, cadena);
            salud = stoi(cadena);
            personaje.setSalud(salud);

            agregarPersonaje(personaje);
        }

        cout << "DATOS CARGADOS" << endl;
    }
    else
        cout << "ERROR AL ABRIR LOS DATOS" << endl;

    archivo.close();
}

