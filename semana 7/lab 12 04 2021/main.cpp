#include <iostream>

using namespace std;

int main()
{
    /*kaprekar 4 cifras
    1. ingrese un numero de 4 cifras (no pueden ser iguales)(6174 numero de kaprika)
    2. descomponerlo
    3. ordenarlo de mayor a menor
    4. ordenarlo de menor a mayor
    5. restarle al mayor el menor

    */
    int num,n[4],may,men,res,u,d,c,um,aux,i,j;
do{do{cout<<"ingrese un numero de 4 cifras(no todas iguales): ";
       cin>>num;
    }while(num<1 || num>10000);
    }while(num%1111==0);//hacer que no se repitan los numeros
do{

    //descomponerlo
    u=num%10;num=num/10;
    d=num%10;num=num/10;
    c=num%10;num=num/10;
    um=num%10;num=num/10;

    n[0]=u;
    n[1]=d;
    n[2]=c;
    n[3]=um;

    for (i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(n[j]>n[j+1]){
                aux= n[j];
                n[j]= n[j+1];
                n[j+1]= aux;}
            }
        }
    cout<<endl;
   cout<<"orden ascendente: ";
   for(i=0;i<4;i++){cout<<n[i];}
    cout<<endl;
    cout<<" "<<"orden descendente: ";
   for(i=3;i>=0;i--){cout<<n[i];}
    cout<<endl<<n[0]<<n[1]<<n[2]<<n[3];
    cout<<endl<<n[3]<<n[2]<<n[1]<<n[0];
    cout<<endl;
    res=((n[3]*1000)+(n[2]*100)+(n[1]*10)+(n[0]))-((n[0]*1000)+(n[1]*100)+(n[2]*10)+(n[3]));
    cout<<res;
    num=res;
    cout<<"--------> "<<num;

  }
while(res!=6174);

    return 0;
}
