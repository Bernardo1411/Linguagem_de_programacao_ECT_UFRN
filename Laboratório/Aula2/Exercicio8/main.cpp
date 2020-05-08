#include <iostream>

using namespace std;

int main()
{
    int n, n1, n2, n3, n4, n5;

    cout << "Insira um inteiro com 5 digitos" << endl;
    cin >> n;

    n1 = (int) n/10000;
    n2 =  (int) (n%10000)/1000;
    n3 =  (int) (n%1000)/100;
    n4 =  (int) (n%100)/10;
    n5 =  (int) (n%10)/1;

    cout << n1 << "   " << n2 << "   " << n3 << "   " << n4 << "   " << n5;

    return 0;
}
