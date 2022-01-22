#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <ctime>

using namespace std;
void menu();
void menuClientes();
void menuEmpleados();
void titulo();
void mostrarClientes(string, string);
void mostrarEmpleados(string, string);
string tipoDocumento();
string tipoSuscripcion();
float calcularSalario(string, int, int, int, int, int);
string tipoContrato();
void obtenerFecha();

void obtenerFecha()
{
    string fecha;
    int dia, mes, anio;
    time_t t = time(NULL);
    struct tm today = *localtime( &t);
    mes = today.tm_mon + 1;
    dia = today.tm_mday;
    anio = (today.tm_year + 1900);
    cout << dia << "/0" << mes << "/" << anio;
}

string tipoDocumento()
{
    string aux = "",aux2;
    while (aux != "1" && aux != "2" && aux != "3" )
    {
        cout << "\n1. Tarjeta de identidad\n2. Cedula de ciudadania\n3. Cedula Extranjera\n";
        cout << "\nCual es su tipo de documento: ";
        cin >> aux;
    }
    if (aux == "1")
    {
        aux2 = "Tarjeta de identidad";
    }
    else if (aux == "2")
    {
        aux2 = "Cedula de ciudadania";
    }
    else
    {
        aux2 = "Cedula de extranjeria";
    }
    return aux2;
}

string tipoSuscripcion()
{
    string a = "",aux = "";
    while (a != "1" && a != "2" && a != "3" )
    {
        cout << "Tipo de suscripcion:\n1.Empresarial\n2.Grupo\n3.Personal\nCual es su tipo de suscripcion: ";
        cin >> a;
    }
    if (a == "1")
    {
        aux = "Empresarial";
    }
    else if ( a == "2")
    {
        aux = "Grupo";
    }
    else
    {
        aux = "Personal";
    }
    return aux;
}

string tipoContrato()
{
    string a = "0", aux;
    while (a != "1" && a != "2")
    {
        cout << "tipos de contrato:\n1.Tiempo Completo\n2.Tiempo Parcial\nCual es su tipo de contrato: ";
        cin >> a;
    }
    if (a == "1")
    {
        aux = "Tiempo Completo";
    }
    else
    {
        aux = "Tiempo Parcial";
    }
    return aux;
}
//funcion para calcular salario, sus parametros de entrada son:
//string int int int int int
float calcularSalario(string tipo_contrato, int horas_trabajadas, int extra_d, int extra_n, int extra_dom_d, int extra_dom_n)
{

    float hora,sueldo, sueldoNeto,extraD,extraN,extraDomD,extraDomN;
    if (tipo_contrato == "Tiempo Completo")
    {
        sueldo = 1000000.0;
        hora = 4166.66;
    }
    else
    {
        sueldo = 500000.0;
        hora = 2083.33;
    }

    sueldoNeto = sueldo;
    extraD = ((extra_d * hora) * 1.25);
    extraN = ((extra_n * hora) * 1.75);
    extraDomD = ((extra_dom_d * hora) * 2);
    extraDomN = ((extra_dom_n * hora) * 2.5);
    sueldo = sueldoNeto + extraD + extraN + extraDomD + extraDomN;
    return sueldo;

}

class Persona
{
protected:
    // variables privadas que se pueden acceder solo desde esta clase
    string documento, nombre, apellido, celular;
    string tipo_identificacion;

public:
    // constructor vacio
    Persona()
    {
        nombre = apellido = documento = celular = tipo_identificacion = "";
    }
    // contructor con datos
    Persona(string _nombre, string _apellido, string _tipo_identificacion, string _documento, string _celular)
    {
        nombre = _nombre;
        apellido = _apellido;
        documento = _documento;
        tipo_identificacion = _tipo_identificacion;
        celular = _celular;
    }
    // creacion de los getters y los setters de los datos de esta clase
    string getNombre()
    {
        return nombre;
    }

    string getApellido()
    {
        return apellido;
    }

    string getDocumento()
    {
        return documento;
    }

    string GetTipo_identificacion()
    {
        return tipo_identificacion;
    }

    string getCelular()
    {
        return celular;
    }

    void setCelular(string newCelular)
    {
        celular = newCelular;
    }

