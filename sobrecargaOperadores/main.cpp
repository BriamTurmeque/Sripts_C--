#include <iostream>

using namespace std;

class Suma{
public:
    int x;
    Suma(){
        x = 0;
    }

    Suma(int x){
        Suma::x = x;
    }

    Suma operator += (int a){
    x = x + a;
    return x;
    }

    getX(){
    return x;}

};

int main (){

    Suma s = Suma(10);
    int a = 5;
    s += a;
    cout << "-> La suma es " << s.getX();


}
