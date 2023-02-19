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
        myObj.estudiantes[5] = "maria";
        myObj.estudiantes[6] = "gilma";
        myObj.estudiantes[7] = "weon";
        myObj.estudiantes[8] = "diego";
        myObj.estudiantes[9] = "dayana";
        //notas
        myObj.notas[0] = 1.0;
        myObj.notas[1] = 3.0;
        myObj.notas[2] = 3.7;
        myObj.notas[3] = 4.0;
        myObj.notas[4] = 2.5;
        myObj.notas[5] = 1.0;
        myObj.notas[6]= 0;
        myObj.notas[7] = 0;
        myObj.notas[8] = 0;
        myObj.notas[9] = 0;

        //varibles de interacion

        int arrayCurrentIndex;
        int arrayCurrentIndex2;//esta haci para ver el numero de espacios posibles

        System.out.println("bienvenido profesosr");

        while(true){
            System.out.println("Que va a hacer va agregar una nota o va a ver las notas. \n si va a regitras coloque 1 sino es coloque 2");

            int ruta = input.nextInt();
            
            if (ruta == 1) {
                System.out.println("este el numero del los estudinates");
                for(int a = 0; a <=myObj.notas.length;a++){
                    System.out.println("estudiante "+myObj.estudiantes[a]+"\t el numero que ocupa es el "+a);
                }
                System.out.println("cual es el estudiante que quiere cambiar la nota\n coloque el numero que ocupa");

                


            } else {
                for(int i = 0;i<=myObj.estudiantes.length;i++){
                    System.out.println("estudiante \t"+myObj.estudiantes[i]+"\t su nota  es \t "+myObj.notas[i]);
                }
            }
        }
        
    }
}
