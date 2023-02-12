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
    login reque;
    if(reque.password.length() >= 8)
    {
        cout<<"tu contraseña cumple las caracteristicas de seguridad recomendadas \n";
        config = true;
    }else{
        cout<<"tu contraseña no cumple los requistos de seguridad \n";
        config = false;
    }
}

int main(int argc, char const *argv[])
{
    login myObj;
    //como hacer un logn en c++
    bool master = true;

    while (master)
    {
    cout<<"deme su usuario y contraseña \n";
    cout<<"deme primero su usuario"<<"\n";
    cin>>myObj.Username;

    cout<<"deme su contraseña \n";
    cin>>myObj.password;

    //la verificacion
    cout<<myObj.config;
    myObj.Request();
    
        if (myObj.config == true)
        {
            cout<<"se alogiado correctamente \n";
            abort;//para romper el bucle
        }
        
    }
    return 0;
}
