#include <iostream>

using namespace std;

int main()
{    int a=5;
  //5 5 5 5 5 4 4 4 4 3 3 3 2 2 1 1 0
  for (int i=0;i<6;i++){

    for(int j=0;j<a;j++){
        cout<<a<<" ";
    }
    a-=1;
  }
  cout<<1<<" "<<0;
}

