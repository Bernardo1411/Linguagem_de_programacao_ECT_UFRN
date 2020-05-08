#include <iostream>

using namespace std;

int mmc(int, int);

int main()
{
    int n1, n2;

    cout << "Insira o primeiro numero: ";
    cin >> n1;

    cout << "Insira o primeiro numero: ";
    cin >> n2;

    cout << "mdc: " << mmc(n1, n2) << endl;
    cout << "mmc: " << (n1*n2)/mmc(n1, n2) << endl;

    return 0;
}

int mmc(int n1, int n2){

    if(n2==0) return n1;

    return mmc(n2, n1%n2);

}
