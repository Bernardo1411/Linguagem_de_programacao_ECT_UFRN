#include <iostream>

using namespace std;

int  soma(int, int);

int main()
{   int a, b, r;

    cout << "Insira um valor inferior: " << endl;
    cin >> a;

    cout << "Insira um valor superior: " << endl;
    cin >> b;

    r = soma(a, b);

    cout << "A soma eh: " << r << endl;

    return 0;
}

int soma(int a, int b){

    int sum=a;

    if(a == b){

        return sum;

    }

    return sum + soma(a+1, b);

}
