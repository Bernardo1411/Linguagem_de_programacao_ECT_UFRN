#include <iostream>

using namespace std;

int digitos(int);

int main()
{ int num, n;

    cout << "Insira o numero inteiro: " << endl;
    cin >> num;

    n = digitos(num);

    cout << " A quantidade de digitos eh: " << n << endl;

    return 0;

}

int digitos(int n){
    int i, cont;

    cont = 0;
    i = 1;

    while(n/i >= 0.1){

        cont = cont + 1;
        i = i*10;

    }

    return cont;

}
