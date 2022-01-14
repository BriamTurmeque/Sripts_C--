#include <iostream>

using namespace std;
float precio(int);
float precio(int, float );
float precio(int, char);

int main()
{ int plata;
float iva;
char divisa;
    cout<<"***FUNCION DE PRECIO***"<<endl;
    cout<<"Digite el valor a sumarle el iva: ";cin>>plata;
    cout<<endl<<"el valor dado mas el iva del 19 es: "<<precio(plata);
    cout<<"\n--------------------------------"<<endl;

    cout<<"\nDigite un valor y el iva que desea añadir (el iva dentro del rango de num de 0 a 1): ";cin>>plata>>iva;
    cout<<"El valor digitado mas el iva del "<<iva<<" es: "<<precio(plata,iva);

    cout<<"\n----------------------------------"<<endl;
    cout<<endl<<"Digite un valor mas la divisa a la que quiere convertir(D,E): ";cin>>plata>>divisa;
    cout<<"El valor  mas el iva en la divisa escogida es: "<<precio(plata,divisa);
    cout<<endl;
    system("pause");
    return 0;
}
//recibir un valor y sumarle el iva del 19%
float precio(int plata){
int plataIva=plata;
return plataIva*= 1.19;;
}

//recibir un valor y el iva que desea agregar
float precio(int plata, float iva){
float res=1.0;
res= res + iva;
return plata*res;}

float precio(int plata, char divisa){
int res=0;
switch(divisa){
case 'D': res=(plata*1.19)*3.500; return res;
case 'E': res=(plata*1.19)*4.500;return res;
default: cout<<"Digito un caracter invalido   ";return res;
}
}
