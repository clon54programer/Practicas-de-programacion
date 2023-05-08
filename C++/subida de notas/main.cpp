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

// informacion
// ofstream notas("notas.txt");

int main(int argc, char const *argv[])
{
    // objetos

    UserControl user;

    bool accept;       // iniciador del while
    string interacion; // conversion de bool a string
    cout << "bienvenido usuario se debe resgistrar, escriba acepto\n";

    // verificacion para que el usuario no la cague
    try
    {
        cin >> interacion;

        if (interacion == "acepto") // if para verificar que el usuario coloco  lo que deseamon en este caso acepto
        {
            accept = true;
            cout << "bienvenido profesor o profesora";
        }
        else
        {
            throw(interacion); // manda error
            accept = false;
        }
    }
    catch (string correct) // esta parte del codigo le dice al usuario cual fue el error que cometio.
    {
        cout << "Error Grave, escribio mal acepto\n por favor escribalo con minusculas toda la palabra y bien\n";
    }

    /*en el bucle siguiente habra dos rutas una para actualizar notas y otro para ver notas */
    string rutas; // varible de las rutas
    int elcionDeRuta;

    while (accept)
    {
        cout << "usted que va a hacer va actualizar una nota o va ver notas" << endl;
        cout << "si va a actualizar notas coloque actu o si va a ver notas coloque wacth" << endl;
        try // manejo de eroroes
        {
            cin >> rutas;
            if (rutas == "actu")
            {
                cout << "seleciono actualizar notas" << endl;
                elcionDeRuta = 1;
            }
            else if (rutas == "wacth")
            {
                cout << "seleciono ver notas" << endl;
                elcionDeRuta = 2;
            }
            else
            {
                throw(rutas);
            }
        }
        catch (string correct)
        {
            // esto es para dar ordenes al sistema operativo y limpiar la consola.
            cout << "ERROR GRAVE, no escribio bien wacth o actu\n por favor escribalos bien y en minusculas" << endl;
            system("cls");
        }

        //______________________________________________________________________________________________________________
        // comienza las rutas
        if (elcionDeRuta == 1) // esta es la ruta para actualizar los resulatados
        {
            cout << "lista de estudiantes" << endl; // nueva forma de saltar de linea
            for (int i = 0; i <= Moven; i++)
            {
                cout << "#" << i + 1 << "\t" << students[i] << " \t nota " << stunentsNotas[i] << endl;
            }
            system("pause"); // este metodo es para darle tiempo al usuario para analizar la informacion
        }
        else if (elcionDeRuta == 2) // esta es la ruta para ver las notas
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