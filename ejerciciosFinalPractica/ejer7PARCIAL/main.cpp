#include <iostream>

using namespace std;

int main()
{
//escribir un programa que sume dos matrices bidimensionales. Las matrices para que puedan sumarse deben tener las mismas dimensiones.    return 0;

int matriz1[2][4], matriz2[2][4], matrizRes[2][4];
cout<<"Digite los valores de la matriz 1: "<<endl;
for (int a=0; a<2;a++){
    for (int i=0; i<4;i++){
        cout<<"columna "<<a<<" posicion "<<i<<": ";
        cin>>matriz1[a][i];
    }
}
cout<<endl<<endl;
cout<<"Digite los valores de la matriz 2: "<<endl;
for (int a=0; a<2;a++){
    for (int i=0; i<4;i++){
        cout<<"columna "<<a<<" posicion "<<i<<": ";
        cin>>matriz2[a][i];
    }
}
cout<<endl<<endl;
cout<<"las dos matrices sumadas son: "<<endl;
for (int a=0; a<2;a++){
    for (int i=0; i<4;i++){
        matrizRes[a][i]= matriz1[a][i] + matriz2[a][i];
        cout<<matrizRes[a][i]<<"  ";
        }
        cout<<endl;
}
return 0;}
