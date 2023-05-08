#include <iostream>
#include "lib/excepciones.h"

using namespace std;

int main(int argc, char const *argv[])
{
    UserControl user;

    // varibales
    string interacion;
    bool y;
    bool verificacion;

    cout << "bienvenido usuario se debe resgistrar, escriba acepto\n";
    cin >> interacion;

    user.Interacion(interacion);         // metodo que manda exciones
    verificacion = user.verificacion(y); // metodo que regresa un true o false

    while (verificacion == true)
    {
        cout << "\nhello word";
        break;
    }

    return 0;
}
