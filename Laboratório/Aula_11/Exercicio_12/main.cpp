#include <iostream>

using namespace std;

void direto(int);

int main()
{   int n;

    cout << "Insira um inteiro: " << endl;
    cin >> n;

    direto(n);

    return 0;
}

void direto(int n){

    if(n/10<1){

        cout << n << endl;
        return;

    }

    direto(n/10);

    cout << n%10 << endl;

}
