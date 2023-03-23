#include <iostream>
#include "personaje.h"

using namespace std;

int main()
{
    Personaje p01 = Personaje("personaje1", "guerrero", 16.28, 40);
    Personaje p02 = Personaje();

    p02.setNombre("personaje2");
    p02.setTipo("hechizero");
    p02.setFuerza(8.28);
    p02.setSalud(57);

    cout << "Nombre: " << p01.getNombre() << endl;
    cout << "Tipo: " << p01.getTipo() << endl;
    cout << "Fuerza: " << p01.getFuerza() << endl;
    cout << "Salud: " << p01.getSalud() << endl;
    cout << endl;
    cout << "Nombre: " << p02.getNombre() << endl;
    cout << "Tipo: " << p02.getTipo() << endl;
    cout << "Fuerza: " << p02.getFuerza() << endl;
    cout << "Salud: " << p02.getSalud() << endl;

    return 0;
}

