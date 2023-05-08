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