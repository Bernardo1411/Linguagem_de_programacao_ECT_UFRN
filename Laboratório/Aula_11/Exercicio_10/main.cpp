#include <iostream>

using namespace std;

int pot(int, int);

int main()
{   int n1, n2;

    cout << "Insira uma base: " << endl;
    cin >> n1;

    cout << "Insira um expoente: " << endl;
    cin >> n2;

    cout << n1 << "^" << n2 << " = " << pot(n1, n2) << endl;

    return 0;
}

int pot(int base, int expoente){

    if(expoente==1) return base;

    return base*pot(base, expoente-1);

}
