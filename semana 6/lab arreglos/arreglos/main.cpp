#include <iostream>

using namespace std;

int main()
{
    string nombre, ordenado[5],a,b,c,d,e;

    cout<<"**PROGRAMA PARA ORDENAR ALFABETICAMENTE**";
    cout<<"\nDigite un nombre de 5 letras en minusculas: ";
    cin>>nombre;
    a=nombre[0];
    b=nombre[1];
    c=nombre[2];
    d=nombre[3];
    e=nombre[4];

   if(a>b&&a>c&&a>d&&a>e){ordenado[4]=a;
                            if (b>c&&b>d&&b>e){ordenado[3]=b;
                                                    if (c>d&&c>e){ordenado[2]=c;
                                                                    if (d>e){ordenado[1]=d;ordenado[0]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=d;}}
                                               else if (d>c&&d>e){ordenado[2]=d;
                                                                    if (c>e){ordenado[1]=c,ordenado[1]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=c;}}
                                               else if (e>d&&e>c){ordenado[2]=e;
                                                                    if (d>e){ordenado[1]=d,ordenado[1]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=d;}}}

                            else if(c>b&&c>d&&c>e){ordenado[3]=c;
                                                    if (b>d&&b>e){ordenado[2]=b;
                                                                    if (d>e){ordenado[1]=d;ordenado[0]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=d;}}
                                               else if (d>c&&d>e){ordenado[2]=d;
                                                                    if (c>e){ordenado[1]=c,ordenado[1]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=c;}}
                                               else if (e>d&&e>c){ordenado[2]=e;
                                                                    if (d>c){ordenado[1]=d,ordenado[1]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=d;}}}
                            else if(d>b&&d>c&&d>e){ordenado[3]=d;
                                                    if (b>c&&b>e){ordenado[2]=b;
                                                                    if (c>e){ordenado[1]=c;ordenado[0]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=c;}}
                                               else if (c>b&&c>e){ordenado[2]=c;
                                                                    if (b>e){ordenado[1]=b,ordenado[1]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=b;}}
                                               else if (e>b&&e>c){ordenado[2]=e;
                                                                    if (b>c){ordenado[1]=b,ordenado[1]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=b;}}}
                            else if(e>b&&e>d&&e>c){ordenado[3]=e;
                                                    if (b>c&&b>d){ordenado[2]=b;
                                                                    if (c>e){ordenado[1]=c;ordenado[0]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=c;}}
                                               else if (c>b&&c>d){ordenado[2]=c;
                                                                    if (b>d){ordenado[1]=b,ordenado[1]=d;}
                                                                    else {ordenado[1]=d;ordenado[0]=b;}}
                                               else if (d>b&&d>c){ordenado[2]=d;
                                                                    if (b>c){ordenado[1]=b,ordenado[1]=c;}
                                                                    else {ordenado[1]=c;ordenado[0]=b;}}}}
//*********************************************************************************************************
    else if(b>a&&b>c&&b>d&&b>e){ordenado[4]=b;
                              if (d>c&&d>a&&d>e){ordenado[3]=d;
                                                    if (a>c&&a>e){ordenado[2]=a;
                                                                    if (c>e){ordenado[1]=c;ordenado[0]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=c;}}
                                               else if (c>a&&c>e){ordenado[2]=c;
                                                                    if (a>e){ordenado[1]=a,ordenado[1]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=a;}}
                                               else if (e>a&&e>c){ordenado[2]=e;
                                                                    if (a>c){ordenado[1]=a,ordenado[1]=c;}
                                                                    else {ordenado[1]=c;ordenado[0]=a;}}}

                            else if(c>a&&c>d&&c>e){ordenado[3]=c;
                                                    if (a>d&&a>e){ordenado[2]=a;
                                                                    if (d>e){ordenado[1]=d;ordenado[0]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=d;}}
                                               else if (d>a&&d>e){ordenado[2]=d;
                                                                    if (a>e){ordenado[1]=a;ordenado[1]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=a;}}
                                               else if (e>d&&e>a){ordenado[2]=e;
                                                                    if (d>a){ordenado[1]=d,ordenado[1]=a;}
                                                                    else {ordenado[1]=a;ordenado[0]=d;}}}
                            else if(a>d&&a>c&&a>e){ordenado[3]=a;
                                                    if (d>c&&d>e){ordenado[2]=d;
                                                                    if (c>e){ordenado[1]=c;ordenado[0]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=c;}}
                                               else if (c>d&&c>e){ordenado[2]=c;
                                                                    if (d>e){ordenado[1]=d;ordenado[1]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=d;}}
                                               else if (e>d&&e>c){ordenado[2]=e;
                                                                    if (d>c){ordenado[1]=d;ordenado[1]=c;}
                                                                    else {ordenado[1]=c;ordenado[0]=d;}}}
                            else if(e>a&&e>d&&e>c){ordenado[3]=e;
                                                    if (a>c&&a>d){ordenado[2]=a;
                                                                    if (c>d){ordenado[1]=c;ordenado[0]=d;}
                                                                    else {ordenado[1]=c,ordenado[0]=c;}}
                                               else if (c>a&&c>d){ordenado[2]=c;
                                                                    if (a>d){ordenado[1]=a,ordenado[1]=d;}
                                                                    else {ordenado[1]=d;ordenado[0]=a;}}
                                               else if (d>a&&d>c){ordenado[2]=d;
                                                                    if (a>c){ordenado[1]=a,ordenado[1]=c;}
                                                                    else {ordenado[1]=c;ordenado[0]=a;}}}}
 //*********************************************************************************************************

    else if(c>a&&c>b&&c>d&&c>e){ordenado[4]=c;
                            if (a>b&&a>d&&a>e){ordenado[3]=a;
                                                    if (b>d&&b>e){ordenado[2]=b;
                                                                    if (d>e){ordenado[1]=d;ordenado[0]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=d;}}
                                               else if (d>b&&d>e){ordenado[2]=d;
                                                                    if (b>e){ordenado[1]=b,ordenado[1]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=b;}}
                                               else if (e>d&&e>b){ordenado[2]=e;
                                                                    if (d>b){ordenado[1]=d,ordenado[1]=b;}
                                                                    else {ordenado[1]=b;ordenado[0]=d;}}}

                            else if(b>a&&b>d&&b>e){ordenado[3]=b;
                                                    if (a>d&&a>e){ordenado[2]=a;
                                                                    if (d>e){ordenado[1]=d;ordenado[0]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=d;}}
                                               else if (d>a&&d>e){ordenado[2]=d;
                                                                    if (a>e){ordenado[1]=a,ordenado[1]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=a;}}
                                               else if (e>d&&e>a){ordenado[2]=e;
                                                                    if (d>a){ordenado[1]=d,ordenado[1]=a;}
                                                                    else {ordenado[1]=a;ordenado[0]=d;}}}
                            else if(d>b&&d>a&&d>e){ordenado[3]=d;
                                                    if (b>a&&b>e){ordenado[2]=b;
                                                                    if (a>e){ordenado[1]=a;ordenado[0]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=a;}}
                                               else if (a>b&&a>e){ordenado[2]=a;
                                                                    if (b>e){ordenado[1]=b,ordenado[1]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=b;}}
                                               else if (e>b&&e>a){ordenado[2]=e;
                                                                    if (b>a){ordenado[1]=b,ordenado[1]=a;}
                                                                    else {ordenado[1]=a;ordenado[0]=b;}}}
                            else if(e>b&&e>d&&e>a){ordenado[3]=e;
                                                    if (b>a&&b>d){ordenado[2]=b;
                                                                    if (a>d){ordenado[1]=a;ordenado[0]=d;}
                                                                    else {ordenado[1]=d;ordenado[0]=a;}}
                                               else if (a>b&&a>d){ordenado[2]=a;
                                                                    if (b>d){ordenado[1]=b,ordenado[1]=d;}
                                                                    else {ordenado[1]=d;ordenado[0]=b;}}
                                               else if (d>b&&d>a){ordenado[2]=d;
                                                                    if (b>a){ordenado[1]=b,ordenado[1]=a;}
                                                                    else {ordenado[1]=a;ordenado[0]=b;}}}}
 //*********************************************************************************************************
    else if(d>a&&d>b&&d>c&&d>e){ordenado[4]=d;
                            if (a>c&&a>b&&a>e){ordenado[3]=a;
                                                    if (b>c&&b>e){ordenado[2]=b;
                                                                    if (c>e){ordenado[1]=c;ordenado[0]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=c;}}
                                               else if (e>b&&e>c){ordenado[2]=e;
                                                                    if (b>c){ordenado[1]=b,ordenado[1]=b;}
                                                                    else {ordenado[1]=c;ordenado[0]=b;}}
                                               else if (c>b&&c>e){ordenado[2]=c;
                                                                    if (b>e){ordenado[1]=b,ordenado[1]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=b;}}}

                            else if(b>a&&b>c&&b>e){ordenado[3]=b;
                                                    if (a>c&&a>e){ordenado[2]=a;
                                                                    if (c>e){ordenado[1]=c;ordenado[0]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=c;}}
                                               else if (c>a&&c>e){ordenado[2]=c;
                                                                    if (a>e){ordenado[1]=a,ordenado[1]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=a;}}
                                               else if (e>a&&e>c){ordenado[2]=e;
                                                                    if (a>c){ordenado[1]=a,ordenado[1]=c;}
                                                                    else {ordenado[1]=c;ordenado[0]=a;}}}
                            else if(c>a&&c>b&&c>e){ordenado[3]=c;
                                                    if (a>b&&a>e){ordenado[2]=a;
                                                                    if (b>e){ordenado[1]=b;ordenado[0]=e;}
                                                                    else {ordenado[1]=e;ordenado[0]=b;}}
                                               else if (b>a&&b>e){ordenado[2]=b;
                                                                    if (a>e){ordenado[1]=a,ordenado[1]=e;}}
                                                                    else {ordenado[1]=e;ordenado[0]=a;}}
                                               else if (c>a&&c>b){ordenado[2]=c;
                                                                    if (a>b){ordenado[1]=a,ordenado[1]=b;}
                                                                    else {ordenado[1]=b;ordenado[0]=a;}}}
                            else if(e>a&&e>b&&e>c){ordenado[3]=e;
                                                    if (a>b&&a>c){ordenado[2]=a;
                                                                    if (b>c){ordenado[1]=b;ordenado[0]=c;}
                                                                    else {ordenado[1]=c;ordenado[0]=b;}}
                                               else if (b>a&&b>c){ordenado[2]=b;
                                                                    if (a>c){ordenado[1]=a,ordenado[1]=c;}
                                                                    else {ordenado[1]=c;ordenado[0]=a;}}
                                               else if (c>a&&c>b){ordenado[2]=c;
                                                                    if (a>b){ordenado[1]=a,ordenado[1]=b;}
                                                                    else {ordenado[1]=b;ordenado[0]=a;}}}
 //*********************************************************************************************************
    else if(e>a&&e>b&&e>c&&e>b){ordenado[4]=e;
                            if (a>b&&a>c&&a>d){ordenado[3]=a;
                                                    if (b>c&&b>d){ordenado[2]=b;
                                                                    if (c>d){ordenado[1]=c;ordenado[0]=d;}
                                                                    else {ordenado[1]=d;ordenado[0]=c;}}
                                               else if (d>b&&d>c){ordenado[2]=d;
                                                                    if (b>c){ordenado[1]=d,ordenado[1]=c;}
                                                                    else {ordenado[1]=c;ordenado[0]=d;}}
                                               else if (c>d&&c>b){ordenado[2]=c;
                                                                    if (b>d){ordenado[1]=b,ordenado[1]=d;}
                                                                    else {ordenado[1]=d;ordenado[0]=b;}}}

                            else if(b>a&&b>c&&b>d){ordenado[3]=b;
                                                    if (a>c&&a>d){ordenado[2]=a;
                                                                    if (c>d){ordenado[1]=c;ordenado[0]=d;}
                                                                    else {ordenado[1]=d;ordenado[0]=c;}}
                                               else if (c>a&&c>d){ordenado[2]=c;
                                                                    if (a>d){ordenado[1]=a,ordenado[1]=d;}
                                                                    else {ordenado[1]=c;ordenado[0]=a;}}
                                               else if (d>a&&d>c){ordenado[2]=d;
                                                                    if (a>c){ordenado[1]=a,ordenado[1]=c;}
                                                                    else {ordenado[1]=c;ordenado[0]=a;}}}
                            else if(c>a&&c>b&&c>d){ordenado[3]=c;
                                                    if (a>b&&a>d){ordenado[2]=a;
                                                                    if (b>d){ordenado[1]=b;ordenado[0]=d;}
                                                                    else {ordenado[1]=d;ordenado[0]=b;}}
                                               else if (b>a&&b>d){ordenado[2]=b;
                                                                    if (a>d){ordenado[1]=a,ordenado[1]=d;}
                                                                    else {ordenado[1]=d;ordenado[0]=a;}}
                                               else if (d>a&&d>b){ordenado[2]=d;
                                                                    if (a>b){ordenado[1]=a,ordenado[1]=b;}
                                                                    else {ordenado[1]=b;ordenado[0]=a;}}}
                            else if(d>a&&d>b&&d>c){ordenado[3]=d;
                                                    if (a>b&&a>c){ordenado[2]=a;
                                                                    if (b>c){ordenado[1]=b;ordenado[0]=c;}
                                                                    else {ordenado[1]=c;ordenado[0]=b;}}
                                               else if (b>a&&b>c){ordenado[2]=b;
                                                                    if (a>c){ordenado[1]=a,ordenado[1]=c;}
                                                                    else {ordenado[1]=c;ordenado[0]=a;}}
                                               else if (c>a&&c>b){ordenado[2]=c;
                                                                    if (a>b){ordenado[1]=a,ordenado[1]=b;}
                                                                    else {ordenado[1]=b;ordenado[0]=a;}}}}
    cout<<ordenado[0]<<ordenado[1]<<ordenado[2]<<ordenado[3]<<ordenado[4];



    return 0;
}
