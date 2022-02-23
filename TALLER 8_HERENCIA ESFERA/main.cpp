#include <iostream>

using namespace std;

// codigo desarrollado por Briam Turmeque y Sebastian Tellez
// codigo estudiantil: 161004629

#define PI 3.1416

class Circulo
{

protected:
    float radio;

public:

    Circulo()
    {
        radio = 0.0;
    }

    Circulo(float radio)
    {
        Circulo::radio = radio;
    }

    float getRadio()
    {
        return radio;
    }
    void setRadio(float radio)
    {
        Circulo::radio = radio;
    }

    float getPerimetro()
    {
        float perimetro = (2 * PI * radio);
        return perimetro;
    }

    float getArea()
    {
        float area = (PI * (radio * radio));
        return area;
    }

    friend ostream &operator<<(ostream &output, Circulo &c)
    {
        output << "Circulo:\n\n- Lado: " << c.getRadio() << "\n- Area: "<< c.getArea() << "\n- Perimetro: " << c.getPerimetro() << endl;
        return output;
    }

};

class Esfera: public Circulo
{

public:
    Esfera()
    {
        radio = 0.0;
    }
    Esfera(float radio)
    {
        Esfera::radio = radio;
    }
    float getSuperficie()
    {
        float superficie = (4 * PI * (radio * radio));
        return superficie;
    }

    float getVolumen()
    {
        float volumen = (1.333 * PI * (radio * radio * radio));
        return volumen;
    }

    friend ostream &operator<<(ostream &output, Esfera &c)
    {
        output << "Esfera:\n\n- Radio: " << c.getRadio() << "\n- Superficie: "<< c.getArea() << "\n- Volumen: " << c.getVolumen() << endl << endl;
        return output;
    }

};

int main ()
{
    Circulo c1 = Circulo (10.5);
    Circulo c2 = Circulo (7.90);
    Esfera e1 = Esfera(5.5);
    Esfera e2 = Esfera (9);
    
    system("cls");
    cout << "____________________________\n\nRESULTADOS DE LOS CIRCULOS\n____________________________\n\n";
    cout << c1 << endl;
    cout << c2 << endl;
    cout << "____________________________\n\nRESULDADOS DE LAS ESFERAS\n____________________________\n\n";
    cout << e1 << endl;
    cout << e2 << endl;

    return 0;
}
