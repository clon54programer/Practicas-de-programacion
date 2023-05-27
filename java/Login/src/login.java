public class login {
    String UserName;// el nombre de l usuario
    String Password;// la contraseña
    boolean confi;

    // contructor
    public login(String Name, String passwpString) {
        UserName = Name;
        Password = passwpString;
    }

    public void PrintData() {
        System.out.println("name:" + UserName + " password:" + Password);
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
