#include <iostream>
#include <string>
using namespace std;

void menu();

class Persona
{
protected:
    string nombre;
    virtual string getTipo() = 0;
    Persona(){
        nombre = "";}
    Persona(string nNombre){
        nombre = nNombre;}
};

class Estudiante:public Persona
{
protected:
    float promedio;
public:
    Estudiante(){
        nombre = "";
        promedio = 0.0;}

    Estudiante(string nNombre, float nPromedio): Persona(nNombre)
    {
        promedio = nPromedio;
    }

    string getTipo(){
        string a = "estudiante";
        return a;}
};

class EstudiantePregrado:public Estudiante
{
private:
    // el semestre va desde el 1 hasta el 10
    int semestre;

public:

    EstudiantePregrado ()
    {
        semestre = 0;
        promedio = 0.0;
        nombre = "";
    }
    EstudiantePregrado(string nNombre, float nPromedio, int nSemestre): Estudiante(nNombre, nPromedio){
        semestre = nSemestre;}

    string getTipo(){
        string a = "estudiante de pregrado";
        return a;}

    friend ostream &operator<<(ostream &output, EstudiantePregrado &e){
        output << e.getTipo();
        output << "\n\nNombre: " << e.nombre;
        output << "\nSemestre: " << e.semestre;
        output << "\nPromedio: " << e.promedio;
        return output;
    }

    friend istream &operator>> (istream &input, EstudiantePregrado &e){
        int t = 0;
        cout << "Cual es su nombre: ";
        getline(input,e.nombre);getline(input,e.nombre);
        while (t < 1 || t > 10){
            cout << "Que semestre esta cursando: ";
            cin >> t;
            e.semestre = t;
        }
        cout << "Promedio acumulado: ";
        input >> e.promedio;
        return input;
    }
};

class EstudiantePosgrado:public Estudiante
{
private:
    string grado; // puede ser especializacion, maestria o doctorado
public:

    EstudiantePosgrado(){
        grado = "";
        nombre = "";
        promedio = 0.0;
    }

    EstudiantePosgrado(string nNombre, float nPromedio, string nGrado): Estudiante(nNombre, nPromedio){
        grado = nGrado;
    }
    //implementacion obligatoria del metodo virtual que se heredo de la clase persona
    string getTipo(){
        string a = "estudiante de posgrado";
        return a;
    }

    friend ostream &operator<<(ostream &output, EstudiantePosgrado &e){
        output << e.getTipo();
        output << "\nNombre: " << e.nombre;
        output << "\nGrado: " << e.grado;
        output << "\nPromedio: " << e.promedio;
        return output;
    }

    friend istream &operator>>(istream &input, EstudiantePosgrado &e){
        string a = "";
        cout << "Cual es su nombre: ";
        getline(input,e.nombre); getline(input,e.nombre);
        while (a != "1" && a != "2" && a!= "3" )
        {
            cout << "Grados de educacion: \n1. Especializacion\n2. Maestria\n3. Doctorado\n\nen cual esta actualmente: ";
            cin >> a;
            if (a == "1"){e.grado = "especializacion";}
            else if (a == "2"){e.grado = "maestria";}
            else if (a == "3"){e.grado = "doctorado";}
        }
        cout << "Promedio acumulado: ";
        input >> e.promedio;
        return input;
    }
};


class Empleado:public Persona
{
protected:
    int salario;
public :
    Empleado(){
        salario = 0.0;}


    Empleado(string nNombre, float nSalario): Persona(nNombre){
        salario = nSalario;
    }
};

class Administrativo:public Empleado
{
private:
    //el administrativo tiene dos estatus, uno como jefe y el otro como no-jefe
    int estatus;
public:

    Administrativo()
    {
        nombre = "";
        salario = 0;
        estatus = 2; // por defecto colocamos no jefe
    }

    Administrativo(string nNombre, float nSalario, int nEstatus): Empleado(nNombre, nSalario){
        estatus = nEstatus;
    }
    string getTipo(){
        string a = "administrativo";
        return a;
    }
    friend ostream &operator<<(ostream &output, Administrativo &a)
    {
        output <<"Administrativo \nNombre: " << a.nombre << "\nSalario: " << a.salario << "\nEstatus: ";
        if (a.estatus == 1){cout << "jefe";}
        else {cout << "no - jefe";}
        return output;
    }

