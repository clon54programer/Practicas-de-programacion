#include <iostream>
#include "lib/excepciones.h"

using namespace std;

int main(int argc, char const *argv[])
{
    UserControl user;

    // varibales
    string interacion;
    bool x;

    cout << "bienvenido usuario se debe resgistrar, escriba acepto\n";
    cin >> interacion;

    user.Interacion(interacion);
    user.verificacion(x);

    while (x)
    {
        cout << "hello word";
        break;
    }

    return 0;
}
