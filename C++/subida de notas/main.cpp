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
    cin >> interacion;

    if (interacion == "acepto")
    {
        accept = true;
    }
    else
    {
        accept = false;
    }

    while (accept)
    {
        /* code */
    }

    return 0;
}
