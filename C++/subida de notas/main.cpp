#include <iostream>
#include <fstream>

using namespace std;

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

    while (accept)
    {
        cout << "usted que va a hacer va actualizar una nota o va ver notas" << endl;
        cout << "si va a actualizar notas coloque actu o si va a ver notas coloque wacth" << endl;
        try
        {
            cin >> rutas;
            if (rutas == "actu")
            {
                cout << "seleciono actualizar notas" << endl;
            }
            else if (rutas == "watch")
            {
                cout << "seleciono ver notas" << endl;
            }
            else
            {
                throw(rutas);
            }
        }
        catch (string correct)
        {
            cout << "ERROR GRAVE, no escribio bien wacth o actu\n por favor escribalos bien y en minusculas";
        }
    }

    return 0;
}
