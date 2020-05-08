#include <iostream>

using namespace std;

void troca(int &, int &, int &, int &);

int main()
{
    int n1, n2, n3, n4;

    cout << "Insira o primeiro inteiro: " << endl;
    cin >> n1;

    cout << "Insira o segundo inteiro: " << endl;
    cin >> n2;

    cout << "Insira o terceiro inteiro: " << endl;
    cin >> n3;

    cout << "Insira o quarto inteiro: " << endl;
    cin >> n4;

    cout << n1 << " " << n2 << " " << n3 << " " << n4 << endl;

    troca(n1, n2, n3, n4);

    cout << n1 << " " << n2 << " " << n3 << " " << n4 << endl;

    return 0;
}

    void troca(int &a, int &b, int &c, int &d){

    int troc;

    troc = a;
    a = d;
    d = c;
    c = b;
    b = troc;

    }
