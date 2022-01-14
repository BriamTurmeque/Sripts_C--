#include <iostream>
using namespace std;
int main ()
{   bool comprobante=false;
int contador=0,cantidadMateriles[5],canMatpedido,res;
    string buscar,materiales[5];
    cout<<"Digite el material que desea averiguar la disponibilidad y que cantidad: "<<endl;cin>>buscar>>canMatpedido;
    cout<<"escriba los 5 materiales en bodega y su cantidad: "<<endl;
    for (int i = 0;i< 5;i++){
        cin>>materiales [i]>>cantidadMateriles[i];
    }

    while (comprobante == false || contador < 5){
            if (buscar==materiales[contador]){cout<<endl<<"se encontro la coincidencia"<<endl;break;}
            else{cout<<endl<<buscar<<" es diferente de "<<materiales[contador]<<endl;}

    contador++;}
cout<<endl<<"La coincidencia de la palabra esta en la posicion "<<contador+1<<endl;
res= cantidadMateriles [contador]-canMatpedido;
cantidadMateriles[contador]= res;

if (res<0){cout<<"no tenemos los materiales suficientes para suplir su pedido"<<endl;}
cout<<endl<<"la cantidad de material que queda de ese producto es: "<<cantidadMateriles[contador]<<endl;
    for (int i = 0;i< 5;i++){
        cout<<materiales [i]<<" "<<cantidadMateriles[i]<<endl;
    }
cout<<endl;
    return 0;
}
