#include <iostream>

using namespace std;

int potencia(int);

int  main(){

    int n, pot;

    cout << "Insira um inteiro: " << endl;
    cin >> n;

    pot = potencia(n);

    cout << "A potencia eh: " << pot << endl;

    return 0;

}

int potencia(int num){

    int cont;

    cont = 1;

    while(num/2 >= 2){

    cont = cont + 1;

    num = num/2;

    }

    return cont;

}
