import java.util.Scanner;

import Datos.Datos;
import clases.ControlUser;

public class App {
    public static void main(String[] args) throws Exception {
        // objetsos

        Scanner input = new Scanner(System.in);
        // objetos de clases
        ControlUser User = new ControlUser();
        Datos myObj = new Datos();

        // estudiantes
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
        // notas
        myObj.notas[0] = 1.0;
        myObj.notas[1] = 3.0;
        myObj.notas[2] = 3.7;
        myObj.notas[3] = 4.0;
        myObj.notas[4] = 2.5;
        myObj.notas[5] = 1.0;
        myObj.notas[6] = 0;
        myObj.notas[7] = 0;
        myObj.notas[8] = 0;
        myObj.notas[9] = 0;

        // varibles de interacion
        String accion_del_Usuario;// esta variable guardara la acciones del usuario

        System.out.println(
                "bienvenido profesor\n si quiere ver las notas escriba ver o si quiere actualizar las notas de sus estudiantes escriba actualizar");

        while (true) {
            accion_del_Usuario = input.nextLine();

            User.Accion_del_Usuario(accion_del_Usuario);

            // rutas

            int moven = myObj.estudiantes.length - 1;

            if (accion_del_Usuario.equals(User.ver)) {
                for (int i = 0; i <= moven; i++) {

                }
            } else if (accion_del_Usuario.equals(User.actualizar)) {

            }
        }
    }

}