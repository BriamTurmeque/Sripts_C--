#include <iostream>

using namespace std;

int main()
{
    int n,aux;
    cout<<"Digite un valor para el tamaño del vector: ";cin>>n;
    //Almacene en un arreglo de n posiciones nombres de países. Implementar una opción que al digitar una posición muestre el dato que contiene.
    string nombrePais [n];
    for (int i = 0; i < n; i++){
        cout<<"\nDigite el nombre del pais en la pos "<<i+1<<": ";
        cin>>nombr3ePais[i];
    }
    system ("cls");
    cout<<"\nDigite la posicion que quiere mirar: ";
    cin>>aux;
    cout<<"El pais en esa pos es "<<nombrePais[aux];





    return 0;
}
