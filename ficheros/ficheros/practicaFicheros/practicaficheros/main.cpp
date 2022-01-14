#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main()
{
    ofstream archivo;
    string nombre,aux;
    int p=0;
    cout<<"Digite el nombre del archivo: ";
    getline(cin,nombre);
    archivo.open(nombre.c_str(),ios::out);
    cout<<"digite la SALIR cuando no quiera digitar mas frases  ";
    while(aux!="SALIR"){
        if (p!=0){archivo<<aux<<endl;
        getline(cin,aux);}
        p++;
    }
    archivo.close();

    system("pause");
    return 0;
}
