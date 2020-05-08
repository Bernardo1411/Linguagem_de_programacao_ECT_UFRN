#include <iostream>

using namespace std;

int sum(int);

int main()
{   int a;

    cout << "Insira um inteiro: ";
    cin >> a;

    cout << " O " << a << "esimo termo eh: " << sum(a) << endl;

    return 0;
}
int sum(int a){

    if(a==0) return 1;
    if(a==1) return 2;

    return 2*sum(a-2)-sum(a-1);

}
