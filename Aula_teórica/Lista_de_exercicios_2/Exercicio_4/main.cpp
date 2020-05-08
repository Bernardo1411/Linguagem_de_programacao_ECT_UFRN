#include <iostream>

using namespace std;

void mult(int, int &, int &);

int main()
{
    int n1, n2 = 0, n3 = 0;

    cout << "Insira um inteiro" << endl;
    cin >> n1;

    mult(n1, n2, n3);

    cout << n1 << " multiplicado por 2 eh " << n2 << endl;
    cout << n1 << " multiplicado por 3 eh " << n3 << endl;

    return 0;
}

void mult(int a, int &b, int &c){

    b = 2*a;
    c = 3*a;

}
