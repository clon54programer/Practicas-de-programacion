#include <iostream>

using namespace std;

class login{
     public:
      string UserName;
      string password;
    bool Verificacion(string a, bool b);
};

bool login::Verificacion(string a, bool b)
{
    if (a.length() >= 8)
    {
        cout<<"su contraseña cumple con los requisitos de seguridad \n";
        b = true;
    }else{
        cout<<"su contraseña no cumple los requistos de seguridad \n";
        b = false;
    }
    return b;
}

int main(int argc, char const *argv[])
{
    login myObj;
    bool verificacion;
    bool entrada = true;
    
    while (entrada)
    {
        cout<<"por favor deme su usuario"<<"\n";
    cin>>myObj.UserName;

    cout<<"deme su contraseña\n";
    cin>>myObj.password;

    //verificacion de contraseña
    verificacion = myObj.Verificacion(myObj.password, false);

            if (verificacion == false)
            {
                continue;
            }else{
                break;
            }
    }
        cout<<"enhorabuena ya iniciaste seccion \n";
    return 0;
}