import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        //voy a crear un login
        
        login mLogin = new login();
        Scanner input = new Scanner(System.in);
        boolean confirmacion = true;

        while(confirmacion){

            System.out.println("deme su Username y su contraseña");
            System.out.println("primero su Usuario");
            mLogin.UserName = input.nextLine();
            System.out.println(mLogin.UserName);

            System.out.println("deme su contraseña");
            mLogin.password = input.nextLine();
            System.out.println(mLogin.password);
            //para ver si la logiado fue existosa
            
            //esto es para ver si relleno los campos
            /*if(mLogin.UserName != null && mLogin.password != null){
                System.out.println("falta un dato o dos de rellenar");
                continue;
            }*/
                System.out.println("Gracias por dar los datos \n  Espere ver si cumplen los requisitos de seguridad \n");
                
            

            mLogin.PasswordSecurity();
            if(mLogin.confi == true){
                System.out.println("se alogiado correctamente");
                break;
            }

        }


    }
    public void Request(){
        login request = new login();
        if(request.password.length() >= 8){
            System.out.println("su contraseña cumple los requisitos del seguridad");
            request.confi = true;
        }else{
            System.out.println("su contraseña no cumple lso requisitos de seguridad");
            request.confi = false;
        }
    }
}
