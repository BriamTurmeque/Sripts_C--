#include <iostream>

using namespace std;
int obtenerLetra(int);

int main()
{
//ejercicio 2 de practica

int numeroDNI;
cout << "ingrese su numero de DNI: "<<endl;
cin>>numeroDNI;
cout<<".........";
obtenerLetra(int numeroDNI);
    return 0;
}

int obtenerLetra (int numeroDNI){
int a=numeroDNI;
cout<<a;
cout<<"hola parcero"<<numeroDNI;
return a;
}



