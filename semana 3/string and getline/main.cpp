#include <iostream>

using namespace std;

int main()
{

    string nombre,x,y; //sirve para manejar texto como tal. este acoje la palabra completa hasta el primer espacio
    cout<<"digite su primer nombre: ";
    //cin>>nombre;
    getline(cin,nombre);//(siempre usamos el cin en getline, despues la variable
                           //el getline sirve para traer la linea completa
//con getline podemos guardar toda la linea que escriban en el valor indicado
   cout<<"digite su segundo nombre: ";
   cin>>x;
   y=nombre + x;
cout<<"su nombre es: "<<y;
}
