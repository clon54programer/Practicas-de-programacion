

using System.Collections;

namespace Program
{

    class SubidaDeNotas
    {
        static void Main()
        {
            Hashtable studentsTable = new Hashtable(); // las hash Table

            Grado_11 Student1 = new Grado_11(1, "Guillermo");
            Grado_11 Student2 = new Grado_11(2, "juan");
            Grado_11 Student3 = new Grado_11(3, "david");
            Grado_11 Student4 = new Grado_11(4, "juanjo");
            Grado_11 Student5 = new Grado_11(5, "agustin");

            Console.WriteLine("hello world");
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
