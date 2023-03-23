#include <iostream>
#include "videojuego.h"
#include "personaje.h"

using namespace std;

int main()
{
    Videojuego vj;
    Personaje p01 = Personaje("personaje1", "guerrero", 84.93, 30);
    Personaje p02 = Personaje();
    Personaje p03 = Personaje();
    Personaje p04 = Personaje("personaje4", "reina", 97.21, 90);
    Personaje p05 = Personaje("personaje5", "arquero", 16.37, 70);
    Personaje p06 = Personaje("personaje6", "dragon", 200, 200);

    p02.setNombre("personaje2");
    p02.setTipo("hechizero");
    p02.setFuerza(27.93);
    p02.setSalud(90);

    cin >> p03;

    cout << "<------------------------------>" << endl;
    vj << p01 << p02 << p03 << p04 << p05 << p06;
    cout << "<------------------------------>" << endl;

    vj.mostrar();
    vj.guardar();

    return 0;
}

