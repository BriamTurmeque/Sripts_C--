//clases en C++
#include <iostream>
#include <stdlib.h>

using namespace std;
//una clase se llama con "class"
class persona{
    //atributos (caracteristicas)
    //ponemos el private para que nadie pueda jugar con estos datos, los unicos que pueden
    //hacer esto son los metodos
    private:
        int edad;
        string nombre;
    //metodoos (acciones)
    public:
        //el metodo constructor nos ayuda a inicializar nuestras variables, por lo general
        //tiene el mismo nombre que la clase, y sus parametros son los metodos que queremos inicializar
        persona(int,string);
        void leer();
        void correr();

    };
//INICIALIZAMOS TODOS LOS METODOS

//aqui inicializamos el constructor, este nos sirve para inicializar los
//atribitos, class :: constructor, y en los paramentros usualmento colocamos variables
//diferentes a las que pusimos anteriormente
persona::persona(int _edad,string _nombre){
    edad = _edad;
    nombre = _nombre;
}

//estoy indicando que el metodo leer pertenece a la clase persona
void persona::leer(){
    cout <<"Soy "<<nombre<< " y estoy leyendo un libro.\n"<<endl;
}
//estoy indicando que el metodo correr pertenece a la clase persona
void persona::correr(){
    cout<<"Soy "<<nombre<<" y esto corriendo."<<" Tengo "<<edad<<" años\n";
}

int main()
{
    int edad;
    //creamos un objeto, de la clase persona, lo nombramos y le pasamos parametros
    //se pueden pasar parametros de 2 formas.

    //1.
    persona p1= persona (17,"Felipe");
    //2.
    persona p2(19,"Carlos");
    persona p3(25,"Alejandro");

    //si quiero llamar a uno de los metodos, sigo la siguiente estructura
    //nombre.metodo que queremos que haga.
    p1.leer();
    p2.correr();
    p3.leer();
    p3.correr();
    cout<<endl;
    edad= edad+15;
    cout<<edad<<endl;
    system("pause");
    return 0;
}
