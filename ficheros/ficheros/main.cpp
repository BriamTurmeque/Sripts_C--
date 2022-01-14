#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

void escribir();

int main()
{
    escribir();

    system ("pause");
    return 0;
}

void escribir (){

    //output fstream, este es "un tipo de dato" con su nombre
    ofstream archivo;
    //parametros. 1)nombre del archivo con el txt 2. el modo en que vamos a usar ese archivo
    //.open es la funcion que se usa para abrir un archivo
    //ios::out si el archivo no existe lo crea, y si sí existe lo va a reemplazar
    archivo.open("prueba.txt",ios::out);
    //.fail me da un T/F, y me indica si se genero algun error al momento de crearlo/abrirlo
    if (archivo.fail()){
        cout<<"NO se pudo abrir el archivo";
        //la funcion exit de la libreria stdlib.h me ayuda a salir del programa rapido
        exit (1);
    }
    //si queremos guardar/mostrar algo en pantalla del archivo, es decir guardar algo en el archivo, ponemos el nombre del archivo << ...
    archivo<<"Como estas Felipe?";
    archivo<<"agregando mas texto";
    archivo.close();//funcion para cerrar el archivo





    //tambien podemos que el usuario digite el nombre del archivo.txt
    string nombreArchivo,texto;

    cout<<"Digite el nombre del archivo: ";
    getline(cin,nombreArchivo);//usamos getline para guardar toda la cadena de caracteres

    ofstream archivo;
    //no se puede poner solo el nombre del archivo, tenemos que usar la funcion c_str() de la libreria fstream
    //como se va a poner una variable no se ponen entre comillas
    archivo.open(nombreArchivo.c_str(),ios::out);
    if (archivo.fail()){
        cout<<"NO se pudo abrir el archivo";
        exit (1);
    }
    //usamos << para guardar texto en el archivo
    archivo<<"Como estas Felipe?";
    cout<<"Digite el texto: ";
    getline(cin,texto);
    archivo<<endl<<texto;
    archivo.close();

}
