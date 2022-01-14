#include <iostream>
#include <math.h>

using namespace std;
//prototipo
//tipo + nombre + (atributos);
float resolverEcuacionPos(float, float, float);
float resolverEcuacionNeg(float, float, float);

int main(){
double radio,area;
cin>>radio;
area= 3.14159 * (radio*radio);
cout<<"A="<<area<<endl;

    return 0;
}


    /*
float a,b,c,resPos,resNeg;
cout<<"PROGRAMA PARA RESOLVER LA ECUACION CUADRATICA"<<endl;
cout<<"Digite un valor para a: ";cin>>a;
cout<<"Digite un valor para b: ";cin>>b;
cout<<"Digite un valor para c: ";cin>>c;
resPos=resolverEcuacionPos(a,b,c);
resNeg=resolverEcuacionNeg(a,b,c);
cout<<"----------"<<endl;
cout<<"el valor de x con positivo es "<<resPos<<endl;
cout<<"el valor de x con negativo es "<<resNeg<<endl;

cout<<"----------"<<endl;

return 0;

}
float resolverEcuacionPos(float a1,float b1,float c1){
float resPos,x,aux,aux1;
aux=(b1*b1);
aux1=4*a1*c1;
    if ( aux< aux1){
        cout<<"el ejercicio no tiene solucion"<<endl;
    }

    else {
        x= (-b1+(sqrt((pow(b1,2))-(4*a1*c1))))/(2*a1);
        resPos=x;
    }

return resPos;
}

float resolverEcuacionNeg(float a1, float b1, float c1){
float resNeg,x,aux,aux1;
aux=(b1*b1);
aux1=4*a1*c1;
    if ( aux< aux1){
        cout<<"el ejercicio no tiene solucion"<<endl;
    }

    else {
        x= (-b1-(sqrt((pow(b1,2))-(4*a1*c1))))/(2*a1);
        resNeg=x;
    }

return resNeg;



return resNeg;
}
*/
/*
int main()
{
    int num,res;
    cout << "***PRACTICA DE FUNCIONES***" << endl;
    cout<<"ingrese un numero entero: ";cin>> num;
    res=sumar10(num);
    cout<<"ese numero mas 10 es: "<<res;

    return 0;
}

int sumar10(int x){
    int y;
    x +=10;
    return x;
}
*/
/*
int main(){
char Char;
int numChar;

cout<<"ingrese un caracter: ";cin>>Char;
numChar=Char;
cout<<"\nEl codigo ASCII de ese caracter es "<<numChar;
cout<<"---------------------"<<endl;
numChar+=20;
Char=numChar;

cout<<"ese char mas 20 es igual a "<<Char;



return 0;
}
*/
