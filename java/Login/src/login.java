public class login {
    String UserName ;
    String password;
    boolean confi;
    
    public void ShowUsername() {
        System.out.println(UserName);
    }
    public void Showpassword() {
        System.out.println(UserName);
    }

    public void  PasswordSecurity(){
        if(password.length() >= 8){
            System.out.println("su contraseña cumple los requisitos del seguridad");
            confi = true;
        }else{
            System.out.println("su contraseña no cumple lso requisitos de seguridad");
            confi = false;

        }
    }

}
