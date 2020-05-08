#include <iostream>

using namespace std;

int divisor(int);

int main()
{
    int n, div;

    cout << "Insira um inteiro: " << endl;
    cin >> n;

    div = divisor(n);

    cout << " O numero de divisores eh: " << div << endl;

    return 0;
}

int divisor(int num){

    int cont;

    cont = 0;

    for(int i = 1; i <= num; i++){

        if(num%i == 0){

            cont = cont + 1;

        }

    }

    return cont;

}
