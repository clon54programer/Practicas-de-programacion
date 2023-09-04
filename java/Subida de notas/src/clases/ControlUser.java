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

        if (elecion == "ver" || elecion == "actuañizar") {

        } else {
            iniciar = true;
            System.out.println("escribiste mal una letra");
        }
    }

}
