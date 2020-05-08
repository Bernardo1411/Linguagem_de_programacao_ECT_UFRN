#include <iostream>

using namespace std;

int potencia(int);

int main()
{
    int num, pot;

    cout << "Insira um inteiro: " << endl;
    cin >> num;

    pot = potencia(num);

    cout << " O numero inserido eh equivalente a 2^" << pot << endl;

    return 0;
}

int potencia(int n){
    int cont;

    cont = 0;

    do{

        n = n/2;
        cont = cont +1;

    }while(n/2 >= 1);

    return cont;
}
