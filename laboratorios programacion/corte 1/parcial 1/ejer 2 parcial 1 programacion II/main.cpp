#include <iostream>
#include <string>
#include <time.h>

//desarrollado por: Briam Turmeque y Diego Murcia

using namespace std;
class Evento {
public:

    //atributos
    string titulo;
    string fecha_comienzo;
    string fecha_finalizacion;
    int duracion;
    string descripcion;
    string categoria;

    //constructores
    Evento ()
    {
        string titulo= "";
        string fecha_comienzo= "";
        string fecha_finalizacion= "";
        int duracion=0;
        string descripcion="";
        string categoria="";
    }
    Evento(string newTitulo, string newInicio, string newFinal, int newDuracion, string newDescripcion,string newCategoria){
        string titulo = newTitulo;
        string fecha_comienzo = newInicio;
        string fecha_finalizacion = newFinal;
        int duracion = newDuracion;
        string descripcion = newDescripcion;
        string categoria = newCategoria;
    }

    //metodos
    void borrarDatos(){
        titulo = "";
        fecha_comienzo= "";
        fecha_finalizacion= "";
        duracion=0;
        descripcion="";
        categoria="";}

    void mostrarEvento(){
        cout << "Evento: \t" << titulo << endl;
        cout << "Inicia: \t" << fecha_comienzo << endl;
        cout << "Finaliza: \t" << fecha_finalizacion << endl;
        cout << "Duracion: \t" << mostrarDuracion() << endl;
        cout << "Categoria: \t" << categoria << endl;
        cout << "Descripcion: \t" << endl << descripcion << endl << endl;
    }

    string mostrarDuracion(){
    int horas,minutos;
    horas = duracion/60;
    minutos = duracion%60;
    string texto;
    texto =  to_string(horas) + " h " + to_string(minutos) + " min";
    return texto ;
    }

    };

void titulo (){

    cout << "###########################################" << endl;
    cout << "###  SISTEMA GESTION DE AGENDA PERSONAL ###" << endl;
    cout << "###########################################" << endl << endl;

}
void mostrarTodosEventos(Evento e1, Evento e2, Evento e3, Evento e4){

    titulo();
    cout << "          Eventos en la agenda" << endl << endl;
    if (e1.titulo != ""){e1.mostrarEvento();} else {cout << "evento vacio" << endl << endl;}
    if (e2.titulo != ""){e2.mostrarEvento();} else {cout << "evento vacio" << endl << endl;}
    if (e3.titulo != ""){e3.mostrarEvento();} else {cout << "evento vacio" << endl << endl;}
    if (e4.titulo != ""){e4.mostrarEvento();} else {cout << "evento vacio" << endl << endl;}
    cout<<endl;
    system("pause");
    system("cls");



}
int mostrarEventoCreacion(Evento e1, Evento e2, Evento e3, Evento e4){
    int aux;
    titulo();
    cout << "          Creacion evento" << endl << endl;
    if (e1.titulo != ""){e1.mostrarEvento();} else {cout << "1.evento vacio" << endl << endl;}
    if (e2.titulo != ""){e2.mostrarEvento();} else {cout << "2.evento vacio" << endl << endl;}
    if (e3.titulo != ""){e3.mostrarEvento();} else {cout << "3.evento vacio" << endl << endl;}
    if (e4.titulo != ""){e4.mostrarEvento();} else {cout << "4.evento vacio" << endl << endl;}
    cout<<endl;

    cout <<"que evento desea modificar? ";cin>>aux;
    system("pause");
    system("cls");

return aux;

}
int eliminarEventos(Evento e1, Evento e2, Evento e3, Evento e4){
    system("cls");    titulo();
    int aux;
    cout << "          Eliminar evento" << endl << endl;
    if (e1.titulo != ""){cout<<"1." << e1.titulo<<endl;} else {cout << "1.evento vacio" << endl ;}
    if (e2.titulo != ""){cout<<"2." << e2.titulo<<endl;} else {cout << "2.evento vacio" << endl ;}
    if (e3.titulo != ""){cout<<"3." << e3.titulo<<endl;} else {cout << "3.evento vacio" << endl ;}
    if (e4.titulo != ""){cout<<"4." << e4.titulo<<endl;} else {cout << "4.evento vacio" << endl ;}
    cout<<endl;

    cout << "a que evento desea eliminar? ";cin>>aux;
    cout << endl;
    system("pause");
    system("cls");

return aux;
}

