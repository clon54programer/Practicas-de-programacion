#include <iostream>
#include "lib/excepciones.h"

using namespace std;

int main(int argc, char const *argv[])
{
    UserControl user;

    // varibales
    string interacion;
    bool x;
    bool verificacion;

    cout << "bienvenido usuario se debe resgistrar, escriba acepto\n";
    cin >> interacion;

    user.Interacion(interacion);         // metodo que manda exciones
    verificacion = user.verificacion(x); // metodo que regresa un true o false

    while (verificacion == true)
    {
        cout << "hello word";
        break;
    }

    return 0;
}
