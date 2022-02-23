#include <iostream>

using namespace std;

class Punto{
private:
    float x,y,a;
public:
    Punto(){
        x = y = 0.0;
    }
    Punto(float x, float y){
    Punto::x = x;
    Punto::y = y;
    }

    float getX(){
    return x;}

    float getY(){
    return y;}

    float getA(){
    return a;}
    void setA(float a){
    Punto::a = a;}

    void setX(float x){
    Punto::x = x;
    }

    void setY(float y){
    Punto::y = y;
    }

    Punto &operator + (Punto &p){
    p.x = x + p.x;
    p.y = y + p.y;
    return p;
    }

    Punto &operator - (Punto &p){
    p.x = x - p.x;
    p.y = y - p.y;
    return p;
    }

    Punto &operator * (Punto &p){
    p.x = a * p.x;
    p.y = a * p.y; 
    return p;
    }

    bool operator >(const Punto &p){
    return (x > p.x && y > p.y);
    }

    friend ostream &operator << (ostream &salida, Punto &p){

        salida << "-> las coordenadas son: ( "  << p.x << " ,  " << p.y << " )";
    return salida;}

    friend istream &operator >> (istream &entrada, Punto &p){
    cout << "Ingrese las coordenadas: \n- x = "; cin >> p.x;
    cout << "- y = ";cin >> p.y;
    }


};

int main()
{
    Punto p1;
    Punto p2;
    Punto p3;
    float a = 0;
    string aux;
    cout << "SISTEMA DE COORDENADAS\n\n1. Sumar coordenadas\n2. Restar coordenadas\n3. Multiplicar una coordenada\n4. Comparar coordenadas\n\n- Digite una opcion: "; cin >> aux;
    if (aux == "1"){
        system("cls");
        cout << "SUMA DE COORDENADAS\n\n";
        cout << "Coordenada 1: \n";
        cin >> p1;
        cout << "\nCoordenada 2: \n";
        cin >> p2;
        cout << "\n- Suma: " << (p1 + p2);

    }
    else if (aux == "2"){
        system("cls");
        cout << "RESTA DE COORDENADAS\n\n";
        cout << "Coordenada 1: \n";
        cin >> p1;
        cout << "\nCoordenada 2: \n";
        cin >> p2;
        cout << "\n- Suma: " << p1 - p2;
    }

    else if (aux == "3"){
        system("cls");
        cout << "MULTIPLICACION DE COORDENADAS\n\n";
        cout << "Numero a multiplicar: \n";
        cin >> a;
        p1.setA(a);
        cout << "\nCoordenada 2: \n";
        cin >> p2;
        cout << "\n- Suma: " << p1 * p2;
    }

    else if (aux == "4"){
        system("cls");
        cout << "COMPARARCION DE COORDENADAS\n\n";
        cout << "Coordenada 1: \n";
        cin >> p1;
        cout << "\nCoordenada 2: \n";
        cin >> p2;
        if (p1 > p2) { cout << "\nLa primera coordenada es mayor a la segunda";}
        else {cout << "\nEs mayor la segunda coordenada" ;}
    }


    return 0;
}
