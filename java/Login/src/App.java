import java.util.Scanner;

//import javax.swing.JOptionPane;

public class App {

    public static class Login {
        private String UserName;// el nombre de l usuario
        private String Password;// la contraseña
        boolean confi;
        boolean Inicio_De_Sesion;// este sera el que detendra el bucle

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

        /**
         * esta funcion es para dar el inicio de secion al usarioa
         * 
         * @param name
         * @param password
         */
        public void Inicio_De_Sesion(String name, String password) {
            if (name.equals(UserName))
                if (password.equals(Password)) {
                    System.out.println("bueno a iniciando secion");
                    Inicio_De_Sesion = true;
                } else {
                    System.out.println("su usaurio o contarseña no coinciden con los de bases de datos");
                    Inicio_De_Sesion = false;
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
        String userNameString;// esta variable sera del nombre
        String userPasswordString2;// esta varible sera de la contraseña

        while (inicialodor_del_bucle) {
            System.out.println("EnHorabuena sea logiando correctamente");
            for (int i = 0; i <= 3; i++) {
                // String texto = JOptionPane.showInputDialog("escriba su usuario");
                // userPasswordString2 = JOptionPane.showInputDialog("escriba su contraseña");

                System.out.println("ingrese su nombre de usuario");
                userNameString = Input.nextLine();
                System.out.println("ingrese su contraseña");
                userPasswordString2 = Input.nextLine();

                myObj.Inicio_De_Sesion(userNameString, userPasswordString2);

                if (myObj.Inicio_De_Sesion == true) {
                    System.exit(0);
                }

                if (i == 3) {
                    System.out.println("usantes tus 3 intentos ");
                    System.exit(-1);
                }

            }
        }

        if (inicialodor_del_bucle == false) {
            System.out.println("hubo un error es el logueo siga por favor las excepciones");
        }

    }

}

/**
 * // if para comprabar que los datos singresado sean iguales a la de la clase
 * if (userNameString.equals(userName))
 * if (userPasswordString2.equals(password)) {
 * System.out.println("bueno a iniciando secion");
 * break;
 * } else {
 * System.out.println("su usaurio o contarseña no coinciden con los de bases de
 * datos");
 * }
 */
