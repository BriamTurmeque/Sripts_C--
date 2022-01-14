#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;
void lectura ();

int main()
{
    lectura();
    system ("pause");
    return 0;
}


void lectura(){
    ifstream archivo;
    string texto;
    //abrimos el archivo con in, esto me indica que va a estar en modo lectura
    //podemos hacerlo escribiendo el nombre del archivo (solo si esta en la misma carpeta)
    //archivo.open("covid.txt",ios::in);


    //o podemos poner la ubicacion
    archivo.open("C:\\Users\\turme\\OneDrive\\Documentos\\programas-scrips desarrollados\\C++\\ficheros\\lectura ficheros\\lecturaFicheros\\covid.txt",ios::in);
    if (archivo.fail()){
        cout<<"NO se pudo abrir el archivo";
        exit(1);
    }
    //esta funcion de la libreria fstream lo que hace es que me va a recorrer
    //todo el archivo, el resultado que arroja es tipo booleano
    while (!archivo.eof()){
        //copiamos todo lo que encontremos en el archivo, lo guardamos en la variable texto
        getline(archivo,texto);
        cout <<texto<<endl;
    }
    archivo.close();
}
