#include <iostream>
#include <cmath>

using namespace std;

float sum(int);

int main()
{   int n;

    cout << "Insira um inteiro: ";
    cin >> n;

    cout << sum(n);

    return 0;
}

float sum(int n){

    if(n==1) return (float)2/4;

    return ((float)(pow(n,2)+1)/(n+3)) + sum(n-1);

}
