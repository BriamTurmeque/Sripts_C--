#include <iostream>
using namespace std;

#define PI 3.14

// interface
class forma2D{
    public:
        virtual float getArea()= 0;
        virtual float getPerimetro() = 0;
};

class forma3D{
    public:
        virtual float getSuperficie() = 0;
        virtual float getVolumen() = 0;

};

class circulo: public forma2D{
    protected:
        float radio;
    public:
    circulo(){
        radio = 0.0;
    }

    circulo(float radio){
        circulo::radio = radio;
    }

    float getRadio (){
        return radio;
    }

    void setRadio(float radio){
        circulo::radio = radio;
    }
        float getPerimetro() override{
            float perimetro = 2 * PI * radio;
            return perimetro;
        }
        float getArea() override{
            float area = 0;
            area =  PI * radio * radio;
            return area;
        }

    friend ostream &operator<< (ostream &output, circulo &c){
        output << "\nCirculo: \n\nRadio: " << c.radio << "\nArea: " << c.getArea() << "\nPerimetro: " << c.getPerimetro() << endl;
        return output;
    }
};

class cilindro:public circulo, public forma3D{
private:
    float altura;
public:
    cilindro(){
        altura = 0.0;
        radio = 0.0;
    }

    cilindro(float altura, float radio): circulo(radio){
        cilindro::altura = altura;
        cilindro::radio = radio;
    }


    float getAltura(){
    return altura;}

    void setAltura(float altura){
        cilindro::altura = altura;
    }

    float getSuperficie(){
        float superficie = 0.0;
        superficie = altura * getArea();
    return superficie;
    }

    float getVolumen(){
        float volumen = 0.0;
        volumen = getArea() * altura;
        return volumen;
    }
    friend ostream &operator<<(ostream &eresLaVergaChamoXD, cilindro &c){

        eresLaVergaChamoXD << "\nCilindro: \n\naltura: " << c.altura << "\nradio: " << c.radio << "\nvolumen: " << c.getVolumen() << "\nsuperficie: " << c.getSuperficie() << endl;
        return eresLaVergaChamoXD;
    }
};


int main (){

    circulo c = circulo(10);
    circulo c2 = circulo(2);
    cilindro cc = cilindro(6,9);
    cilindro cc2 = cilindro(6,5);

    cout << c << c2 << endl << cc << endl << cc2 << endl;
    return 0;
}
