#include <iostream>
#include "videojuego.h"
#include "personaje.h"

using namespace std;

int main()
{
    Videojuego vj;
    Personaje p01 = Personaje("personaje1", "guerrero", 16.28, 40);
    Personaje p02 = Personaje();
    Personaje p03 = Personaje();

    p02.setNombre("personaje2");
    p02.setTipo("hechizero");
    p02.setFuerza(8.28);
    p02.setSalud(57);

    cin >> p03;

    vj << p01 << p02 << p03;
    vj.mostrar();

    return 0;
}

