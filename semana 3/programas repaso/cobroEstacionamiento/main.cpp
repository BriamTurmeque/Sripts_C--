#include <iostream>

using namespace std;

int main (){

cout<<"**COBRO DE ESTACIONAMIENTO**";
cout<<"\n\nLa hora vale 4.000";
    float horasUsadas, minutosUsados,n=0, cobroTotal;
    cout<<"\ncuantas horas estuvo estacionado: ";cin>>horasUsadas;
    cout<<"y cuantos minutos: ";
    cin>>minutosUsados;

 if(minutosUsados!=n){
    minutosUsados=4000;
}
    else{
    minutosUsados=0;}
         cobroTotal=(horasUsadas*4000)+minutosUsados;

cout<<"\nEl cobro de su tiempo estacionado es: "<<endl<<cobroTotal<<endl<<endl;


return 0;
}