    void setNombre(string newNombre)
    {
        nombre = newNombre;
    }

    void setApellido(string newApellido)
    {
        apellido = newApellido;
    }

    void setDocumento(string newDocumento)
    {
        documento = newDocumento;
    }

    void setTipo_identificacion(string newTipo_identificacion)
    {
        tipo_identificacion = newTipo_identificacion;
    }

    friend ostream &operator<<(ostream &output, const Persona &f)
    {
        output << "su nombre es " << f.nombre << " " << f.apellido << " y su documento es " << f.documento;
        return output;
    }

    friend istream &operator>>(istream &input, Persona &f)
    {
        cout << "cual es su nombre: ";
        input >> f.nombre;
        cout << "cual es su apellido: ";
        input >> f.apellido;
        cout << "cual es su numero de documento: ";
        input >> f.documento;
        cout << "cual es su tipo de identificacion: ";
        cin >> f.tipo_identificacion;
        cout << "cual es su numero de telefono: ";
        input >> f.celular;
        return input;
    }
};

// creacion de la clase Cliente, que va a heredar de la clase Persona
// heradará los datos de la misma manera que la clase padre, esto lo obtenemos por el public
class Cliente : public Persona
{
private:
    // variables en donde vamos a guardar los datos
    string direccion, tipo_suscripcion; // la suscripcion puede ser empresarial, Grupo, Personal
    int descuento;                      // el descuento puede variar segun el cliente
    float sala;

public:
    // constructor vacio
    Cliente()
    {
        nombre = apellido = documento = celular = direccion = tipo_suscripcion = "";
        tipo_identificacion = descuento = 0;
    }
    // contructor con datos
    // nombre   apellido    tipo_documento   documento   direccion   tipo_suscripcion   descuento
    Cliente(string _nombre, string _apellido, int _tipo_identificacion, string _documento, string _direccion,string _celular, string _tipo_suscripcion, int _descuento)
    {
        direccion = _direccion;
        tipo_suscripcion = _tipo_suscripcion;
        descuento = _descuento;
        nombre = _nombre;
        celular = _celular;
        apellido = _apellido;
        documento = _documento;
        tipo_identificacion = _tipo_identificacion;
    }
    // creacion de los getters y los setters de los datos de esta clase
    string getDireccion()
    {
        return direccion;
    }

    int getDescuento()
    {
        return descuento;
    }

    string getTipo_suscripcion()
    {
        return tipo_suscripcion;
    }

    void setDireccion(string newDireccion)
    {
        direccion = newDireccion;
    }

    void setTipo_suscripcion(string newTipo_suscripcion)
    {
        tipo_suscripcion = newTipo_suscripcion;
    }

    void setDescuento(int newDescuento)
    {
        descuento = newDescuento;
    }

    friend ostream &operator<<(ostream &output, Cliente &f)
    {
        system("cls");
        output<< "---------------------------------------------------" << endl;
        output<< "Aunar Villavicencio             FACTURA       #0001" << endl;
        output<< "                                FECHA    ";
        obtenerFecha() ;
        cout << endl;
        output<< "Kml Via Acacias, Anillo Vial" << endl;
        output<< "Villavicencio, Meta" << endl;
        output<< "(8)6823030 / Cel: " << f.getCelular();
        cout << endl;
        output<< "---------------------------------------------------" << endl << endl;
        output<< "FACTURA A" << endl;
        output<< f.getNombre() << endl;
        output<< f.tipo_identificacion << "   " << f.documento << endl;
        output<< f.direccion << endl << endl;
        output<< "DESCRIPCION                | CANT |   VALOR   " << endl;
        output<< "Pago Suscripcion Personal  |   1  | " << f.calcularPagoSuscripcion()<< "(COP)" << endl;
        output<< "                             TOTAL  " << f.calcularPagoSuscripcion()<< "(COP)" << endl << endl;

        cout << "VALOR A PAGAR: $" << f.calcularPagoSuscripcion() << "(COP)" << endl << endl;
        cout << "              Gracias por tu compra               " << endl;
        cout << "        Feliz Anio te desea la Familia AUNAR       " << endl << endl;
        cout << "--------------------------------------------------" << endl;
        return output;
    }

