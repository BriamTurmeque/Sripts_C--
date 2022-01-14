#include <iostream>

using namespace std;
void valNuevo(int&,int&);
/*cuando declaramos una funcion asi, void x(int, int){},a esto se le llama paso por valor, lo que estamos haciendo es mandando
una copia exacta de los valores que mandan a la funcion. en cambio, si les agregamos "&", int&,float&
lo que estamos mandando es la direccion de memoria de esa variable
el paso por referencia es cuando agregamos el aspersan*/
int main()
{
    int num1, num2;

    cout<<"Digite 2 numeros: ";cin>>num1>>num2;

    valNuevo (num1,num2);


    system ("pause");
    return 0;
}

void valNuevo(int& xnum,int& ynum){
    cout <<"El valor del primer numero es: "<<xnum<<endl;
    cout <<"El valor del segundo numero es: "<<ynum<<endl;
}
