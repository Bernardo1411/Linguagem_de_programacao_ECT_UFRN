#include <iostream>

using namespace std;

int main()
{ int x, n;

    cout << "Insira um numero inteiro" << endl;
    cin >> x;

    n=2;

    while(n<x){

         x%n;

         if(x%n == 0) {
            cout << "O numero nao e primo" << endl;
                break;
         }
        else if((x%n != 0) && (n == x-1)) cout << "O numero e primo" << endl;

                n++;
    }

    return 0;
}
