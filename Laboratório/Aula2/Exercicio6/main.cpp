#include <iostream>

using namespace std;

int main()
{
    int n1, n2, rest;

    cout << "Insira um numero inteiro (n1)" << endl;
    cin >> n1;

    cout << "Insira um numero inteiro (n2)" << endl;
    cin >> n2;

    rest = n1%n2;

    if (rest == 0) cout << "n1 e multiplo de n2";
    if (rest != 0) cout << "n1 nao e multiplo n2";

    return 0;
}
