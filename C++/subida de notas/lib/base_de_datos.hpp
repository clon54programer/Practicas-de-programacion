#ifndef Base_de_Datos_HPP
#define Base_de_Datos_HPP
#include <iostream>
#include <string>

using namespace std;

class Base_de_Datos
{
private:
    string students[100];
    int lista_de_notas[];

public:
    void actualizar(int posicion, string students[], int lista_de_notas[]);
    void ver();
};

#endif