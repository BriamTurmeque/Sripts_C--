#include <iostream>

using namespace std;

int main()
{//al añadir esas llaves y el 4, le estamos dando 4 espacios de memoria de char
    char n[4];//con estos espacios de memoria podemos escribir muchos caracteres dentro de una misma palabra, sin dar espacio
    cout <<"digite su nombre: ";
    cin>>n;
    cout<<"\nSu nombre es: "<<n;
}
