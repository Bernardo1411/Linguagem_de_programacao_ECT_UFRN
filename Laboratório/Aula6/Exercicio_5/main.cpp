#include <iostream>

using namespace std;

void square(int);

int main()
{
    int lado;

    cout << "Insira o comprimento do lado: " << endl;
    cin >> lado;

    square(lado);

    return 0;
}

void square(int lado){

   for(int j=1; j<=lado; j++){
    for(int i=1; i<=lado; i++){

     if(i==lado)cout << "*" << endl;
     else cout << "*";

     }
    }
   }
