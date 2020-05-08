#include <iostream>

using namespace std;

int main()
{ int n, x, inicial, fim;

cout << "Insira o valor inicial: ";
cin >> inicial;

cout << "Insira o valor final: ";
cin >> fim;

    for(n = inicial; n <= fim; n++){

        x = 2;

        do{

            if((n%x) == 0){
                cout << n << " nao e um numero primo" << endl;
                break;
            }
            else if(((n%x) != 0) && ((x == n-1) || (n ==1))){
                cout << n << " e um numero primo" << endl;
                ;
            }

            x++;

        }while(x<n);

      }

    return 0;
}
