#include <iostream>

using namespace std;

int digitos(int);

int main()
{
    int n, num;

    cout << "Insira um inteiro: " << endl;
    cin >> n;

    num = digitos(n);

    cout << "O numero de digitos: " << num << endl;

    return 0;
}

int digitos(int n){

    int cont = 1;

if(n<10){

    return cont;

}

return cont + digitos(n/10);

}
