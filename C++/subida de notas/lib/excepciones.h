#ifndef excepciones_h
#define excepciones_h

#include <iostream>

using namespace std;

class UserControl
{
private:
    bool accept;
    int camino; // esta varible es para elegir unas de las 2 rutas
public:
    // fase despues de logeo
    void Interacion(string x); // verficacion antes del bucle while
    bool verificacion(bool x); // retorna un true si se cumplen las condiciones para iniciar el bucle while

    /*----------------------------------------------------------------------------------------------------------
    | esta es la fase para la elecion de rutas
    |1. la primera es para actualizar resultados de los estudinates.
    |2. es para ver solo las notas de los estudiantes.
    */
    void Rutas(string y); // aqui hay una excepcion para ver que el usuario lo escribio bien.
    int RutaElegida(int x);
};
#endif