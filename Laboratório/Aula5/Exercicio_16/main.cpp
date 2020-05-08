#include <iostream>

using namespace std;

int main()
{ int n, resto, ordem, soma, saida;

    cout << "Insira um inteiro positivo: " << endl;
    cin >> n;

    ordem = 1;
    soma = 0;
    saida = n;

    while(n/ordem >= 10){

        ordem = ordem*10;

    }

    for(int i = 1; i<=ordem; i *= 10){

        resto = (n%(i*10))/i;
        n = n - (n%i);
        resto = resto*(ordem/(i));
        soma = soma + resto;

    }

    cout << saida << " invertido, eh igual a: " << soma << endl;

    return 0;
}
