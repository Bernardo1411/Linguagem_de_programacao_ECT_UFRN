#include <iostream>

using namespace std;

int fat(int n);

int main()
{
    int n;

    cout << "Insira um inteiro: " << endl;
    cin >> n;

    for(int i=0; i<=n; i++){

    cout << "O fatorial de " << i << " eh: " << fat(i) << endl;

    }

    return 0;
}

int fat(int n){

    if(n==1) return 1;
    if(n==0) return 1;

    return n*fat(n-1);

}
