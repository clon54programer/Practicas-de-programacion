#include <iostream>

using namespace std;

class login{
    public:
    string Username;
    string password;
    bool config;

    bool Request(string a,  bool maer);//aqui llama la funcion
};

bool login::Request(string a, bool maer){
    login reque;
    
    if(a.length() >= 8)
    {
        cout<<"tu contraseña cumple las caracteristicas de seguridad recomendadas \n";
        cout<<maer<<"\n";
        maer = true;
    }else{
        cout<<"tu contraseña no cumple los requistos de seguridad \n";
        maer = false;
    }

    return maer;
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
    

    bool weon = myObj.Request(myObj.password, true);
    
        if (weon == true)
        {
            cout<<"se alogiado correctamente \n";
            break;//para romper el bucle
        }
        
    }
    return 0;
}
