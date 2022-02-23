//segundo punto del taller numero 11
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
    virtual string getTipo() = 0;

    virtual void print(ostream &out) = 0;
    friend ostream &operator << (ostream &out, Estudiantes *e)
    {
        out << "- Nombre:   " << e->nombre << endl;
        out << "- Promedio: " << e->promedio << endl;
        e->print(out);
        out << endl;
        return out;
    }
};

class EstudiantePregrado: public Estudiantes
{
    string semestre;
public:
    EstudiantePregrado(): Estudiantes()
    {
        string semestre = "";
    }
    EstudiantePregrado(string nombre, float promedio, string semestre): Estudiantes(nombre, promedio)
    {
        this->semestre = semestre;
    }
    string getSemestre()
    {
        return semestre;
    }
    void setSemestre(string semestre)
    {
        this->semestre = semestre;
    }
    string getTipo() override
    {
        return "Pregrado";
    }
    void print(ostream &out) override
    {
        out << "- Semestre: " << semestre <<  "\n- Tipo: Pregrado" ;
    }
    friend ostream &operator << (ostream &out, EstudiantePregrado &e)
    {
        out << "-> ESTA ES LA SOBRE CARGA DE ESTUDIANTE DE PREGRADO";
        return out;
    }
};


class EstudiantePosgrado: public Estudiantes
{
    string grado;
public:
    EstudiantePosgrado(): Estudiantes()
    {
        string grado = "";
    }
    EstudiantePosgrado(string nombre, float promedio, string grado): Estudiantes(nombre, promedio)
    {
        this->grado = grado;
    }
    string getGrado()
    {
        return grado;
    }
    void setSemestre(string grado)
    {
        this->grado= grado;
    }
    string getTipo() override
    {
        return "Posgrado";
    }
    void print(ostream &out)override
    {
        out << "- Grado: " << grado << "\n- Tipo: Posgrado";
    }
    friend ostream &operator << (ostream &out, EstudiantePosgrado &e)
    {
        out << "-> ESTA ES LA SOBRE CARGA DE ESTUDIANTE DE POSGRADO";
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
        out << "\n\tASIGNATURA DE MATEMATICAS\n\nEstudiantes: \n\n";
        for (Estudiantes* e: a.estudiantes)
        {
            out << e << endl;
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
};

int main()
{
    vector<Estudiantes*> salon1 = {};
    vector<Estudiantes*> salon2 = {};
    EstudiantePosgrado* e = new EstudiantePosgrado("carlos", 5.0, "segundo");
    EstudiantePosgrado* e2 = new EstudiantePosgrado("aja", 5.0, "aja");
    EstudiantePosgrado* e3 = new EstudiantePosgrado("rodrigo", 5.0, "tercero");
    EstudiantePregrado* ep1 = new EstudiantePregrado("felipe la mera verga", 4.0, "noveno");
    EstudiantePregrado* ep2 = new EstudiantePregrado("Sebastian Tellez", 5.0, "decimo");
    EstudiantePregrado* ep3 = new EstudiantePregrado("Nestor Suat", 1.0,"segundo");

    salon1.push_back(e);
    salon1.push_back(e2);
    salon1.push_back(e3);
    salon1.push_back(ep1);
    salon1.push_back(ep2);
    salon2.push_back(ep1);
    salon2.push_back(ep2);
    salon2.push_back(ep3);
    Asignatura a = Asignatura(salon1);
    Asignatura a2 = Asignatura(salon2);
    cout << a;
    cout << "-----------------------------------\n";
    cout << a2;

    return 0;
}
