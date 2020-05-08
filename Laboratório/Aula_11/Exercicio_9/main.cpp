#include <iostream>

using namespace std;

int mult(int, int);

int main()
{   int n1, n2;

    cout << "Insira o primeiro numero: " << endl;
    cin >> n1;

    cout << "Insira o segundo numero: " << endl;
    cin >> n2;

    cout << n1 << " x " << n2 << " = " << mult(n1, n2) << endl;

    return 0;
}

int mult(int n1, int n2){

    if(n2==1) return n1;

    return n1+mult(n1, n2-1);

}
