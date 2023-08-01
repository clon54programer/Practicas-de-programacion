#include <iostream>
#include "lib/base_de_datos.hpp"

using namespace std;

void Base_de_Datos::actualizar(int posicion, string students[], int lista_de_notas[])
{
    ver();
}

void Base_de_Datos::ver()
{
    int moven = students->length() - 1;
    cout << "lista de estudiantes" << endl; // nueva forma de saltar de linea
    for (int i = 0; i <= moven; i++)
    {
        cout << "#" << i + 1 << "\t" << students[i] << " \t nota " << lista_de_notas[i] << endl;
    }
}