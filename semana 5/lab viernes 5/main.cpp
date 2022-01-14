#include <iostream>
#include <cmath>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#define PI 3.14159265
using namespace std;

/*int main()
{
    double angulo, resultado, radianes;
    cout<<"coseno de un angulo en grados\n\n";
    cout<<"digite un angulo: ";
    cin>>angulo;
    radianes=angulo*PI/180;
    resultado=cos(radianes);
    resultado=round(resultado*10000)/10000;
    cout<<
    return 0;
}
/*int main (){
    double base, exponente, resultado;

    cout<<"potencia de un numero\n\n";

    cout<<"ingrese la base: ";
    cin>>base;
    cout<<"ingrese el exponente: ";
    cin>>exponente;

    resultado= pow(base,exponente);
    cout<<"el resultado de esta potencia es: "<<resultado;

}*/
/*
int main(){
    double semilla, numero;
    cout<<"**generador de numeros aleatorios**";
    semilla=time(NULL);
    srand(semilla);
    numero=rand()%25+25; //el modulo nos determina el rango
    cout<<"su numero aleatorio es: "<<numero<<endl<<endl;
}
*/
 //Generar un angulo aleatorio entre 45 y 135, sacamos seno, mantenemos 5 decimales redondeo hacia arriba
    //Generar un angulo aleatorio entre -60 y 60, sacamos coseno, mantenos 3 decimales y redondeamos hacia abajo

/*int main (){
        cout<<"**angulo aleatorio con seno**"<<endl;
        double semilla, angulo, resultado, radian, redondeo;
        srand (time (NULL));

        angulo=rand()%90+45;
        radian=(angulo*PI)/180;
        resultado=sin(radian);
        redondeo= ceil(resultado*100000)/100000;

        cout<<endl<<angulo;
        cout<<"\nel seno del angulo es: "<<redondeo<<endl;

return 0;
}*/
/*int main (){
    cout<<"**angulo aleatorio con coseno**"<<endl;
    double semilla, angulo, resultado, radian, redondeo;
    srand (time (NULL));

    angulo=rand()%120-60;
    radian=(angulo*PI)/180;
    resultado=cos(radian);
    redondeo= floor(resultado*1000)/1000;

    cout<<endl<<angulo;
    cout<<"\nel coseno del angulo es: "<<redondeo<<endl;

return 0;
}*/

