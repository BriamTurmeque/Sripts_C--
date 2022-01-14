#include <iostream>

using namespace std;

int main()
{
//Escribir un programa que divida todos los elementos de una matriz M (3x4) por el elemento situado en la posición 2,2.    return 0;
int matriz [3][4];
int aux;
for (int i=0;i<3;i++){
    for (int a=0;a<4;a++){
        cout<<"Digite el valor para la columna "<<i<<" posicion "<<a<<": ";
        cin>>matriz[i][a];
    }
    system("cls");
}
system("cls");
cout<<"La nueva matriz con la division que se pide es (con los datos aprox): "<<endl<<endl;
aux=matriz[2][2];
for (int i=0;i<3;i++){
    for (int a=0;a<4;a++){
        matriz[i][a] = matriz[i][a] / aux;
        cout<<matriz[i][a]<<"---";
    }
    cout<<endl;
}



return 0;}
