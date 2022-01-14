#include <iostream>

using namespace std;

int main()
{
    bool x;//dato logico, solo verdadero o positivo   se usan los operadores relacionales < > = <= >= == !=
    int a,b;

    cout<<"digite un numero: ";
    cin>>a;
    cout<<"digite otro numero: ";
    cin>>b;

//se puede usar el condicional o dejarlo simple, si se deja simple la respuesta va a ser  0(falso) o 1(verdadero)

    x=(a < b);
     //si el operador logico se cumple me va a mostrar el cout del if
    if(x==true){
        cout<<a<<" es menor a "<<b<<endl;
    }//si el operador logico no se cumple me va a mostrar esto
    else{
        cout<<a<<" es mayor o igual a "<<b;
    }
     //cout<<a<<" es menor a "<<b<<" ? "<<x;
    cout<<endl;
    return 0;
}
