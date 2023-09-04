

using System.Collections;

namespace Program
{

    class SubidaDeNotas
    {
        void Opciones(int opcion)
        {

        }
        static void Main()
        {
            /// inicializmaos la hashTtableS
            Hashtable studentsTable = new Hashtable(); // las hash Table

            Grado_11 Student1 = new Grado_11(1, "Guillermo");
            Grado_11 Student2 = new Grado_11(2, "juan");
            Grado_11 Student3 = new Grado_11(3, "david");
            Grado_11 Student4 = new Grado_11(4, "juanjo");
            Grado_11 Student5 = new Grado_11(5, "agustin");

            //delcamramos la tabla con sus claves y valores
            studentsTable.Add(Student1.ID, Student1);
            studentsTable.Add(Student2.ID, Student2);
            studentsTable.Add(Student3.ID, Student3);
            studentsTable.Add(Student4.ID, Student4);
            studentsTable.Add(Student5.ID, Student5);

            /// este codigo sirve para buscar a un estudiante en especifico
            ///Grado_11 storeStudents1 = (Grado_11)studentsTable[Student1.ID];


            Console.WriteLine("ingrese unas de las siguientes opciones\n" + "1. si quiere buscar a un estudiante es especifico\n" + "2.si quieres observar a todo los estudiantes\n" + "3.si quieres editar la nota de algun estudiante");



        }
    }

    class Grado_11
    {
        public int ID { get; set; }

        public string Name { get; set; }

        public Grado_11(int id, string name)
        {
            this.ID = id;
            this.Name = name;

        }
    }
}