    friend istream &operator>>(istream &input, Cliente &f)
    {
        cout << "cual es su nombre: ";
        input >> f.nombre;
        cout << "cual es su apellido: ";
        input >> f.apellido;
        string aux2 = tipoDocumento();
        f.setTipo_identificacion(aux2);
        cout << "cual es su numero de documento: ";
        input >> f.documento;
        cout << "Cual es su direccion: ";
        getline(input,f.direccion);
        getline(input, f.direccion);
        cout << "cual es su numero de telefono: ";
        input >> f.celular;
        string aux = tipoSuscripcion();
        f.setTipo_suscripcion(aux);
        cout << "Cual es su descuento en %: ";
        input >> f.descuento;
        return input;
    }

    int calcularPagoSuscripcion()
    {
        float pago;
        if (tipo_suscripcion == "Empresarial")
        {
            pago = 25000;
        }
        else if (tipo_suscripcion == "Grupo")
        {
            pago = 15000;
        }
        else
        {
            pago = 10000;
        }
        pago = (pago * (100 - descuento)) /100;
        return pago;
    }

    void eliminarCliente()
    {
        nombre = apellido = documento = direccion = tipo_suscripcion = "";
        tipo_identificacion = descuento = 0;
    }

    void mostrarDatos()
    {
        cout << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Tipo Documento: " << tipo_identificacion << endl;
        cout << "Documento: " << documento << endl;
        cout << "Celular: " << celular << endl;
        cout << "Tipo suscripcion  : " << tipo_suscripcion << endl;
        cout << "Descuento: " << descuento << endl;
    }

};
// creacion de la clase Empleado, que va a heredar de la clase Persona
// heradará los datos de la misma manera que la clase padre, esto lo obtenemos por el public
class Empleado : public Persona
{
    // variables que se usaran en esta clase
private:
    string tipo_contrato; // los tipos son (TC) tiempo completo o (TP) tiempo parcial
    float salario;
    int horas_t, horas_extra_d, horas_extra_n, horas_extra_dom_d, horas_extra_dom_n;

public:
    // contructor vacio
    Empleado()
    {
        tipo_contrato = nombre = celular = apellido = documento = "";
        salario = 0, 0;
        tipo_identificacion = horas_t = horas_extra_d = horas_extra_n = horas_extra_dom_d = horas_extra_dom_n = 0;
    }
    // constructor con datos
    //nombre   apellido   tipo_documento   documento   tipo_contrato   salario
    Empleado(string _nombre, string _apellido, int _tipo_identificacion, string _celular, string _documento, string _tipo_contrato, float _salario)
    {
        nombre = _nombre;
        apellido = _apellido;
        tipo_identificacion = _tipo_identificacion;
        documento = _documento;
        tipo_contrato = _tipo_contrato;
        salario = _salario;
        celular = _celular;
    }
    // getters and setters
    string getTipo_contrato()
    {
        return tipo_contrato;
    }

    float getSalario()
    {
        return salario;
    }

    int getHoras_t()
    {
        return horas_t;
    }

    int getHoras_extra_d()
    {
        return horas_extra_d;
    }

    int getHoras_extra_n()
    {
        return horas_extra_dom_n;
    }

    int getHoras_extra_dom_d()
    {
        return horas_extra_dom_d;
    }

    int getHoras_extra_dom_n()
    {
        return horas_extra_dom_n;
    }

    void setTipo_contrato(string newTipo_contrato)
    {
        tipo_contrato = newTipo_contrato;
    }

    void setSalario(float newSalario)
    {
        salario = newSalario;
    }

    void setHoras_t(int newHoras_t)
    {
        horas_t = newHoras_t;
    }

    void setHoras_extra_d(int newHoras_extra_d)
    {
        horas_extra_d = newHoras_extra_d;
    }

    void setHoras_extra_n(int newHoras_extra_n)
    {
        horas_extra_n = newHoras_extra_n;
    }

    void setHoras_extra_dom_d(int newHoras_extra_dom_d)
    {
        horas_extra_dom_d = newHoras_extra_dom_d;
    }

    void setHoras_extra_dom_n(int newHoras_extra_dom_n)
    {
        horas_extra_dom_n = newHoras_extra_dom_n;
    }

