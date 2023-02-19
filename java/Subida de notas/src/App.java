import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Datos myObj = new Datos();
        Scanner input = new Scanner(System.in);
        //estudiantes
        myObj.estudiantes[0] = "Guillermo";
        myObj.estudiantes[1] = "juan";
        myObj.estudiantes[2] = "david";
        myObj.estudiantes[3] = "juanjo";
        myObj.estudiantes[4] = "agustin";
        //notas
        myObj.notas[0] = 1.0;
        myObj.notas[1] = 3.0;
        myObj.notas[2] = 3.7;
        myObj.notas[3] = 4.0;
        myObj.notas[4] = 2.5;

        //varibles de interacion

        int arrayCurrentIndex = myObj.estudiantes.length;
        int arrayCurrentIndex2 = myObj.notas.length;//esta haci para ver el numero de espacios posibles

        System.out.println("bienvenido profesosr");

        while(true){
            System.out.println("Que va a hacer va regitras mas estudiantes o va a ver las notas");
            
            if (condition) {
                
            } else {
                
            }
        }
        
    }
}
