using System.Collections;
using Grado11;

namespace Program
{

    class SubidaDeNotas
    {
        /// inicializmaos la hashTtableS
        static Hashtable studentsTable = new Hashtable(); // las hash Table
        static Grado_11 Student1 = new Grado_11(1, "Guillermo");
        static Grado_11 Student2 = new Grado_11(2, "juan");
        static Grado_11 Student3 = new Grado_11(3, "david");
        static Grado_11 Student4 = new Grado_11(4, "juanjo");
        static Grado_11 Student5 = new Grado_11(5, "agustin");


        static void Main()
        {
            inicio();


            /// este codigo sirve para buscar a un estudiante en especifico
            Grado_11 storeStudents1 = (Grado_11)studentsTable[Student1.ID];


            Console.WriteLine("ingrese unas de las siguientes opciones\n" + "1. si quiere buscar a un estudiante es especifico\n" + "2.si quieres observar a todo los estudiantes\n" + "3.si quieres editar la nota de algun estudiante");
            int input = Convert.ToInt32(Console.ReadLine());

            Opciones(input);


        }
        /// <summary>
        ///  este metodo se encargara de buscar todo en la clase principal
        /// </summary>
        static void inicio()
        {
            //declaramos la tabla con sus claves y valores
            studentsTable.Add(Student1.ID, Student1);
            studentsTable.Add(Student2.ID, Student2);
            studentsTable.Add(Student3.ID, Student3);
            studentsTable.Add(Student4.ID, Student4);
            studentsTable.Add(Student5.ID, Student5);
        }

        static void Opciones(int opcion)
        {
            switch (opcion)
            {
                case 1:
                    Console.WriteLine("ingrese el ID del estudinate");
                    int id_student = Convert.ToInt32(Console.ReadLine());
                    Search_Stundents(id_student);
                    break;
                case 2:
                    Show_Stundents();
                    break;
                case 3:
                    break;
            }
        }


        static void Search_Stundents(int id)
        {
            Grado_11 storeStudents1 = (Grado_11)studentsTable[id];
            Console.WriteLine("nombre: " + storeStudents1.Name);
        }

        static void Show_Stundents()
        {
            ;
            /*foreach (Dictionary < i >  in storeStudents1)
            {
                Grado_11 storeStudents1 = (Grado_11)studentsTable[i]
                Console.WriteLine("nombre: " + storeStudents1.Name);
            }*/
        }
    }
}
