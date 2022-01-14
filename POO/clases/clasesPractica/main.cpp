#include <iostream>
#include <stdlib.h>

using namespace std;

class rectangulo{
private:
    float largo,ancho,lad1,lad2,lad3;
public:
    rectangulo(float,float);
    void perimetro();
    void area();
};
rectangulo::rectangulo(float _largo,float _ancho){
    largo = _largo;
    ancho = _ancho;
}
void rectangulo::perimetro(){
    float res;
    cout << "\nDigite el largo del lado 1 del triangulo: ";
    cin>>lad1;
    cout << "Digite el largo del lado 2 del triangulo: ";
    cin>>lad2;
    cout << "Digite el largo del lado 3 del triangulo: ";
    cin>>lad3;
    res=lad1+lad2+lad3;
    cout<<"El perimetro de su triangulo es "<<res<<endl;
}
void rectangulo::area(){
    float res;
    res= largo*ancho;
    cout<<"El area del triangulo es "<<res;

}

int main()
{
    float _ancho,_largo,_ancho2,_largo2;
    cout<<"Digite el ancho de su primer triangulo triangulo: ";
    cin>>_ancho;
    cout<<"Digite el largo de su primer triangulo triangulo: ";
    cin>>_largo;
    rectangulo rect1(_ancho,_largo);

    cout<<"Digite el ancho de su segundo triangulo triangulo: ";
    cin>>_ancho2;
    cout<<"Digite el largo de su segundo triangulo triangulo: ";
    cin>>_largo2;
    rectangulo rect2(_largo2,_ancho2);

    rect1.area();
    rect1.perimetro();
    rect2.perimetro();
    system ("pause");
    return 0;
};