    void mostrarDatos()
    {
        cout << endl << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Tipo Documento: " << tipo_identificacion << endl;
        cout << "Documento: " << documento << endl;
        cout << "Tipo de contrato: " << tipo_contrato << endl;
        cout << "salario: " << calcularSalario(tipo_contrato,horas_t,horas_extra_d,horas_extra_n,horas_extra_dom_d,horas_extra_dom_n) << endl;
    }

    friend ostream &operator<<(ostream &output, Empleado &f)
    {
        float aux = calcularSalario(f.tipo_contrato,f.horas_t,f.horas_extra_d, f.horas_extra_n, f.horas_extra_dom_d, f.horas_extra_dom_n);
        f.setSalario(aux);

        float hora, sueldo;

        if (f.tipo_contrato == "Tiempo completo")
        {
            hora = 4166.66;
        }
        else
        {
            hora = 2083.66;
        }
        sueldo = hora * f.horas_t;
        output << endl;
        system("cls");
        output<< "---------------------------------------------------" << endl;
        output<< "               DESPRENDIBLE DE PAGO                " << endl;
        output<< "Aunar Villavicencio             DESPRENDIBLE  #0001" << endl;
        output<< "                                FECHA    ";
        obtenerFecha() ;
        cout << endl;
        output<< "Kml Via Acacias, Anillo Vial" << endl;
        output<< "Villavicencio, Meta" << endl;
        output<< "(8)6823030 / Cel: " << f.getCelular();
        cout << endl;
        output<< "---------------------------------------------------" << endl << endl;
        output<< "SALARIO         " << f.salario << endl;
        output<< "TIPO CONTRATO   " << f.tipo_contrato << endl;
        output<< f.getNombre() << endl;
        output<< f.tipo_identificacion << "   " << f.documento << endl << endl;
        output<< "DESCRIPCION                | CANT |   VALOR   " << endl;
        output<< "pago nomina                | " << f.horas_t << "  | $" << sueldo <<"(COP)" << endl;
        output<< "Horas extras diurnas       | " << f.horas_extra_d << "  | $" << ((f.horas_extra_d * hora) * 1.25) <<"(COP)" << endl;
        output<< "Horas extras nocturnas     | " << f.horas_extra_n << "  | $" << ((f.horas_extra_n * hora) * 1.75) <<"(COP)" << endl;
        output<< "Horas extras diurna dom    | " << f.horas_extra_dom_d << "  | $" << ((f.horas_extra_dom_d * hora) * 2) <<"(COP)" << endl;
        output<< "Horas extras nocturna dom  | " << f.horas_extra_dom_n << "  | $" << ((f.horas_extra_dom_n * hora) * 2.5) <<"(COP)" << endl << endl;
        output<< "                            TOTAL | $" << f.salario << "(COP)" << endl <<endl;
        output<< "VALOR A PAGAR:  $ " << f.salario << " (COP)" << endl << endl;
        output<< "              Gracias por tu compra               " << endl ;
        output<< "        Feliz Anio te desea la Familia AUNAR       " << endl << endl;
        output<< "--------------------------------------------------" << endl;
        return output;
    }

    friend istream &operator>>(istream &input, Empleado &f)
    {
        string contra;
        cout << "cual es su nombre: ";
        input >> f.nombre;
        cout << "cual es su apellido: ";
        input >> f.apellido;
        cout << "cual es su tipo de identificacion: ";
        string aux = "", aux2;
        while (aux != "1" && aux != "2" && aux != "3" )
        {
            cout << "\n1. Tarjeta de identidad\n2. Cedula de ciudadania\n3. Cedula Extranjera\n";
            cout << "\nCual es su tipo de documento: ";
            cin >> aux;
        }
        if (aux == "1")
        {
            aux2 = "Tarjeta de identidad";
        }
        else if (aux == "2")
        {
            aux2 = "Cedula de ciudadania";
        }
        else
        {
            aux2 = "Cedula de extranjeria";
        }
        f.setTipo_identificacion(aux2);
        cout << "cual es su numero de documento: ";
        input >> f.documento;
        cout << "cual es su numero de telefono: ";
        input >> f.celular;
        f.tipo_contrato = tipoContrato();
        cout << "cuantas horas trabajadas tiene: ";
        input >> f.horas_t ;
        cout << "cuantas horas extra en el dia tiene: ";
        input >> f.horas_extra_d;
        cout << "cuantas horas extra en el noche tiene: ";
        input >> f.horas_extra_n;
        cout << "cuantas horas extra dominicales en el dia tiene: ";
        input >> f.horas_extra_dom_d;
        cout << "cuantas horas extra dominacales en la noche tiene: ";
        input >> f.horas_extra_dom_n;
        return input;
    }

