#include <iostream>

using namespace std;

class Bus
{
protected:
    string numeroPlaca, nombreConductor;
public:
    Bus()
    {
        numeroPlaca = nombreConductor = "";
    }
    Bus(string nnombreConductor, string nnumeroPlaca)
    {
        nombreConductor = nnombreConductor;
        nnumeroPlaca = nnumeroPlaca;
    }
//servicios que ofrece: transporte de pasajeros, alquiler de buses basico y empresarial,
    virtual float precioServicio() = 0;
    string getNombreConductor()
    {
        return nombreConductor;
    }

    string getNumeroPlaca()
    {
        return numeroPlaca;
    }
    void setNombreConductor(string nombre)
    {
        nombreConductor = nombre;
    }
    void setNumeroPlaca(string numero)
    {
        numeroPlaca = numero;
    }


};
class BusPasajeros: public Bus
{
private:
    int puestoDisponibles, puestosOcupados;
public:
    BusPasajeros()
    {
        nombreConductor = "";
        numeroPlaca = "";
        puestoDisponibles = 20;
        puestosOcupados = 0;
    }
    BusPasajeros(string nombreConductor, string numeroPlaca, int puestoDisponibles, int puestosOcupados): Bus(nombreConductor,numeroPlaca)
    {
        BusPasajeros::puestoDisponibles = puestoDisponibles;
        BusPasajeros::puestosOcupados = puestosOcupados;
    }

    float precioServicio() override
    {
        float total = (25000 * puestosOcupados);
        return total;
    }
    getPuestos()
    {
        return puestoDisponibles;
    }
    setPuestos(int puestos)
    {
        puestoDisponibles = puestos;
    }

    friend ostream &operator <<(ostream &salida, BusPasajeros &b)
    {
        salida << "Bus Pasajeros: \nNombre del Conductor: " << b.nombreConductor;
        salida << "\nNumero de placa: " << b.numeroPlaca;
        salida << "\nPrecio del servicio: " << b.precioServicio();
        return salida;
    }
    friend istream &operator>>(istream &entrada,BusPasajeros &b)
    {
        cout << "nombre conductor: ";
        getline(entrada,b.nombreConductor);
        getline(entrada,b.nombreConductor);
        cout << "numero de placa: ";
        entrada >> b.numeroPlaca;
        cout << "cuantos puestos estan ocupados: ";
        entrada >> b.puestosOcupados;
        return entrada;
    }

};

class BusAlquiler: public Bus
{
private:
    string nombreAseguradora;
    int valorSeguro;
public:

    BusAlquiler()
    {
        nombreAseguradora = "";
        valorSeguro = 0;
    }

    BusAlquiler(string nombreConductor, string numeroPlaca, string nombreAseguradora, int valorSeguro): Bus(nombreConductor,numeroPlaca)
    {
        BusAlquiler::nombreAseguradora = nombreAseguradora;
        BusAlquiler::valorSeguro = valorSeguro;
    }

    string getNombreAseguradora()
    {
        return nombreAseguradora;
    }
    void setNombreAseguradora(string nombre)
    {
        nombreAseguradora = nombre;
    }
    float precioServicio() override
    {
        int precioBase = 340000;
        float costoServicio = precioBase + valorSeguro;
        return costoServicio;
    }

    friend ostream &operator <<(ostream &salida, BusAlquiler &b)
    {
        salida << "Bus Alquiler Basico: \nNombre del Conductor: " << b.nombreConductor << "\nNumero de placa: " << b.numeroPlaca << "\nPrecio del servicio: " << b.precioServicio();
        return salida;
    }
    friend istream &operator>>(istream &entrada,BusAlquiler &b)
    {
        cout << "nombre conductor: ";
        getline(entrada,b.nombreConductor);
        getline(entrada,b.nombreConductor);
        cout << "numero de placa: ";
        entrada >> b.numeroPlaca;
        cout << "cuanto vale el seguro: ";
        entrada >> b.valorSeguro;
        return entrada;
    }

};

class BusAlquilerEmpresarial: public Bus
{
private:
    int valorSeguro;
public:
    BusAlquilerEmpresarial()
    {
        valorSeguro = 0;
    }

    BusAlquilerEmpresarial(string nombreConductor, string numeroPlaca, int valorSeguro): Bus(nombreConductor,numeroPlaca)
    {
        BusAlquilerEmpresarial::valorSeguro = valorSeguro;
    }

    //guarda el contenido del menu
    void menuAlimentacion();
    float precioServicio() override
    {
        //cobran el precio base de 570000 mas el valor del seguro mas el recargo del menu que es de 120000
        int precioBase = 570000;
        float costoServicio;
        costoServicio = precioBase + valorSeguro + 120000;
        return costoServicio;

    }

    friend ostream &operator <<(ostream &salida, BusAlquilerEmpresarial &b)
    {
        salida << "Bus alquiler empresarial: \nNombre del Conductor: " << b.nombreConductor << "\nNumero de placa: " << b.numeroPlaca << "\nPrecio del servicio: " << b.precioServicio();
        return salida;
    }
    friend istream &operator>>(istream &entrada,BusAlquilerEmpresarial &b)
    {
        cout << "nombre conductor: ";
        getline(entrada,b.nombreConductor);
        getline(entrada,b.nombreConductor);
        cout << "numero de placa: ";
        entrada >> b.numeroPlaca;
        cout << "cuanto vale el seguro: ";
        entrada >> b.valorSeguro;
        return entrada;
    }
};
int main()
{
    string aux = "";
    BusPasajeros bp;
    BusAlquiler ba;
    BusAlquilerEmpresarial be;
    cout << "GESTIOS DE BUSES\n\nQue servicio ofrece: \n1. Alquiler de buses a pasajeros\n2. Alquiler basico de buses\n3. Alquiler de buses a empresas\n\n-> Elija una opcion: ";
    cin >> aux;
    if (aux =="1")
    {
        cin >> bp;
        system("cls");
        cout << bp;
    }
    else if (aux == "2")
    {
        cin >> ba;
        system("cls");
        cout << ba;
    }

    else if (aux == "3")
    {
        cin >> be;
        system("cls");
        cout << be;
    }

    else
    {
        cout << "--------------------\nDigito una opcion incorrecta\n--------------------";
    }


    return 0;
}
