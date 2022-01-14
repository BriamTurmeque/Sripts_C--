#include <iostream>

using namespace std;

int main()
{
    int hora;
    char a[2];

    cout<<"digite una hora: ";
    cin>>hora;
    cout<<"am o pm: ";
    cin>>a;
    if (a[0]=='a'){if(hora<4){cout<<"buenas noches";}
                    else if (hora==12){cout<<"buenas tardes";}
                        else {cout<<"buenos dias";}}
      else if(a[0]=='p'){if(hora>=7&&hora<=12){cout<<"buenas noches";}
                            else{cout<<"buenas tardes";}}
    return 0;
}