    void eliminarEmpleado()
    {
        tipo_contrato = nombre = apellido = documento = "";
        salario = 0, 0;
        tipo_identificacion = horas_t = horas_extra_d = horas_extra_n = horas_extra_dom_d = horas_extra_dom_n = 0;
    }
};

void menu()
{
    Cliente c1;
    Cliente c2;
    string a = "", b = "";
    int c = 0;
    while (b != "3")
    {
        system("cls");
        titulo();
        cout << "Menu:" << endl << endl;
        cout << "1. Clientes\n2. Empleados\n3. Salir" << endl
             << endl;
        cout << "Que desea realizar: ";
        cin >> a;
        if (a == "1"){c = 1;}
        else if (a == "2") { c = 2;}
        else if (a == "3"){c = 3;}
        if ( a == "1" || a == "2" || a == "3")
        {
            switch (c)
            {
            case 1:
            {

                string aux = "", j = "";
                int b;
                while (j != "5")
                {
                    system("cls");
                    titulo();
                    cout << "Gestion de clientes" << endl << endl;
                    cout << "Menu: " << endl << endl;
                    cout << "1. Crear clientes\n2. Modificar clientes\n3. Ver clientes\n4. Generar facturas\n5. Regresar\n\nQue desea realizar: ";
                    cin >> aux;
                    if ( aux == "1"){b = 1;}
                    else if ( aux == "2"){b = 2;}
                    else if ( aux == "3"){b = 3;}
                    else if ( aux == "4"){b = 4;}
                    else if ( aux == "5"){b = 5;}
                    if ( b == 1 || b == 2 || b == 3 || b == 4)
                    {
                        switch (b)
                        {
                        case 1:
                        {
                            string a = "";
                            mostrarClientes(c1.getNombre(),c2.getNombre());
                            while (a != "1" && a != "2")
                            {
                                cout << "Donde lo desea crear: ";
                                cin >> a;
                            }
                            if ( a == "1")
                            {
                                cin >> c1;
                            }
                            else
                            {
                                cin >> c2;
                            }
                            break;
                        }
                        case 2:
                        {
                            string aux = "", aux2 = "", datoNew;
                            mostrarClientes(c1.getNombre(), c2.getNombre());

                            while(aux != "1" && aux !="2")
                            {
                                cout << "Que cliente desea modificar: ";
                                cin >> aux;
                            }
                            while (aux2 != "1" && aux2 != "2" && aux2 != "3" && aux2 != "4" && aux2 != "5" && aux2 != "6")
                            {
                                cout << "\n1. Nombre\n2. Apellido\n3. Tipo de documento\n4. Documento\n5. Tipo de suscripcion\n6. Descuento";
                                cout << "\n\nQue dato desea modificar: ";
                                cin >> aux2;
                            }
                            if ( aux == "1" )
                            {
                                if (aux2 == "1")
                                {
                                    cout << "Ingrese su nombre: ";
                                    cin >> datoNew;
                                    c1.setNombre(datoNew);
                                }
                                else if (aux2 == "2")
                                {
                                    cout << "Ingrese su apellido: ";
                                    cin >> datoNew;
                                    c1.setApellido(datoNew);
                                }
                                else if (aux2 == "3")
                                {
                                    string aux2 = tipoDocumento();
                                    c1.setTipo_identificacion(aux2);
                                }
                                else if (aux2 == "4")
                                {
                                    cout << "Ingrese su documento: ";
                                    cin >> datoNew;
                                    c1.setDocumento(datoNew);
                                }
                                else if (aux2 == "5")
                                {
                                    string datoNew = tipoSuscripcion();
                                    c1.setTipo_suscripcion(datoNew);
                                }
                                else
                                {
                                    cout << "Ingrese su tipo de descuento: ";
                                    cin >> datoNew;
                                    c1.setDescuento(stoi(datoNew));
                                }
                                break;
                            }
                            else
                            {
                                if (aux2 == "1")
                                {
                                    cout << "Ingrese su nombre: ";
                                    cin >> datoNew;
                                    c2.setNombre(datoNew);
                                }
                                else if (aux2 == "2")
                                {
                                    cout << "Ingrese su apellido: ";
                                    cin >> datoNew;
                                    c2.setApellido(datoNew);
                                }
                                else if (aux2 == "3")
                                {
                                    string aux2 = tipoDocumento();
                                    c2.setTipo_identificacion(aux2);
                                }
                                else if (aux2 == "4")
                                {
                                    cout << "Ingrese su documento: ";
                                    cin >> datoNew;
                                    c2.setDocumento(datoNew);
                                }
                                else if (aux2 == "5")
                                {
                                    string datoNew = tipoSuscripcion();
                                    c2.setTipo_suscripcion(datoNew);
                                }
                                else
                                {
                                    cout << "Ingrese su tipo de descuento: ";
                                    cin >> datoNew;
                                    c2.setDescuento(stoi(datoNew));
                                }
                                break;
                            }
                        }
                        case 3:
                        {
                            string aux = "";
                            mostrarClientes(c1.getNombre(),c2.getNombre());
                            while(aux != "1" && aux !="2")
                            {
                                cout << "Que cliente desea ver: ";
                                cin >> aux;
                            }
                            if (aux == "1")
                            {
                                c1.mostrarDatos();
                            }
                            else
                            {
                                c2.mostrarDatos();
                            }
                            cout << endl;
                            system("pause");
                            break;
                        }
                        case 4:
                        {
                            string aux = "";
                            mostrarClientes(c1.getNombre(), c2.getNombre());
                            while (aux != "1" && aux != "2")
                            {
                                cout << "Elige un cliente: ";
                                cin >> aux;
                            }
                            if (aux == "1")
                            {
                                cout << c1;
                            }
                            else
                            {
                                cout << c2;
                            }
                            system("pause");
                            break;
                        }
                        case 5:
                            break;
                        }
                    }
                    j = aux;
                }
                break;
            }

            case 2:

            {
                Empleado e1;
                Empleado e2;
                    string aux = "", j = "";

                while (j != "5")
                {
                    int b;
                    system("cls");
                    titulo();
                    cout << "Gestion de empleados" << endl << endl;
                    cout << "Menu: " << endl << endl;
                    cout << "1. Crear empleado\n2. Modificar empleado\n3. Ver empleado\n4. Generar recibos de nomina\n5. Regresar\n\nQue desea realizar: ";
                    cin >> aux;
                    if ( aux == "1"){b = 1;}
                    else if ( aux == "2"){b = 2;}
                    else if ( aux == "3"){b = 3;}
                    else if ( aux == "4"){b = 4;}
                    else if ( aux == "5"){b = 5;}
                    if ( b == 1 || b == 2 || b == 3 || b == 4)
                    {
                        switch (b)
                        {
                        case 1:
                        {
                            string a = "";
                            mostrarEmpleados(e1.getNombre(),e2.getNombre());
                            while (a != "1" && a != "2")
                            {
                                cout << "Donde lo desea crear: ";
                                cin >> a;
                            }
                            if ( a == "1")
                            {
                                cin >> e1;
                            }
                            else
                            {
                                cin >> e2;
                            }
                            break;
                        }
                        case 2:
                        {
                            string aux = "", aux2 = "", datoNew;
                            mostrarEmpleados(e1.getNombre(), e2.getNombre());

                            while(aux != "1" && aux !="2")
                            {
                                cout << "Que empleado desea modificar: ";
                                cin >> aux;
                            }

                            while (aux2 != "1" && aux2 != "2" && aux2 != "3" && aux2 != "4" && aux2 != "5" && aux2 != "6")
                            {
                                cout << "\n1. Nombre\n2. Apellido\n3. Tipo de documento\n4. Documento\n5. Tipo de contrato\n";
                                cout << "\n\nQue dato desea modificar: ";
                                cin >> aux2;
                            }
                            if ( aux == "1" )
                            {
                                if (aux2 == "1")
                                {
                                    cout << "Ingrese su nombre: ";
                                    cin >> datoNew;
                                    e1.setNombre(datoNew);
                                }
                                else if (aux2 == "2")
                                {
                                    cout << "Ingrese su apellido: ";
                                    cin >> datoNew;
                                    e1.setApellido(datoNew);
                                }
                                else if (aux2 == "3")
                                {
                                    string aux2 = tipoDocumento();
                                    e1.setTipo_identificacion(aux2);
                                }
                                else if (aux2 == "4")
                                {
                                    cout << "Ingrese su documento: ";
                                    cin >> datoNew;
                                    e1.setDocumento(datoNew);
                                }
                                else if (aux2 == "5")
                                {
                                    string datoNew = tipoContrato();
                                    e1.setTipo_contrato(datoNew);
                                }
                                break;
                            }
                            else
                            {
                                if (aux2 == "1")
                                {
                                    cout << "Ingrese su nombre: ";
                                    cin >> datoNew;
                                    e2.setNombre(datoNew);
                                }
                                else if (aux2 == "2")
                                {
                                    cout << "Ingrese su apellido: ";
                                    cin >> datoNew;
                                    e2.setApellido(datoNew);
                                }
                                else if (aux2 == "3")
                                {
                                    string aux2 = tipoDocumento();
                                    e2.setTipo_identificacion(aux2);
                                }
                                else if (aux2 == "4")
                                {
                                    cout << "Ingrese su documento: ";
                                    cin >> datoNew;
                                    e2.setDocumento(datoNew);
                                }
                                else if (aux2 == "5")
                                {
                                    string datoNew = tipoContrato();
                                    e2.setTipo_contrato(datoNew);
                                }
                                break;
                            }
                            system("pause");
                        }
                        case 3:
                        {
                            string aux = "";
                            mostrarEmpleados(e1.getNombre(),e2.getNombre());
                            while(aux != "1" && aux !="2")
                            {
                                cout << "Que empleado desea ver: ";
                                cin >> aux;
                            }
                            if (aux == "1")
                            {
                                e1.mostrarDatos();
                            }
                            else
                            {
                                e2.mostrarDatos();
                            }
                            cout << endl;
                            system("pause");
                            break;
                        }
                        case 4:
                        {
                            string aux = "";
                            mostrarEmpleados(e1.getNombre(), e2.getNombre());
                            while (aux != "1" && aux != "2")
                            {
                                cout << "Elige un empleado: ";
                                cin >> aux;
                            }
                            if (aux == "1")
                            {
                                cout << e1;
                            }
                            else
                            {
                                cout << e2;
                            }
                            system("pause");
                            break;
                        }
                        case 5:
                            break;
                        }
                    }
                    j = aux;
                }
            }

            case 3:
            {
                break;
            }
            }
        }
        b = a;
    }

}

void mostrarClientes(string e1,string e2)
{
    system("cls");
    cout << "Clientes Registrados: " << endl;
    if (e1 == "")
    {
        cout << "1. Sin Registro" << endl;
    }
    else
    {
        cout << "1. " << e1 << endl;
    }
    if (e2 == "")
    {
        cout << "2. Sin Registro" << endl;
    }
    else
    {
        cout << "2. " << e2 << endl;
    }
}

void mostrarEmpleados(string e1,string e2)
{
    system("cls");
    cout << "Empleados Registrados: " << endl;
    if (e1 == "")
    {
        cout << "1. Sin Registro" << endl;
    }
    else
    {
        cout << "1. " << e1 << endl;
    }
    if (e2 == "")
    {
        cout << "2. Sin Registro" << endl;
    }
    else
    {
        cout << "2. " << e2<< endl;
    }
}

void titulo()
{
    cout << "############################################" << endl;
    cout << "### SISTEMA DE PLANIFICACION DE RECURSOS ###" << endl;
    cout << "############################################" << endl << endl;
}

int main()
{
    system("color f0");
    system("cls");
    menu();
    return 0;
}
