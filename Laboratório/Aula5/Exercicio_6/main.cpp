#include <iostream>

using namespace std;

int main()
{int y, cont;
float x, num, fim;

    cont = 0;

    cout << "Insira um numero: " << endl;
    cin >> x;

    cout << "Insira a potencia: " << endl;
    cin >> y;

    num = x;
    fim = x;

    while(cont<(y-1)){

        cont = cont + 1;
        fim = fim*num;

    }

    cout << "O valor de " << x << " elevado a " << y << " eh igual a: " << fim << endl;

    return 0;
}
