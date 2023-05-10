#include <iostream>
#include "lib/excepciones.h"

using namespace std;

// variables
string interacion;
bool acepto;

void UserControl::Interacion(string x)
{
    try
    {
        if (x == "acepto") // if para verificar que el usuario coloco  lo que deseamon en este caso acepto
        {
            acepto = true;
            cout << "bienvenido profesor o profesora";
        }
        else
        {
            throw(x); // manda error
            acepto = false;
        }
    }
    catch (string correct) // esta parte del codigo le dice al usuario cual fue el error que cometio.
    {
        cout << "Error Grave, escribio mal acepto\n por favor escribalo con minusculas toda la palabra y bien\n";
    }
}

bool UserControl::verificacion(bool x)
{
    x = acepto; // esto es para que recoja el valor de el metodo Interacion
    return x;
}

void UserControl::Rutas(string y)
{
    try // manejo de eroroes
    {

        if (y == "actu")
        {
            cout << "seleciono actualizar notas" << endl;
            camino = 1;
        }
        else if (y == "wacth")
        {
            cout << "seleciono ver notas" << endl;
            camino = 2;
        }
        else
        {
            throw(y);
        }
    }
    catch (string correct)
    {
        // esto es para dar ordenes al sistema operativo y limpiar la consola.
        cout << "ERROR GRAVE, no escribio bien wacth o actu\n por favor escribalos bien y en minusculas" << endl;
        system("cls");
    }
}