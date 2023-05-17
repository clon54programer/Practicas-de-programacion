#include <iostream>
#include <fstream>
#include "lib/excepciones.h"

using namespace std;

string myText;

void printData()
{
    ifstream myData("stundets.txt");

    while (getline(myData, myText))
    {
        cout << myText << endl;
    }
}

int main(int argc, char const *argv[])
{
    UserControl user;

    // varibales
    string interacion; // varible para todo la interacion de string.
    bool y;            // esta variable recivira el valor del metodo verificacion.
    bool verificacion; // este inicialar el metodo Verificacion.
    int ruta;          // este recibira el valor de el metodo RutaElegida.
    int rutaElegida;   // activara los if.

    cout << "bienvenido usuario se debe resgistrar, escriba acepto\n";
    cin >> interacion;

    user.Interacion(interacion);         // metodo que manda exciones
    verificacion = user.verificacion(y); // metodo que regresa un true o false

    while (verificacion == true)
    {
        cout << "si va a actualizar notas coloque actu o si va a ver notas coloque wacth" << endl;
        cin >> interacion;
        user.Rutas(interacion);
        rutaElegida = user.RutaElegida(ruta);

        if (rutaElegida == 1)
        {
            cout << "actualizar notas" << endl;
            printData();
        }
        else if (rutaElegida == 2)
        {
            cout << "ver estudianetes" << endl;
        }

        break;
    }

    return 0;
}
