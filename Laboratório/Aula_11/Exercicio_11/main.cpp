#include <iostream>

using namespace std;

void inverso(int);

int main()
{
    int n;

    cout << "Insira um inteiro: ";
    cin >> n;

    inverso(n);

    return 0;
}

void inverso(int n){

    if(n/10<1) {
            cout << n << endl;
            return;
    }

    cout << n%10 << endl;

    inverso(n/10);

}
