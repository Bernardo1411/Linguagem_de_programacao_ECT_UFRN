#include <iostream>

using namespace std;

int inverte(int);

int main()
{
    int n, invertido;

    cout << "Insira um inteiro: " << endl;
    cin >> n;

    invertido = inverte(n);

    cout << invertido;

    return 0;
}

int inverte(int num){

int cont, invert = 0, resto, ordem=1;

    while(num/ordem >= 10){

        ordem = ordem*10;

    }

    for(int i=1; i<=ordem; i*=10){

        resto = (num%(i*10))/i;
        invert = invert + resto*(ordem/i);

    }

    return invert;
}
