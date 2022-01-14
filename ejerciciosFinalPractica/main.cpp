#include <iostream>

using namespace std;

//ejercicio 1
int main()
{
   /* Programa que simula un parqueadero. Declara un arreglo tipo int (entero) denominado numerodecoches que contenga 24 posiciones, las
cuales hacen referencia a las horas de un día (de la hora 0 a la 23). Llene el arreglo para las 24 posiciones, en donde se le preguntará al
usuario el número de coches están guardados en ese momento (hora del día). Procede a mostrar en pantalla un mensaje que indique la hora
y el número de coches para esa hora.
*/

int numerodecoches [24];
cout<<" Cuantos coches estan guardados a la(s): "<<endl;
for ( int a = 0; a< 24 ; a++ ){
    if (a==0){
    cout<<"a la "<<a<<":";
    cin>>numerodecoches[a];}
    else {cout<<"a las "<<a<<":";cin>>numerodecoches[a];}
}system ("cls");
cout<<"....................................................."<<endl;
cout<<"numero de coches -------- hora del dia"<<endl;
for ( int a = 0 ; a< 24 ; a++){
    cout<<numerodecoches[a]<< " coches a las "<<a<<endl;
}


    return 0;
}



