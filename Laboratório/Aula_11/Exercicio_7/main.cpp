#include <iostream>

using namespace std;

int sum(int);

int main()
{
    int n;

    cout << "Insira um inteiro: ";
    cin >> n;

    cout << "O termo " << n << " da sequencia eh: " << sum(n) << endl;

    return 0;
}

    int sum(int k){

    if(k==1) return 1;
    if(k==2) return 2;

    return sum(k-1)+2*sum(k-2);

    }
