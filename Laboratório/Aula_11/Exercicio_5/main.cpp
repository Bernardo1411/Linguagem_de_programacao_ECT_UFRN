#include <iostream>

using namespace std;

float soma(int);

int main()
{   int n;

    cout << "Insira um inteiro: ";
    cin >> n;

    cout << "A somatoria eh: " << soma(n) << endl;

    return 0;
}
float soma(int n){

    if(n==1) return 1.0;

    return (float)2*n/(n+1)+soma(n-1);

}
