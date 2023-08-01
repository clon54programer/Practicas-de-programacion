package clases;

public class ControlUser {

    final public String ver = "ver";
    final public String actualizar = "actualizar";

    public boolean iniciar = true;

    /**
     * este metodo verifica que el usuario alla escrito bien las rutas
     * 
     * @param elecion esta variable es la que recibe la funcion
     */
    public void Accion_del_Usuario(String elecion) {

        elecion.toLowerCase();
        if (elecion != ver || elecion != actualizar) {
            System.out.println("escribiste mal una letra");
            System.exit(-1);
        } else {
            iniciar = true;
        }
    }

}
