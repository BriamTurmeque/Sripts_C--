//primer punto del taller numero 11
//codigo desarrollado por
// ---- Briam Turmeque
// ---- Sebastian Tellez

#include <iostream>
#include "vector"
#include "string"

using namespace std;

class Estudiantes
{
    string nombre;
    float promedio;
public:
    Estudiantes()
    {
        promedio = 0.0;
        nombre = "";
    }

    Estudiantes(string nombre, float promedio)
    {
        this->nombre = nombre;
        this->promedio = promedio;
    }
    string getNombre()
    {
        return nombre;
    }
    float getPromedio()
    {
        return promedio;
    }

    void setNombre(string nombre)
    {
        this->nombre = nombre;
    }
    void setPromedio(float promedio)
    {
        this->promedio = promedio;
    }

    string print(ostream &out)
    {
        //falta implementar esta funcion
        //no le encontre una utilidad a esta funcion
        return "";
    };
    friend ostream &operator << (ostream &out, Estudiantes *e)
    {
        out << "\n- Nombre:   " << e->nombre << endl;
        out << "- Promedio: " << e->promedio << endl;
        return out;
    }
};

class Asignatura
{
    int cantEst;
    vector <Estudiantes*> estudiantes;
public:
    Asignatura()
    {
        cantEst = 0;
        estudiantes = {};
    }
    Asignatura(vector <Estudiantes*> estudiantes)
    {
        Asignatura::estudiantes = estudiantes;
        cantEst = estudiantes.size();
    }

    int getCantEst()
    {
        return cantEst;
    }
    void setCantEst(int cantEst)
    {
        Asignatura::cantEst = cantEst;
    }
    vector<Estudiantes*> getEstudiantes()
    {
        return estudiantes;
    }
    void setEstudiantes(vector<Estudiantes*> estudiantes)
    {
        Asignatura::estudiantes = estudiantes;
    }

    friend ostream &operator << ( ostream &out, Asignatura a)
    {
        out << "\n\tASIGNATURA\n\nCantidad de estudiantes: " << a.getCantEst() << "\nEstudiantes: \n";
        for (Estudiantes* e: a.estudiantes)
        {
            out << e;
        }
        return out;
    }
    void agregarEstudiante(Estudiantes* estudiante)
    {
        estudiantes.push_back(estudiante);
    }
    void eliminarEstudiante()
    {
        estudiantes.pop_back();
    }
    string print ()
    {
        return "";
    }
};

int main()
{
    Estudiantes* e = new Estudiantes("sebastian Tellez", 5.0 );
    Estudiantes* e2 = new Estudiantes("Paimon ", 4.0 );
    Estudiantes* e3 = new Estudiantes("Diego Rodriguez 3", 2.0 );
    Estudiantes* e4 = new Estudiantes("Daniel Vargas", 1.0 );
    Estudiantes* e5 = new Estudiantes("Eduardo Perez", 0.0 );

    vector <Estudiantes*> salon1 = {};
    salon1.push_back(e);
    salon1.push_back(e2);
    salon1.push_back(e3);
    salon1.push_back(e4);
    salon1.push_back(e5);
    Asignatura a = Asignatura(salon1);
    cout << a;
    vector <Estudiantes*> salon2 = {};
    salon2.push_back(e2);
    salon2.push_back(e5);
    salon2.push_back(e);
    Asignatura a2(salon2);
    cout << a2;
    return 0;
}
