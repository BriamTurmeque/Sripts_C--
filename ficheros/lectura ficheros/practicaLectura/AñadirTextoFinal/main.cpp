#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

void aniadirTexto();

int main()
{
    aniadirTexto();
    system("pause");
    return 0;
}
void aniadirTexto(){
    ofstream archivo;
    string texto;
    //usamos la opcion app para agregar texto al archivo sin que nos borre lo que ya teniamos
    archivo.open("covid.txt",ios::app);
    if (archivo.fail()){
        cout<<"NO se pudo abrir el archivo correctamente";
        exit(1);
        }
    archivo<<endl<<"hola que tal, como estas ";
    cout<<"Que frase deseas añadir al archivo: ";
    getline(cin,texto);
    archivo<<endl<<texto;
    archivo.close();
}
