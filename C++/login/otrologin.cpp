#include <iostream>
#include <fstream>

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

    ofstream Datos("private.txt");
    Datos << "nombre del usuario es" << name << "\n contraseña del usuario es " << Userpassword;
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

    //
    setlocale(LC_ALL, "es-ES.UTF-8");
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
            ofstream mydata("data.txt"); // aqui creamos el archivo de informacion

            mydata << "nombre del usuario es " << name << "\n contraseña del usuario es " << password; // agregamos informacion el archivo creado
            mydata.close();                                                                            // cerramso el archivo
            break;
        }
    }
    cout << "enhorabuena ya te registraste \n";
    return 0;
}