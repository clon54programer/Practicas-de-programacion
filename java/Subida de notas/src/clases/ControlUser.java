package clases;

public class ControlUser {

    final private String ver = "ver";
    final private String actualizar = "actualizar";

    public boolean iniciar;

    /**
     * este metodo verifica que el usuario alla escrito bien las rutas
     * 
     * @param elecion esta variable es la que recibe la funcion
     */
    void Accion_del_Usuario(String elecion) {

        elecion.toLowerCase();
        if (elecion != ver || elecion != actualizar) {
            System.out.println("escribiste mal una letra");
            System.exit(-1);
        } else {
            iniciar = true;
        }

    }
}
