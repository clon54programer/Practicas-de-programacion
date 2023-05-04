#include <iostream>
#include <fstream>

using namespace std;

// listas de estudianetes
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
int Moven = students->length() - 1; // variable para evitar excepciones

class Login
{
private:
    string name;
    string password;

public:
    Login(string Username, string UserPassword);
};

Login::Login(string Username, string UserPassword)
{
    name = Username;
    password = UserPassword;
}

int main(int argc, char const *argv[])
{
    students;
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
            else if (rutas == "watch")
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
            system("cls"); // esto es para dar ordenes al sistema operativo y limpiar la consola.
            cout << "ERROR GRAVE, no escribio bien wacth o actu\n por favor escribalos bien y en minusculas" << endl;
        }

        //______________________________________________________________________________________________________________
        // comienza las rutas
        if (elcionDeRuta == 1) // esta es la ruta para actualizar los resulatados
        {
            cout << "lista de estudiantes" << endl; // nueva forma de saltar de linea
            for (int i = 0; i <= Moven; i++)
            {
                cout << students[i] << endl;
            }
            system("pause"); // este metodo es para darle tiempo al usuario para analizar la informacion
        }
        else if (elcionDeRuta == 2)
        {
            cout << "lista de estudiantes" << endl;
            for (int i = 0; i <= Moven; i++)
            {
                cout << students[i] << endl; // este metodo es para darle tiempo al usuario para analizar la informacion
            }
            system("pause");
        }
    }

    return 0;
}
