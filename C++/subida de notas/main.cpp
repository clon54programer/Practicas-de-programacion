#include <iostream>
#include <fstream>

// librerias propias
#include "lib/login.h"
#include "lib/excepciones.h"

using namespace std;

string students[]{
    "Guillermo",
    "juan",
    "david",
    "juanjo",
    "agustin",
    "maria",
    "gilma",
    "weon",
    "diego",
    "dayana",
};
double stunentsNotas[]{// notas de los estudiantes
                       1.0,
                       3.0,
                       3.7,
                       4.0,
                       2.5,
                       1.0,
                       0.0,
                       0.0,
                       0.0,
                       0.0};
int Moven = students->length() - 1; // variable para evitar excepciones

void verNotas()
{
    cout << "lista de estudiantes" << endl; // nueva forma de saltar de linea
    for (int i = 0; i <= Moven; i++)
    {
        cout << "#" << i + 1 << "\t" << students[i] << " \t nota " << stunentsNotas[i] << endl;
    }
}

void actualizarNota(int posicion, double nota)
{
    stunentsNotas[posicion] = notas;
}

// informacion
// ofstream notas("notas.txt");

int main(int argc, char const *argv[])
{
    // objetos

    UserControl user;
    Base_de_Datos Control;

    bool accept;       // iniciador del while
    string interacion; // conversion de bool a string

    cout << "bienvenido usuario se debe resgistrar, escriba acepto\n";
    cin >> interacion; //

    // verificacion para que el usuario no la cague
    user.Interacion(interacion);
    bool recividor = user.verificacion(accept); // este recevidira el retorno de la funcion

    /*en el bucle siguiente habra dos rutas una para actualizar notas y otro para ver notas */
    int rutas;        // varible de las rutas
    int elcionDeRuta; // recibira el valor de las rutas

    while (recividor == true)
    {
        cout << "usted que va a hacer va actualizar una nota o va ver notas" << endl;
        cout << "si va a actualizar notas coloque actu o si va a ver notas coloque wacth" << endl;
        cin >> interacion;
        // metodos
        //______________________________________________________________________________________________________
        user.Rutas(interacion);
        rutas = user.RutaElegida(elcionDeRuta);
        //______________________________________________________________________________________________________________
        // comienza las rutas
        if (rutas == 1) // esta es la ruta para actualizar los resulatados
        {

            system("pause"); // este metodo es para darle tiempo al usuario para analizar la informacion
        }
        else if (rutas == 2) // esta es la ruta para ver las notas
        {
            cout << "lista de estudiantes" << endl;
            for (int i = 0; i <= Moven; i++)
            {
                cout << "#" << i + 1 << "\t" << students[i] << " \t nota " << stunentsNotas[i] << endl;
            }
            system("pause"); // este metodo es para darle tiempo al usuario para analizar la informacion
        }
    }

    return 0;
}