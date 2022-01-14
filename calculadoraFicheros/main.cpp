#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;
void escribir();
void lectura();
string nombreArchivo;
int main()
{
    cout<<"Digite el nombre del archivo(recuerde que termina en .txt): ";getline(cin,nombreArchivo);


    escribir();
    lectura();

    system ("pause");
    return 0;
}

void escribir (){
    ofstream archivo;
    string frase;

    //con esta funcion vamos a abrir el archivo de texto
    //primer parametro: nombre/ubicacion segundo parametro: de que forma lo queremos abrir
    //el ios::out crea el archivo en el caso de que no exista, pero si ya existe lo reemplaza.
    //archivo.open("procedimientoCalculadora.txt",ios::out);
    //no ponemos el nombre que se guardo asi solo, usamos la funcion .c_str() para que funcione correctamente
    //o lo podemos dejar solo el nombre, tambien funciona asi
    archivo.open(nombreArchivo.c_str(),ios::out);

    //archivo.fail me da un T o F, y me indica si hubo algun error al abrir el archivo
    if (archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    //esta es la forma para añadir texto al archivo directamente desde aqui
    //primero el nombre del archivo en el que quiero trabajar, luego los << o >>
    //archivo<<"Hola que tal.....";

    //si queremos que el usuario digite el texto el mismo es por medio  de otro string
    cout<<"\nDigite el texto que desea agregar al archivo: ";getline(cin,frase);
    archivo<<frase;

    archivo.close();
}


void lectura(){

    //input, entrada de datos del archivo de texto al programa
    ifstream archivo;
    string textoLeido;
    archivo.open(nombreArchivo,ios::in);//abrimos le archivo en modo lectura
    if (archivo.fail()){
        cout<<"No se pudo abrir el archivo";exit(1);
    }

    while (!archivo.eof()){//mientras no sea el final del archivo, quiero que me siga recorriendo todo el archivo
        //recordemos que el primer parametro es de donde queremos sacar la informacion, y el segundo es la variable donde se va a guardar
        getline(archivo,textoLeido);
        cout<<textoLeido<<endl;

    }
    archivo.close();//cerramos el archivo
}
