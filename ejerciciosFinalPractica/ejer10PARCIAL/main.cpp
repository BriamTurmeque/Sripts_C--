#include <iostream>

using namespace std;

int main()
{
//Escribir un programa que lea una frase introducida desde el teclado, la guarde en un string y mediante un algoritmo la imprima por pantalla al revés.
 /*  cout<<"DIGITE UNA FRASE: "<<endl;
   string frase;
   int aux;
   getline(cin,frase);
   for (int i =0 ; i<frase.size();i++){
        for (int a = 0; a<i;a++){
            if (frase  [a]>frase[i]){
                aux = frase[a];
                frase [a]= frase[i];
                frase  [i] = aux;
            }
        }
   }
   cout<<"\nLa frase es: "<<frase;


    return 0;
*/
    cout<<"Digite la frase que desea invertir: ";
   string frase;
   int aux;
   getline(cin,frase);
   int a= frase.size();

   for (int i =0 ; i<frase.size();i++){
            cout<<"este es i: "<<i<<endl;
            cout<<"este es a: "<<a<<endl;

            aux= frase[i];
            frase[i]= frase[a];
            frase [a]= aux;


            a--;
            }

        cout<<"La palabra al reves es "<<frase;
        return 0;
   }

