#include <iostream>

using namespace std;

int pot(int, int);

int main()
{
    int base, potencia, resultado;

    cout << "Insira um inteiro: " << endl;
    cin >> base;

    cout << "Insira expoente desejada: " << endl;
    cin >> potencia;

    if(potencia>=0){

    resultado = pot(base, potencia);

    cout << base << "^" << potencia << " = " << resultado << endl;
    }

    else cout << " O expoente nao eh um inteiro positivo" << endl;

    return 0;
}

int pot(int x, int y){
    int result=1;

for(int i = 1; i<=y; i++){

    result = result*x;

}

    return result;

}
