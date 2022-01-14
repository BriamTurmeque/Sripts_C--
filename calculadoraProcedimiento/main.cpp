#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;
string nombreArchivo;
int main()
{
    //para escribir en el archivo de texto
    ofstream archivo;
    //para leer el archivo de texto
    ifstream archivo2;
    string textoLeido;
     float resOperacion,num=0,num2=0,res;
     int comprobar=1;
    cout<<"Digite el nombre del archivo(recuerde que termina en .txt): ";getline(cin,nombreArchivo);

    cout<<"\nCALCULADORA CON REGISTRO"<<endl;
    cout<<"1. suma\n2. resta\n3. multiplicacion\n4. division\n\n0. SALIR"<<endl;
//la diferencia entre out y app, es que out me reescribe todo lo que ya esta escrito en el archivo, en cambio app solo añade texto
    archivo.open(nombreArchivo,ios::app);//abriendo el archivo para escritura
    if (archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
        num=0;num2=0;
        cout<<"Digite un numero: ";
        cin>>num;
         res= res+num+num2;
         int i = 1;
    while (comprobar!=0){
    while (comprobar<5 && comprobar>0){
            if (i==1){archivo<<res;}
            else {archivo<<num2;}
            i =0;
        cout<<"Que operacion desea realizar: ";cin>>comprobar;
        switch (comprobar){
        case 1: archivo<<" + ";cout<<"Digite un numero: ";cin>>num2;res+=num2;break;
        case 2: archivo<<" - ";cout<<"Digite un numero: ";cin>>num2;res-=num2;break;
        case 3: archivo<<" * ";cout<<"Digite un numero: ";cin>>num2;res*=num2;break;
        case 4: archivo<<" / ";cout<<"Digite un numero: ";cin>>num2;res/=num2;break;
        default: break;
        num=0;num2=0;}}}
        archivo<<"\nEl resultado es: "<<res<<"\n"<<endl<<endl;

    archivo.close();
    archivo2.open(nombreArchivo,ios::in);
        if (archivo.fail()){
        cout<<"No se pudo abrir el archivo";exit(1);
    }
        while (!archivo2.eof()){//mientras no sea el final del archivo, quiero que me siga recorriendo todo el archivo
        //recordemos que el primer parametro es de donde queremos sacar la informacion, y el segundo es la variable donde se va a guardar
        getline(archivo2,textoLeido);


    }
            cout<<"\nEl resultado es: "<<res<<endl;
archivo2.close();

    return 0;
}

