#include <iostream>

using namespace std;

class login
{
private:
    string UserName;
    string password;

public:
    bool Verificacion(string a, bool b);
    login(string name, string Userpassword);
};

login::login(string name, string Userpassword)
{
    UserName = name;
    password = Userpassword;
}
bool login::Verificacion(string a, bool b)
{
    if (a.length() >= 8)
    {
        cout << "su contraseña cumple con los requisitos de seguridad \n";
        b = true;
    }
    else
    {
        cout << "su contraseña no cumple los requistos de seguridad \n";
        b = false;
    }
    return b;
}

int main(int argc, char const *argv[])
{

    bool verificacion;
    bool entrada = true;

    // varibles
    string name;
    string password;

    while (entrada)
    {
        cout << "por favor deme su usuario"
             << "\n";
        cin >> name;

        cout << "deme su contraseña\n";
        cin >> password;

        login User(name, password);
        // verificacion de contraseña
        verificacion = User.Verificacion(password, true);

        if (verificacion == false)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    cout << "enhorabuena ya iniciaste seccion \n";
    return 0;
}