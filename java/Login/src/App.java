import java.util.Scanner;

public class App {

    public static class Login {
        String UserName;// el nombre de l usuario
        String Password;// la contraseña
        boolean confi;

        // contructor
        public void Datos(String Name, String passwpString) {
            UserName = Name;
            Password = passwpString;
        }

        /**
         * @param muestra los datos del usuario
         */
        public void PrintData() {
            System.out.println("name:" + UserName + "\n password:" + Password);
        }

        /**
         * @param password es la contraseña
         */
        public void PasswordSecurity() {
            if (Password.length() >= 8) {
                System.out.println("su contraseña cumple los requisitos del seguridad");
                confi = true;
            } else {
                System.out.println("su contraseña no cumple lso requisitos de seguridad");
                confi = false;

            }
        }

    }

    /**
     * @param args
     */
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

        final Login myObj = new Login();

        myObj.Datos(userName, password);

        myObj.PrintData();

        myObj.PasswordSecurity();

        boolean inicialodor_del_bucle = myObj.confi;// recibira el valor de confi

        while (inicialodor_del_bucle) {
            System.out.println("EnHorabuena sea logiando correctamente");
            break;
        }

        if (inicialodor_del_bucle == false) {
            System.out.println("hubo un error es el logueo siga por favor las excepciones");
        }

    }
}
