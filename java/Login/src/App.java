import java.util.Scanner;

public class App {
    public static void main(String[] args) {

        Scanner Input = new Scanner(System.in);
        // varibles
        String name;// recibira el nombre del usuario
        String Contrasena;// recibira la contraseña de el usuario

        System.out.println("bienvenido usuario\n por favor ingrese usario y contraseña");
        System.out.println("ingrese su nombre de usuario");
        name = Input.nextLine();
        System.out.println("ingrese su contraseña");
        Contrasena = Input.nextLine();

        // constantes
        String userName = name;
        String password = Contrasena;

        login myObj = new login();

        myObj.Login(userName, password);

        myObj.PrintData();

    }
}
