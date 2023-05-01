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
        }
        else
        {
            throw(interacion); // manda error
            accept = false;
        }
    }
    catch (string correct) // esta parte del codigo le dice al usuario cual fue el error que cometio.
    {
        cout << "Error Grave, escribiuo mal acepto\n por favor escribalo con minusculas toda la palabra\n";
    }

    while (accept)
    {
        cout << "entre";
    }

    return 0;
}
