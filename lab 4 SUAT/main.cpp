#include <iostream>

using namespace std;

//codigo elaborado por:
//      Briam Felipe Turmeque Roldan
//      Sebastian Tellez

class Estudiante {
    public:
        string nombre;
        int documento;
        string asignatura;
        double nota;

        crearEstudiante (){

            cout << "nombre: ";cin>>nombre;
            cout << "documento: ";cin>>documento;
            cout << "asignatura: ";cin>>asignatura;
            cout << "nota: ";cin>>nota;

        }

        mostrarDatos (Estudiante p){
            cout << "nombre: "<< p.nombre;
            cout << "\ndocumento: ";cout << p.documento;
            cout << "\nasignatura: ";cout << p.asignatura;
            cout << "\nnota: ";cout <<p.nota;
            if (nota>=30){cout<<"\naprobo";}
            else { cout << "\nno aprobo";
            }
            cout<<endl;
        }

        eliminarEstudiante(){
            nombre="";
            documento=0;
            asignatura="";
            nota=0;
        }

};

void mostrarTodosEstudiantes (Estudiante, Estudiante, Estudiante);


void mostrarItems();

int main(){

    Estudiante p1 = Estudiante();
    Estudiante p2 = Estudiante();
    Estudiante p3 = Estudiante();

    int a=0,est_creados=0;
    while(a != 5){
    system("cls");

    a+=1;
    cout << "Menu: \n\n1. Crear un estudiante" << endl;
    cout << "2. Modificar datos de estudiante" << endl;
    cout << "3. Mostrar datos estudiante" << endl;
    cout << "4. Eliminar estudiante" << endl;
    cout << "5. Salir " << endl;

    cout<<"\nQue desea realizar: ";cin>>a;


    switch (a){

         case 1: if (a==1 || est_creados < 4){

            if (est_creados==0){
                p1.crearEstudiante();
            }
            if (est_creados==1){

                p2.crearEstudiante();
            }
            if (est_creados==2){

                p3.crearEstudiante();

            }
            if (est_creados>=3) {
                    cout<<"No puede crear mas estudiantes\n";
                    system("pause");
            };

            est_creados +=1;
            break;

    }

    case 2: {
        system("cls");
        int estMod;
        int datoMod;
        mostrarTodosEstudiantes(p1,p2,p3);
        cout<<"que estudiante desea modificar: ";cin>>estMod;
        mostrarItems();
        cout << "Que dato desea modificar: "; cin>>datoMod;
        if (estMod==0){
            switch (datoMod){
                case 1: cout<<"nombre: ";cin>>p1.nombre;break;
                case 2: cout<<"documento: ";cin>>p1.documento;break;
                case 3: cout<<"asignatura: ";cin>>p1.asignatura;break;
                case 4: cout<<"nota: ";cin>>p1.nota;break;
            }
        }
        if (estMod==1){switch (datoMod){
                case 1: cout<<"nombre: ";cin>>p2.nombre;break;
                case 2: cout<<"documento: ";cin>>p2.documento;break;
                case 3: cout<<"asignatura: ";cin>>p2.asignatura;break;
                case 4: cout<<"nota: ";cin>>p2.nota;break;
            }}
        if (estMod==2){switch (datoMod){
                case 1: cout<<"nombre: ";cin>>p3.nombre;break;
                case 2: cout<<"documento: ";cin>>p3.documento;break;
                case 3: cout<<"asignatura: ";cin>>p3.asignatura;break;
                case 4: cout<<"nota: ";cin>>p3.nota;break;
            }}
            break;

    }


    case 3:
        int aux;
        system("cls");
        mostrarTodosEstudiantes(p1,p2,p3);

        cout<< "Que estudiante desea ver: ";cin>>aux;cout<<endl;
        system("cls");
            if (aux==0){
                if (p1.nombre ==""){cout<<"No hay estudiantes en ese registro\n";}
                else {p1.mostrarDatos(p1);}
            }
            if (aux==1){
                if (p2.nombre ==""){cout<<"No hay estudiantes en ese registro\n";}
                else {p2.mostrarDatos(p2);}
            }
            if (aux==2){
                if (p3.nombre ==""){cout<<"No hay estudiantes en ese registro\n";}
                else {p3.mostrarDatos(p3);}
                }
                cout<<endl;system("pause");
                cout<<endl;
                break;




    case 4: {
        int aux1;
        cout<<"Que estudiante desea eliminar: ";cin>>aux1;
            switch (aux1){
                case 1: p1.eliminarEstudiante();break;
                case 2: p2.eliminarEstudiante();break;
                case 3: p3.eliminarEstudiante();break;
            }
    }
    }}

return 0;
}

void mostrarTodosEstudiantes(Estudiante p1,Estudiante p2,Estudiante p3 ){
    cout <<"-------------\n";
    cout<<"(0)"<<p1.nombre<<endl;
    cout<<"(1)"<<p2.nombre<<endl;
    cout<<"(2)"<<p3.nombre<<endl;
    cout <<"-------------"<<endl;

}

void mostrarItems(){
    system("cls");
            cout << "Items: ";
            cout << "\n (1) nombre ";
            cout << "\n (2) documento ";
            cout << "\n (3) asignatura ";
            cout << "\n (4) nota \n";
        }