int mostrarNombreEventos(Evento e1, Evento e2, Evento e3, Evento e4){
    system("cls");
    titulo();
    int aux;
    cout << "          crear Eventos" << endl << endl;
    if (e1.titulo != ""){cout<<"1." << e1.titulo<<endl;} else {cout << "1.evento vacio" << endl ;}
    if (e2.titulo != ""){cout<<"2." << e2.titulo<<endl;} else {cout << "2.evento vacio" << endl ;}
    if (e3.titulo != ""){cout<<"3." << e3.titulo<<endl;} else {cout << "3.evento vacio" << endl ;}
    if (e4.titulo != ""){cout<<"4." << e4.titulo<<endl;} else {cout << "4.evento vacio" << endl ;}
    cout<<endl;

    cout << "a que evento desea crear? ";cin>>aux;
    cout << endl;
    system("pause");
    system("cls");
return aux;
}

int mostrarNombreEventosModificar(Evento e1, Evento e2, Evento e3, Evento e4){
    system("cls");
    titulo();
    int aux;
    cout << "          modificar eventos" << endl << endl;
    if (e1.titulo != ""){cout<<"1." << e1.titulo<<endl;} else {cout << "1.evento vacio" << endl ;}
    if (e2.titulo != ""){cout<<"2." << e2.titulo<<endl;} else {cout << "2.evento vacio" << endl ;}
    if (e3.titulo != ""){cout<<"3." << e3.titulo<<endl;} else {cout << "3.evento vacio" << endl ;}
    if (e4.titulo != ""){cout<<"4." << e4.titulo<<endl;} else {cout << "4.evento vacio" << endl ;}
    cout<<endl;

    cout << "a que evento desea modificar? ";cin>>aux;
    cout << endl;
    system("pause");
    system("cls");
return aux;
}


