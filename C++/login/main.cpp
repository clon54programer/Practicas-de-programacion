#include <iostream>

using namespace std;

class login{
    public:
    string Username;
    string password;
    bool config;
     void Request();//aqui llama la funcion
};

void login::Request(){
    login respuest;

    if (respuest.password.length() >= 8)
    {
        cout<<"tu contraseña cumple las caracteristicas de seguridad recomendadas \n";
        respuest.config = true;
    }else{
        cout<<"tu contraseña no cumple los requistos de seguridad";
        respuest.config = false;
    }
    

}

int main(int argc, char const *argv[])
{
    login myObj;
    //como hacer un logn en c++
    cout<<"deme su usuario y contraseña \n";
    cout<<"deme primero su usuario"<<"\n";
    cin>>myObj.Username;

    cout<<"deme su contraseña \n";
    cin>>myObj.password;

    //la verificacion

    return 0;
}
