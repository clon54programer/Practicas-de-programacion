#include <iostream>
#include "lib/excepciones.h"

using namespace std;

// variables
string interacion;

void UserControl::Interacion(string x)
{
    try
    {
        if (x == "acepto") // if para verificar que el usuario coloco  lo que deseamon en este caso acepto
        {
            accept = true;
            cout << "bienvenido profesor o profesora";
        }
        else
        {
            throw(x); // manda error
            accept = false;
        }
    }
    catch (string correct) // esta parte del codigo le dice al usuario cual fue el error que cometio.
    {
        cout << "Error Grave, escribio mal acepto\n por favor escribalo con minusculas toda la palabra y bien\n";
    }
}