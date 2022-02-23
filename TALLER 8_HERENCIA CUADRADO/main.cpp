#include <iostream>

using namespace std;

// codigo desarrollado por Briam Turmeque y Sebastian Tellez
// codigo estudiantil: 161004629

class Cuadrado
{

protected:
    float lado;

public:

    Cuadrado()
    {
        lado = 0.0;
    }

    Cuadrado(float lado)
    {
        Cuadrado::lado = lado;
    }

    float getLado()
    {
        return lado;
    }
    void setLado(float lado)
    {
        Cuadrado::lado = lado;
    }

    float getPerimetro()
    {
        float perimetro = lado * 4;
        return perimetro;
    }

    float getArea()
    {
        float area = lado * lado;
        return area;
    }

    friend ostream &operator<<(ostream &output, Cuadrado &c)
    {
        output << "Cuadrado:\n\n- Lado: " << c.getLado() << "\n- Area: "<< c.getArea() << "\n- Perimetro: " << c.getPerimetro() << endl;
        return output;
    }

};

class Cubo: public Cuadrado
{

public:
    Cubo ()
    {
        lado = 0.0;
    }
    Cubo(float lado)
    {
        Cubo::lado = lado;
    }
    float getArea()
    {
        float area = (6 * (Cubo::lado * Cubo::lado));

        return area;
    }

    float getVolumen()
    {
        float volumen = (lado * lado * lado);
        return volumen;
    }

    friend ostream &operator<<(ostream &output, Cubo &c)
    {
        output << "Cubo:\n\n- Lado: " << c.getLado() << "\n- Area: "<< c.getArea() << "\n- Volumen: " << c.getVolumen() << endl << endl;
        return output;
    }

};

int main ()
{
    Cuadrado c1 = Cuadrado (10.5);
    Cuadrado c2 = Cuadrado (7);
    Cubo e2 = Cubo (15.2);
    Cubo e1 = Cubo(5.5);

    system("cls");
    cout << "____________________________\n\nRESULTADOS DE LOS CUADRADOS\n____________________________\n\n";
    cout << c1 << endl;
    cout << c2 << endl;
    cout << "____________________________\n\nRESULDADOS DE LAS CUBOS\n____________________________\n\n";
    cout << e1 << endl;
    cout << e2 << endl;

    return 0;
}
