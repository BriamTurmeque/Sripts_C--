#include <iostream>
using namespace std;
#include <conio.h>


void menu();
int main()
{
    float preciotransporte;
    int n5,n17;
    bool validar=false;
    int mat[22][3];//Esta matriz contiene los valores de las distancias entre las comunas
    string comuna5nombre[100],nombreproducto;
    int comuna5cantidad[100],comuna5precio[100],cantidadproducto,precioproducto,comuna;
    for (int i=0;i<22;i++)
        mat[i][0]=i+1;
    mat[0][1]=3;mat[0][2]=2;
    mat[1][1]=2;mat[1][2]=2;
    mat[2][1]=2;mat[2][2]=2;
    mat[3][1]=1;mat[3][2]=4;
    mat[4][1]=0;mat[4][2]=4;
    mat[5][1]=1;mat[5][2]=5;
    mat[6][1]=1;mat[6][2]=3;
    mat[7][1]=1;mat[7][2]=3;
    mat[8][1]=3;mat[8][2]=2;
    mat[9][1]=4;mat[9][2]=1;
    mat[10][1]=2;mat[10][2]=3;
    mat[11][1]=2;mat[11][2]=3;
    mat[12][1]=2;mat[12][2]=2;
    mat[13][1]=3;mat[13][2]=3;
    mat[14][1]=3;mat[14][2]=1;
    mat[15][1]=3;mat[15][2]=1;
    mat[16][1]=4;mat[16][2]=0;
    mat[17][1]=4;mat[17][2]=1;
    mat[18][1]=3;mat[18][2]=1;
    mat[19][1]=2;mat[19][2]=4;
    mat[20][1]=2;mat[20][2]=4;
    mat[21][1]=5;mat[21][2]=1;
    int id;
    string comuna17nombre[100];
    int comuna17cantidad[100],comuna17precio[100];
    while(id!=3)
    {
        cout<<"Bienvenido al sistema de la empresa proveedora de materiales"<<endl;
        cout<<"Ingrese su identificacion"<<endl;
        cout<<"Oprima 1 si es administrador"<<endl;
        cout<<"Oprima 2 si es cliente"<<endl;
        cout<<"Puede oprimir 3 para cerrar el programa"<<endl;
        cin>>id;
        system("cls");
        if(id==1)
        {
            int op;
            //opcion para el administrador
            cout<<"Bienvenido Administrador"<<endl;
            cout<<"Por favor ingrese el numero correspondiente a la accion que desea realizar"<<endl;
            cout<<"1.Ingresar los materiales de construccion de ambas bodegas"<<endl;
            cout<<"2. Visualizar los materiales existentes en cada bodega"<<endl;
            cout<<"3. Hacer los despachos de cada bodega, de acuerdo al material existente"<<endl;
            cin>>op;
            system("cls");
            switch(op)
            {
                case 1:
                    {
                            cout<<"Para iniciar con el programa, es necesario digitar la informacion pertinente"<<endl;
                            //Llenado de la bodega 5
                            cout<<"A continuacion digite la informacion de la bodega de la comuna 5 "<<endl;

                            cout<<"Ingrese cuantos productos diferentes existen en la bodega de la comuna 5"<<endl;

                            cin>>n5;
                            for(int i=0;i<n5;i++)
                            {
                                cout<<"Ingrese el nombre del producto #"<<i+1<<endl;
                                cin>>comuna5nombre[i];
                                cout<<"Ingrese la cantidad de productos del producto #"<<i+1<<endl;
                                cin>>comuna5cantidad[i];
                                cout<<"Ingrese el precio unitario del producto # "<<i+1<<endl;
                                cin>>comuna5precio[i];
                                system("pause");
                                system("cls");
                            }

                            //Llenado de la bodega 17
                            cout<<"A continuacion digite la informacion de la bodega de la comuna 17"<<endl;


                            cout<<"Ingrese cuantos productos diferentes existen en la bodega de la comuna 7"<<endl;

                            cin>>n17;
                            for(int i=0;i<n17;i++)
                            {
                                cout<<"Ingrese el nombre del producto #"<<i+1<<endl;
                                cin>>comuna17nombre[i];
                                cout<<"Ingrese la cantidad de productos del producto #"<<i+1<<endl;
                                cin>>comuna17cantidad[i];
                                cout<<"Ingrese el precio unitario del producto # "<<i+1<<endl;
                                cin>>comuna17precio[i];
                                system("pause");
                                system("cls");
                            }
                        break;
                    }
                case 2:
                    {
                        cout<<"Los materiales disponibles en cada bodega son: "<<endl;
                        cout<<"Bodega en la comuna 5:"<<endl;
                        for(int i=0;i<n5;i++)
                        {
                            cout<<comuna5nombre[i]<<"\t"<<comuna5cantidad[i]<<"\t"<<comuna5precio[i]<<endl;

                        }

                        cout<<"Los materiales disponibles en cada bodega son: "<<endl;
                        cout<<"Bodega en la comuna 17:"<<endl;
                        for(int i=0;i<n17;i++)
                        {
                            cout<<comuna17nombre[i]<<"\t"<<comuna17cantidad[i]<<"\t"<<comuna17precio[i]<<endl;

                        }
                        system("pause");
                        system("cls");
                        break;
                    }
                case 3:
                    {
                        float totalprecio=0;
                        cout<<"Despacho de bodega: "<<endl;
                        cout<<"Ingrese la bodega de la cual se ha de hacer el despacho: "<<endl;
                        int bodega;
                        cout<<"Seleccione 1 para la bodega 5, seleccione otro numero para la bodega 17"<<endl;
                        cin>>bodega;
                        if(bodega==1)
                        {
                            cout<<"Se ha seleccionado la bodega 5"<<endl;
                            cout<<"Ingrese cuantos productos diferentes va a despachar de esta bodega"<<endl;
                            int cantidad,cant;
                            cin>>cantidad;
                            for(int i=0;i<cantidad;i++)
                            {
                                cout<<"Ingrese el nombre del producto"<<endl;
                                cin>>nombreproducto;
                                    for(int i=0;i<n5;i++)
                                    {
                                        if(nombreproducto==comuna5nombre[i])
                                            validar=true;
                                    }
                                cout<<"Ingrese la cantidad de unidades que va a llevar de este producto: "<<endl;
                                cin>>cant;
                                float costo;
                                if(validar==false)
                                {
                                    cout<<"Este producto no se encuentra en el inventario, pero se puede conseguir de manera urgente..."<<endl;
                                    cout<<"Solo que ha de tener un sobrecosto del 5%"<<endl;
                                    cout<<"Ingrese el costo por unidad de dicho producto"<<endl;
                                    cin>>costo;
                                    totalprecio=(costo*cant);
                                    totalprecio=totalprecio+0.05*totalprecio;
                                }else
                                {
                                    cout<<"Ingrese el costo por unidad de dicho producto"<<endl;
                                    cin>>costo;
                                    totalprecio=(costo*cant);
                                }

                            }
                            cout<<"Ingrese a que comuna va el material"<<endl;
                            int comuna;
                            cin>>comuna;
                            preciotransporte=mat[comuna-1][1]*5000+1000;

                        }else
                        {
                            cout<<"Se ha seleccionado la bodega 17"<<endl;
                            cout<<"Ingrese cuantos productos diferentes va a despachar de esta bodega"<<endl;
                            int cantidad,cant;
                            cin>>cantidad;
                            for(int i=0;i<cantidad;i++)
                            {
                                cout<<"Ingrese el nombre del producto"<<endl;
                                cin>>nombreproducto;
                                    for(int i=0;i<n5;i++)
                                    {
                                        if(nombreproducto==comuna17nombre[i])
                                            validar=true;
                                    }
                                cout<<"Ingrese la cantidad de unidades que va a llevar de este producto: "<<endl;
                                cin>>cant;
                                float costo;
                                if(validar==false)
                                {
                                    cout<<"Este producto no se encuentra en el inventario, pero se puede conseguir de manera urgente..."<<endl;
                                    cout<<"Solo que ha de tener un sobrecosto del 5%"<<endl;
                                    cout<<"Ingrese el costo por unidad de dicho producto"<<endl;
                                    cin>>costo;
                                    totalprecio=(costo*cant);
                                    totalprecio=totalprecio+0.05*totalprecio;
                                }else
                                {
                                    cout<<"Ingrese el costo por unidad de dicho producto"<<endl;
                                    cin>>costo;
                                    totalprecio=(costo*cant);
                                }

                            }
                                                        cout<<"Ingrese a que comuna va el material"<<endl;
                            int comuna;
                            cin>>comuna;
                            preciotransporte=mat[comuna-1][1]*5000+1000;
                        }
                        cout<<"El costo de este despacho sin contar transporte es: "<<totalprecio<<"$"<<endl;
                        cout<<"El costo del transporte es: "<<preciotransporte;
                        cout<<"El costo total del despacho es: "<<totalprecio+preciotransporte;
                        system("pause");
                        system("cls");
                        break;
                    }
            }
        }
        if(id==2)
        {
            cout<<"Bienvenido cliente"<<endl;
            cout<<"A continuacion se ha de realizar el pedido"<<endl;
                        float totalprecio=0;
                        cout<<"Ingrese la bodega de la cual se ha de hacer el despacho: "<<endl;
                        int bodega;
                        cout<<"Seleccione 1 para la bodega 5, seleccione otro numero para la bodega 17"<<endl;
                        cin>>bodega;
                        if(bodega==1)
                        {
                            cout<<"Se ha seleccionado la bodega 5"<<endl;
                            cout<<"Ingrese cuantos productos diferentes va a despachar de esta bodega"<<endl;
                            int cantidad,cant;
                            cin>>cantidad;
                            for(int i=0;i<cantidad;i++)
                            {
                                cout<<"Ingrese el nombre del producto"<<endl;
                                cin>>nombreproducto;
                                    for(int i=0;i<n5;i++)
                                    {
                                        if(nombreproducto==comuna5nombre[i])
                                            validar=true;
                                    }
                                cout<<"Ingrese la cantidad de unidades que va a llevar de este producto: "<<endl;
                                cin>>cant;
                                float costo;
                                if(validar==false)
                                {
                                    cout<<"Este producto no se encuentra en el inventario, pero se puede conseguir de manera urgente..."<<endl;
                                    cout<<"Solo que ha de tener un sobrecosto del 5%"<<endl;
                                    cout<<"Ingrese el costo por unidad de dicho producto"<<endl;
                                    cin>>costo;
                                    totalprecio=(costo*cant);
                                    totalprecio=totalprecio+0.05*totalprecio;
                                }else
                                {
                                    cout<<"Ingrese el costo por unidad de dicho producto"<<endl;
                                    cin>>costo;
                                    totalprecio=(costo*cant);
                                }

                            }
                            cout<<"Ingrese a que comuna va el material"<<endl;
                            int comuna;
                            cin>>comuna;
                            preciotransporte=mat[comuna-1][1]*5000+1000;

                        }else
                        {
                            cout<<"Se ha seleccionado la bodega 17"<<endl;
                            cout<<"Ingrese cuantos productos diferentes va a despachar de esta bodega"<<endl;
                            int cantidad,cant;
                            cin>>cantidad;
                            for(int i=0;i<cantidad;i++)
                            {
                                cout<<"Ingrese el nombre del producto"<<endl;
                                cin>>nombreproducto;
                                    for(int i=0;i<n5;i++)
                                    {
                                        if(nombreproducto==comuna17nombre[i])
                                            validar=true;
                                    }
                                cout<<"Ingrese la cantidad de unidades que va a llevar de este producto: "<<endl;
                                cin>>cant;
                                float costo;
                                if(validar==false)
                                {
                                    cout<<"Este producto no se encuentra en el inventario, pero se puede conseguir de manera urgente..."<<endl;
                                    cout<<"Solo que ha de tener un sobrecosto del 5%"<<endl;
                                    cout<<"Ingrese el costo por unidad de dicho producto"<<endl;
                                    cin>>costo;
                                    totalprecio=(costo*cant);
                                    totalprecio=totalprecio+0.05*totalprecio;
                                }else
                                {
                                    cout<<"Ingrese el costo por unidad de dicho producto"<<endl;
                                    cin>>costo;
                                    totalprecio=(costo*cant);
                                }

                            }
                                                        cout<<"Ingrese a que comuna va el material"<<endl;
                            int comuna;
                            cin>>comuna;
                            preciotransporte=mat[comuna-1][1]*5000+1000;
                        }
                        cout<<"El costo de este despacho sin contar transporte es: "<<totalprecio<<"$"<<endl;
                        cout<<"El costo del transporte es: "<<preciotransporte;
                        cout<<"El costo total del despacho es: "<<totalprecio+preciotransporte;
                        system("pause");
                        system("cls");
                        break;
        }
    }
}
void menu()
{
    system("pause");
    system("cls");
    cout<<"..............MENU............."<<endl;
    cout<<"A continuacion seleccione la opcion que desea ejecutar"<<endl;
    cout<<"1.Hacer un pedido"<<endl;
}
