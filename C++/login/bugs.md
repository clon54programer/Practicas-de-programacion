## **aqui voy a documentar los errores de este programa**

el error que tuve fue que la funcion Requests no me delvolvia el valor que queria hubo dos errores.

1. primero intente colocar un metodo tipo void como hice en java pero no delvolvia el valor como en java(compilaba pero habia error en ejecucion)
2. segundo fue colocar un valor tipo string pero mandame error porque la funcion que detenia el bucle no la tenia para string(no compilaba)

## ¿como resolvi el problema?

fue que le cdoloque que delvolviera un valor tipo bool ya ente momento compilaba el programa pero la funcion Requeste que estab encargada ver si la contraseña etenia mas de 8 carateres no funcina esto era porque llamaba al atributo:
```cpp
bool login::Request(string a, bool maer){
    login reque;
    bool maer;

    if(reque.password.length() >= 8)
    {
        cout<<"tu contraseña cumple las caracteristicas de seguridad recomendadas \n";
        cout<<maer<<"\n";
        maer = true;
    }else{
        cout<<"tu contraseña no cumple los requistos de seguridad \n";
        maer = false;
    }
    reque.config = maer;
    return reque.config;
}
```
pero hay tenia un error era aun no delvovia el error porque no delvolia el parametro para esto declare una varible tipo weon y hice que delvolveria a maer no al objeto.

## codigo final

```cpp
//esta es la clase
class login{
    public:
    string Username;
    string password;
    bool config;

    bool Request(string a,  bool maer);//aqui llama la funcion
};
//este el metodo
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
```
___
```cpp
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
```
## conclusion

que en c++ si se nesecita delvolver una parametro en especifico es que hay que crear una varible del mismo metodo para que guarde su valor despues y tambien que hay que al hacer una funcion o metodo hay que declarala del valor que esperamos, no de otro valor.
