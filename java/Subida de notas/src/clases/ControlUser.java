package clases;

public class ControlUser {

    final private String ver = "ver";
    final private String actualizar = "actualizar";

    /**
     * @param elecion es la ruta a seguri del programa
     */
    void Accion_del_Usuario(String elecion) {

        elecion.toLowerCase();
        if (elecion != ver || elecion != actualizar) {
            System.out.println("escribiste mal una letra");
            System.exit(-1);
        }

    }
}