    friend istream &operator>> (istream &input, Administrativo &a)
    {
        cout << "ingrese su nombre: ";
        getline(input,a.nombre);getline(input,a.nombre);
        cout << "ingrese su salario (COP): ";
        input >> a.salario;
        string j = "";
        while (j != "1" && j != "2" ){
            cout << "Estatus: \n1. Jefe\n2. no Jefe\n\ndigite su estatus actual: ";
            cin >> j;
            if (j == "1"){
                a.estatus = 1;}
            else if (j == "2"){
                a.estatus = 2;}
        }
        return input;
    }
};

class Docente:public Empleado
{
private:
    string tipo; //hay 3 tipos de docente, estos son planta, ocasional o catedratico
public:
    Docente(){
        tipo = nombre = "";
        salario = 0;
    }
    Docente(string nNombre, int nSalario, string nTipo){
        tipo = nTipo;
    }

    string getTipo(){
        string a = "Docente";
        return a;
    }

    friend ostream &operator<<(ostream &output, Docente &d)
    {
        output <<"Docente \nNombre: " << d.nombre << "\nSalario: " << d.salario << "\nTipo: " << d.tipo;
        return output;
    }

    friend istream &operator>> (istream &input, Docente &d)
    {
        cout << "Cual es su nombre: ";
        getline(input,d.nombre);
        getline(input,d.nombre);
        cout << "ingrese su salario (COP): ";
        input >> d.salario;
        string j = "";
        while (j != "1" && j != "2" && j != "3" )
        {
            cout << "tipos de contrato: \n1. Planta\n2. Ocasional\n3. Catedraticos\n\ncual es su contrato actualmente: ";
            cin >> j;
            if (j == "1"){
                d.tipo = "planta";
            }
            if (j == "3"){
                d.tipo = "catedratico";
            }
            if (j == "2"){
                d.tipo = "ocasional";
            }
        }

        return input;
    }
};

//evidencie un programa que use todas las clases anteriores
int main()
{
    Administrativo adm;
    Docente doc;
    EstudiantePosgrado est_pos;
    EstudiantePregrado est_pre;

    system("color f0");
    int bandera = 0;
    string aux = "";
    while ( aux != "0"){
    system ("cls");
    cout << "###################################" << endl;
    cout << "###    INFORMACION  PERSONAL    ###" << endl;
    cout << "###################################" << endl;
    cout << "\n\nMenu:\n\n1. registrar mis datos personales" << endl;
    cout << "2. ver mi datos" << endl << endl;
    cout << "0. SALIR\n\n-Que desea realizar: ";
    cin >> aux;
    if (aux == "1"){
        string dedicacion = "";
        while (dedicacion != "1" && dedicacion != "2" && dedicacion!= "0"){
        cout << "a que se dedica: \n1. Estudiar\n2. Trabajar\n\n0. SALIR\n\nelige una opcion: ";
        cin >> dedicacion;
                string au = "";
        if (dedicacion == "1"){
                cout << "Que esta cursando: \n1. Pregrado\n2. Posgrado\n-Elige una opcion: ";
                cin >> au;
                if (au == "1"){
                    system("cls");
                    cin >> est_pre;
                    bandera = 1;
                }
                else if (au == "2"){
                    system("cls");
                    cin >> est_pos;
                    bandera = 2;

                }}



        else if (dedicacion == "2"){
                cout << "Que tipo de trabajo tiene: \n1. Administrativo\n2. Docente\n-Elige una opcion: ";
                cin >> au;
                if (au == "1"){
                    system("cls");
                    cin >> adm;
                    bandera = 3;
                }
                else if (au == "2"){
                    system("cls");
                    cin >> doc;
                    bandera = 4;

                }}



        else if (dedicacion == "0"){
            exit(1);
        }
        }}

    else if (aux == "2"){
            system("cls");
            if (bandera == 1){
                cout << est_pre << endl;
            }
            else if(bandera == 2){
                cout << est_pos << endl;
            }
            else if (bandera == 3){
                cout << adm << endl;
            }
            else if (bandera == 4){
                cout << doc << endl;
            }
            else if (bandera == 0){
                cout << "\nno se encuentra nadie registrado" << endl;
            }


    }
    else if (aux == "0"){
        exit(1);
    }
    system("pause");}
    return 0;
}
