#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;
void lectura();


int main()
{
    lectura();

    system ("pause");
    return 0;
}


void lectura (){
    ifstream archivo;
    string nombreArchivo,texto;
    cout <<"Digite el nombre del archivo o la ubicacion: ";
    getline(cin,nombreArchivo);
    archivo.open(nombreArchivo.c_str(),ios::in);
    if (archivo.fail()){
        cout<<"NO se ha podido ejecutar el programa";
        exit(1);
    }
    while (!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;
    }
    archivo.close();

}
