public class login {
    String UserName;// el nombre de l usuario
    String password;// la contraseña
    boolean confi;

    // contructor
    public login(String Name, String passwpString) {
        UserName = Name;
        password = passwpString;
    }

    /**
     * @param password es la contraseña
     */
    public void PasswordSecurity() {
        if (password.length() >= 8) {
            System.out.println("su contraseña cumple los requisitos del seguridad");
            confi = true;
        } else {
            System.out.println("su contraseña no cumple lso requisitos de seguridad");
            confi = false;

        }
    }

}
