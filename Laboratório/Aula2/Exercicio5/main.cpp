#include <iostream>

using namespace std;

int main()
{
    int n, rest;

    cout << "Insira um numero inteiro" << endl;
    cin >> n;

    rest = n%2;

    if (rest == 0) cout << "O numero e par";
    if (rest != 0) cout << "O numero e impar";
    return 0;
}
