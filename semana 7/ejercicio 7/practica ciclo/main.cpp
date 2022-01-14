#include <iostream>

using namespace std;

int main()
{
int x,y,aux=0,total, par=0; //y mayor a x
 do{ cout<<"Digite un numero: ";
  cin>>x;
  cout<<"Digite otro numero: ";
  cin>>y;
  cout<<endl;}
  while(x>y);
  cout<<x<<" y "<<y<<" "<<endl;

for (x;x<y;x=x+7){
   aux+=1;
    cout<<x<<" ";
    if(x%2==0){par+=1;}
    else {total+=x;}
}

   cout<<"\nLa cantidad de numeros que hay son: "<<aux<<endl;
   cout<<par<<" numeros son pares\n";
   cout<<"La suma de los numeros impares es: "<<total;
cout<<endl;
    return 0;
}
