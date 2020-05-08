#include <iostream>

using namespace std;

int fibo(int);

int main()
{   int n;

    cout << "Insira o numero de termos de fibonacci: " << endl;
    cin >> n;

    cout << " o " << n << "esimo termo eh: " << fibo(n-1) << endl;

    return 0;
}
int fibo(int n){

    if(n==1 || n==0) return 1;

    return fibo(n-1)+fibo(n-2);

}
