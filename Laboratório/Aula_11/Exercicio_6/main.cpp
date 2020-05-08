#include <iostream>

using namespace std;

int prod(int);

int main()
{
    int n;

    cout << "Inisra um inteiro: " ;
    cin >> n;

    cout << "O produtorio de " << n << " eh " << prod(n) << endl;

    return 0;
}
int prod(int n){

    if(n==1) return 2;

    return 2*n*prod(n-1);

}
