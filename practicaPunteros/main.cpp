#include <iostream>

using namespace std;


void mostrar(int*, int,int);
int main (){
int mat1[3][3]={{1,3,4},{5,6,7},{6,8,9}};
int *p1;
p1=&mat1[0][0];
mostrar(p1,3,3);

    return 0;
}

void mostrar(int *pp, int n,int m){
     cout<<"Su matriz es: \n";
    for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
        cout<<*pp<<" ";
        pp++;
    }
    cout<<endl;}
    cout<<endl;
}









//-------------------------------
/*#include <iostream>

using namespace std;
void multiplicar(int*,int,int);
void restar(int*, int*,int);
void mostrar(int*, int);
void llenar(int*, int);
void menor(int*,int*,int);
void multiplicar(int*,int*,int,int);
int main()
{
 int vec1[5];
 int vec2[5];

 int *p1;
 int *p2;


 p1=&vec1[0];
 p2=&vec2[0];
 llenar(p1,5);
  mostrar(p1,5);
 llenar(p2,5);
  mostrar(p2,5);
 menor(p1,p2,5);
 restar(p1,p2,5);
 multiplicar(p1,3,5);
 multiplicar(p1,p2,5,5);
 mostrar(p2,5);
    return 0;
}

void mostrar(int *pp, int t){
     cout<<"Su vector es: [";
    for(int i=0;i<t;i++){
        cout<<*pp<<" ";
        pp++;
    }
    cout<<"]"<<endl;
}

void llenar(int *pp, int t){
    for(int i=0;i<t;i++){
        cout<<"Ingrese el valor de la pos "<<i<<" :";
        cin>>*pp;
        pp++;
        }
}
void menor(int *pp1,int*pp2,int t){
     cout<<"Su vector menor  es: [";
    for(int i=0;i<t;i++){

       if(*pp1>*pp2){
         cout<<*pp2<<" ";
       }
       else{
         cout<<*pp1<<" ";
       }
        pp1++;
        pp2++;

    }
    cout<<"]"<<endl;
}
void restar(int *pp1, int *pp2, int t){
     cout<<"Su vector restado es: [";
    for(int i=0;i<t;i++){
        cout<<*pp1-*pp2<<" ";
        pp1++;
        pp2++;
    }
    cout<<"]"<<endl;
}
void multiplicar(int *pp1, int mult, int t){
     cout<<"Su vector multiplicado por "<<mult<<" es: [";
    for(int i=0;i<t;i++){
        cout<<*pp1*mult<<" ";
        pp1++;
    }
    cout<<"]"<<endl;
}

void multiplicar(int *pp1, int *pp2,int mult, int t){
    for(int i=0;i<t;i++){
            *pp2= *pp1 * mult;
    pp1++;
    pp2++;
    }
}
*/
