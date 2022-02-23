#include <iostream>
#include <sstream>
using namespace std;

class Fecha{
private:
    int dia, mes, anio;
public:
    Fecha(){
    dia = mes = anio = 0;}
    Fecha(int dia, int mes, int anio)
    {
        this->dia = dia;
        this->mes = mes;
        this->anio = anio;
    }
    int getDia(){
    return dia;}
    int getMes(){
    return mes;}
    int getAnio(){
    return anio;}
    void setDia(int dia){
    this->dia = dia;}
    void setMes(int mes){
    this->mes = mes;}
    void setAnio(int anio){
    this->anio = anio;}
    string toString (){
    return to_string(this->dia) + "/" + to_string(this->mes) + "/" + to_string(this->anio);}

};

class Persona{
    private:
    string nombre, apellido;
    int edad;
    //creamos una tipo de dato tipo fecha, que es el que le vamos a pasar al constructor
    Fecha* p;
    public:
    Persona(){
        nombre = apellido = "";
        edad = 0;
    }
    //por medio del constructor le pasamos los parametros de p, estos ya tienen que estar creados, o tienen que estar llenos
    Persona(string nombre, string apellido, int edad, Fecha* p){
        this->nombre = nombre;
        this->apellido = apellido;
        this->edad = edad;
        this->p = p;
    }

    string getNombre(){
        return this->nombre;
    }
    string getApellido(){
        return this->apellido;
    }
    int getEdad(){
        return this->edad;
    }

    void setNombre(string nombre){
        this->nombre = nombre;
    }
    void setApellido(string apellido){
        this->apellido = apellido;
    }
    void setEdad(int edad){
        this->edad = edad;
    }
    //esta funcion me permite mostrar todos los datos de Persona
    string toString (){
        ostringstream s;
        string a ;
        s << "FECHA: " << p->toString() << endl;
        s << "nombre------: " << nombre << endl;
        s << "apellido----: " << apellido<< endl;
        s << "edad--------: " << edad<< endl;
        a = s.str();
        return a;
    }
    //por medio de la funcion amiga simplemente llamamos al toString
    friend ostream &operator <<(ostream &salida, Persona &pp){
        salida << pp.toString();
        return salida;
    }
};
class CONTENEDOR{
    private:

        //vamos a crear un vector con 10 posiciones y en cada posicion vamos a guardar un entero
        // int Vector[10];

        // pero como vamos a crear un vector en donde se van a guardar objetos vamos a poner el nombre de la clase del objeto
        // en vez de poner tipo string o cosas asi
        Persona vector[10];
        int cantidad, tamanio  ;

    public:
    CONTENEDOR(){
        cantidad = 0;
        tamanio = 10;}

        string toString(){
            ostringstream s;
            for (int a = 0; a < cantidad; a++){
                s << vector[a].toString() << endl;
            }
            string a;
            a = s.str();
            return a;
        }

    // metodo encargado de ingresar a las personas al vector, tipo void puesto que no nos retorna nada
    // este metodo nos recibe datos o un objeto, por eso se le pasa Persona como parametro
    void ingresarPersonas(Persona p){

        // lo primero es confirmar que el vector si tiene espacio para poder seguir añadiendo a mas personas
        if (cantidad < tamanio){
            vector [cantidad++] = p;
        }
        else {
            cout << "fallo el ingreso de datos al vector\nerror: no hay espacio";
        }}


};
int main (){
    system("cls");
    Fecha f1 = Fecha(20,02,2022);
    //tenemos del tipo agragegacion, puesto que a la persona le estamos agregando una fecha
    //en este caso solo tiene una fecha, y para leerla seria, la persona tiene una fecha, pero puede tener varios objetos de este tipo
    //los ciclos de vida son diferentes de cada clase, solamente se relacion de que la persona tiene una fecha

    //
    Persona p1 = Persona ("briam" ,"roldan" , 18 , &f1);

    cout << p1.toString();



    return 0;
}
