#include <iostream>
#include <stdlib.h>

using namespace std;
class tiempo{
private:
    int horas,minutos,segundos;
public:
    tiempo(int,int,int);
    tiempo(long);
    void mostrarHora();
};
//constructor 1
tiempo::tiempo(int _horas,int _minutos, int _segundos){
horas= _horas;
minutos= _minutos;
segundos= _segundos;

}
//constructor 2
tiempo::tiempo(long _segundo){
float aux,aux2;
//transformar de segundos a minutos a horas.
horas = int ((_segundo/60)/60);
aux= (_segundo-((horas*60)*60));
aux2=aux/60;
aux= int (aux2);
minutos=aux;
aux2=aux2-aux;
aux2= aux2*60;
segundos=aux2;



}
void tiempo::mostrarHora(){
cout<<"\nEl tiempo es:\n----> "<<horas<<":"<<minutos<<":"<<segundos<<endl;
}
int main()
{
    tiempo hoy(11,16,30);
    tiempo hoy2(40590);
    hoy.mostrarHora();
    hoy2.mostrarHora();


    cout<<endl;
    system ("pause");
    return 0;
}