void mostrarCategorias (string cate[]){
cout << "1. " << cate[0];
cout <<  endl << "2. " << cate[1];
cout <<  endl << "3. " << cate[2];
cout <<  endl << "4. " << cate[3] << endl;
}
int main()
{
    string categorias [4] = {"oficina", "estudio", "personal","familiar"};
    string categoriasInt [4] = {"0","1","2","3"};
    Evento e1;
    Evento e2;
    Evento e3;
    Evento e4;

    int aux = 0;
    while (aux != 5){
        system("cls");
        titulo();
        cout << "Menu: " << endl << endl;
        cout << "1. Mostrar todos los eventos " << endl;
        cout << "2. Crear eventos  " << endl;
        cout << "3. Modificar eventos" << endl;
        cout << "4. Eliminar eventos  " << endl;
        cout << "5. Salir  " << endl << endl;

        cout << "Que desea realizar? ";cin >>aux;

        switch (aux){

            case 1: system("cls"); mostrarTodosEventos(e1, e2, e3, e4);break;
            case 2:{system("cls");
                int aa = mostrarNombreEventos(e1, e2, e3, e4);
                titulo();
                string titulonuevo;
                string fechaInicionuevo;
                string fechaFinalizacionnuevo;
                int duracionnuevo;
                string categorianuevo;
                string descripcionnuevo;
                cout << "Titulo: ";getline(cin,titulonuevo);getline(cin,titulonuevo);
                cout << "Fecha_inicio: ";getline(cin,fechaInicionuevo);
                cout << "Fecha_finalizacion: ";getline(cin,fechaFinalizacionnuevo);
                cout << "duracion: ";cin >> duracionnuevo;
                string cat = "denegada";
                mostrarCategorias(categorias);

                while (cat!="aprobada"){
                cout << "categoria: "; cin >> categorianuevo;
                for (int a = 0; a<4;a++){
                    if (categorianuevo==categoriasInt[a]){
                        cat = "aprobada";
                        }
                    }
                    if (categorianuevo == categoriasInt[0]){categorianuevo=categorias[0];}
                    if (categorianuevo == categoriasInt[1]){categorianuevo=categorias[1];}
                    if (categorianuevo == categoriasInt[2]){categorianuevo=categorias[2];}
                    if (categorianuevo == categoriasInt[3]){categorianuevo=categorias[3];}
                    }
                cout << "descripcion: ";getline(cin,descripcionnuevo);getline(cin,descripcionnuevo);
                switch(aa){
                        case 1: {e1.titulo = titulonuevo; e1.fecha_comienzo = fechaInicionuevo; e1.categoria = categorianuevo; e1.duracion= duracionnuevo; e1.fecha_finalizacion = fechaFinalizacionnuevo; e1.descripcion = descripcionnuevo;break;}
                        case 2: {e2.titulo = titulonuevo; e2.fecha_comienzo = fechaInicionuevo; e2.categoria = categorianuevo; e2.duracion= duracionnuevo; e2.fecha_finalizacion = fechaFinalizacionnuevo; e2.descripcion = descripcionnuevo;break;}
                        case 3: {e3.titulo = titulonuevo; e3.fecha_comienzo = fechaInicionuevo; e3.categoria = categorianuevo; e3.duracion= duracionnuevo; e3.fecha_finalizacion = fechaFinalizacionnuevo; e3.descripcion = descripcionnuevo;;break;}
                        case 4: {e4.titulo = titulonuevo; e4.fecha_comienzo = fechaInicionuevo; e4.categoria = categorianuevo; e4.duracion= duracionnuevo; e4.fecha_finalizacion = fechaFinalizacionnuevo; e4.descripcion = descripcionnuevo;break;}
                    }
                 system("cls");break;}
            case 3:{
                int aa= mostrarNombreEventosModificar(e1,e2,e3,e4);
                int b=aa;

                system("cls");
                titulo();
                cout << "\tmodificar evento" << endl ;
                if (aa==1){cout <<"\t" <<  e1.titulo;}
                if (aa==2){cout <<"\t" <<  e2.titulo;}
                if (aa==3){cout <<"\t" <<  e3.titulo;}
                if (aa==4){cout <<"\t" <<  e4.titulo;}

                cout << endl << endl << "1. Titulo" << endl;
                cout <<"2. Fecha inicio " << endl;
                cout <<"3. Fecha final " << endl;
                cout <<"4. Categoria " << endl;
                cout <<"5. Descripcion " << endl;
                int mod= 0;
                    cout << endl << "que dato desea modificar? "; cin >> mod;
                        string titulo;

                    switch (mod){
                        case 1: {
                            cout<<"Digite el titulo: ";
                            if (aa==1){getline(cin,e1.titulo);getline(cin,e1.titulo);break; }
                            if (aa==2){getline(cin,e2.titulo);getline(cin,e2.titulo);break;}
                            if (aa==3){getline(cin,e3.titulo);getline(cin,e3.titulo);break;}
                            if (aa==4){getline(cin,e4.titulo);getline(cin,e4.titulo);break;}
                         }
                        case 2:{
                            cout<<"Digite la fecha de inicio: ";
                            if (aa==1){getline(cin,e1.fecha_comienzo);getline(cin,e1.fecha_comienzo);break; }
                            if (aa==2){getline(cin,e2.fecha_comienzo);getline(cin,e2.fecha_comienzo);break;}
                            if (aa==3){getline(cin,e3.fecha_comienzo);getline(cin,e3.fecha_comienzo);break;}
                            if (aa==4){getline(cin,e4.fecha_comienzo);getline(cin,e4.fecha_comienzo);break;}
                        }
                        case 3:{
                            cout<<"Digite la fecha final: ";
                            if (aa==1){getline(cin,e1.fecha_finalizacion);getline(cin,e1.fecha_finalizacion);break; }
                            if (aa==2){getline(cin,e2.fecha_finalizacion);getline(cin,e2.fecha_finalizacion);break;}
                            if (aa==3){getline(cin,e3.fecha_finalizacion);getline(cin,e3.fecha_finalizacion);break;}
                            if (aa==4){getline(cin,e4.fecha_finalizacion);getline(cin,e4.fecha_finalizacion);break;}}
                        case 4:{
                            cout<<"Digite la categoria: ";
                            if (aa==1){getline(cin,e1.categoria);getline(cin,e1.categoria);break; }
                            if (aa==2){getline(cin,e2.categoria);getline(cin,e2.categoria);break;}
                            if (aa==3){getline(cin,e3.categoria);getline(cin,e3.categoria);break;}
                            if (aa==4){getline(cin,e4.categoria);getline(cin,e4.categoria);break;}}
                        case 5:{
                            cout<<"Digite la descripcion: ";
                            if (aa==1){getline(cin,e1.descripcion);getline(cin,e1.descripcion);break; }
                            if (aa==2){getline(cin,e2.descripcion);getline(cin,e2.descripcion);break;}
                            if (aa==3){getline(cin,e3.descripcion);getline(cin,e3.descripcion);break;}
                            if (aa==4){getline(cin,e4.descripcion);getline(cin,e4.descripcion);break;}}
                }system("cls");break;break;}
            case 4:{int aa = eliminarEventos(e1, e2, e3, e4);
                    switch(aa){
                        case 1: e1.borrarDatos();break;
                        case 2: e2.borrarDatos();break;
                        case 3: e3.borrarDatos();break;
                        case 4: e4.borrarDatos();break;
                    }}}}
    return 0;
}
