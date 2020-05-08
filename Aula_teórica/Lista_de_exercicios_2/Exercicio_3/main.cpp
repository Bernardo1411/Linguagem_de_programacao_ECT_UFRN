#include <iostream>

using namespace std;

void div(int, int, float &, int &);

int main()
{
    int x, y, r=0;
    float q=0;

    cout << " Insira o primiero numero: " << endl;
    cin >> x;

    cout << " Insira o segundo numero: " << endl;
    cin >> y;

    div(x, y, q, r);

    cout << " O quociente eh: " << q << endl;
    cout << " O resto eh: " << r << endl;

    return 0;
}

void div(int a, int b, float &c, int &d){

c = a/b;

d = a%b;

}
