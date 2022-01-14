#include <iostream>

using namespace std;

int main()
{
    cout << "***UN PUNTO DE NUMEROS PERFECTOS***\n"<<endl;
    int x,y,numPer,aux=0,aux2;
    do{
    cout << "Digite un numero: " << endl; cin>>x;
    cout << "Digite otro numero: " << endl;cin>>y;
    }   while ((x<=0 || y<=0)||x>y);

    cout<<"\nlos numeros entre esos dos numeros son: \n";
    for (int i = x;i<=y;i++){
        aux2=0;
        aux=0;
        numPer=i;
        for(int a=1;a<i;a++){
            if(numPer%a==0){aux2=a;
                    aux=aux + aux2;
}
        }
        if (aux==numPer){cout<<"\nel numero "<<i<<" es perfecto"<<endl;}
}
    cout<<endl;
    system("pause");
    return 0;
}
/*#include <iostream>

using namespace std;
Desarrollar un programa en C++ que solicite a un usuario dos números,
controlando que sean mayores a cero y que el segundo sea mayor que el primero,
por último liste los números perfectos que se encuentran entre esos
dos números (incluyéndolos).

int main()
{
    cout << "***UN PUNTO DE NUMEROS PERFECTOS***\n"<<endl;
    int x,y,numPer,aux=0,aux2;
    do{
    cout << "Digite un numero: " << endl; cin>>x;
    cout << "Digite otro numero: " << endl;cin>>y;
    }while ((x<=0 || y<=0)||x>y);

//numeros que se encuentran entre esos dos
cout<<"\nlos numeros entre esos dos numeros son: \n";
for (int i = x;i<=y;i++){
        cout <<" | "<< i ;
        //hallar los numeros perfectos
        //recorre del 1 hasta el num que vaya i
        aux2=0;
        aux=0;
        for(int a=1;a<i;a++){
            //si
            if(numPer%a==0){aux2=a;}
            cout<<"\nel modulo de dividir "<<numPer<<" entre "<<a<<" es "<<numPer%a;
                    aux=aux + aux2;
                    cout<<aux<<" ";
        }
        cout<<"----"<<numPer<<"-----"<<endl;
        if (aux==numPer){cout<<"el numero "<<i<<" es perfecto"<<endl;}


}
*/
