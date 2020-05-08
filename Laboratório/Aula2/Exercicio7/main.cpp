#include <iostream>

using namespace std;

int main()
{
    float n;
    cout << "Insira um numero qualquer" << endl;
    cin >> n;

    cout << "a parte inteira do numero e: " << (int) n << endl;
    cout << "a parte fracionada do numero e: " << n - (int) n << endl;

    return 0;
}
