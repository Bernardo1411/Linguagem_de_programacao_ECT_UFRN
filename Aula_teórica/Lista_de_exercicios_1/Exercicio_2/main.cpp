#include <iostream>

using namespace std;

void tabuada(int);

int main()
{
    int num;

    cout << "Insira o numero desejado: " << endl;
    cin >> num;

    tabuada(num);

    return 0;
}

void tabuada(int n){

int i;

 cout << " A tabuada de " << n << " eh: " << endl;

i = 1;

 while(i<=10){

    cout << n*i << endl;

    i++;
 }
}
