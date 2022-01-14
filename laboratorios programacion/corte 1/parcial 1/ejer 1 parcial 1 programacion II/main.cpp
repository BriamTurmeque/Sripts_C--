#include <iostream>

using namespace std;

int main()
{
    int buscar, acum = 0;
    cout << "---------BUSCAR COINCIDENCIA---------" << endl;
    int arr[10] = {3,1,4,5,2,10,9,8,6,6};
    cout << " { ";
    for (int a=0 ; a<10 ; a++){
        cout << arr[a] << ", ";
    }
    cout <<" } ";
    cout << "\nIngrese el numero a buscar: ";cin >> buscar;

    for (int a=0 ; a<10 ; a++){
        if (buscar==arr[a]){acum+=1;}
    }
    cout <<"el numero " << buscar <<" aparece " <<acum << " en el arreglo";

    return 0;
}

