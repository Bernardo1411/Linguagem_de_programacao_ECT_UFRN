#include <iostream>

using namespace std;

int soma(int);

int main()
{
    int n;

    cout << "Insira um inteiro: ";
    cin >> n;

    for(int i=0; i<=n; i++){

        cout << " A soma de 0 a " << i << " eh igual a: " << soma(i) << endl;

    }

    return 0;
}

int soma(int n){

    if(n==1) return 1;
    if(n==0) return 0;

    return n+soma(n-1);

}
