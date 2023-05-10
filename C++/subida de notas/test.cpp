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
    int ruta = 0;

    cout << "bienvenido usuario se debe resgistrar, escriba acepto\n";
    cin >> interacion;

    user.Interacion(interacion);         // metodo que manda exciones
    verificacion = user.verificacion(y); // metodo que regresa un true o false

    while (verificacion == true)
    {
        cout << "si va a actualizar notas coloque actu o si va a ver notas coloque wacth" << endl;
        cin >> interacion;
        user.Rutas(interacion);
        user.RutaElegida(ruta);

        if (ruta == 1)
        {
            cout << "actualizar notas" << endl;
        }
        else if (ruta == 2)
        {
            cout << "ver estudianetes" << endl;
        }

        break;
    }

    return 0;
}
