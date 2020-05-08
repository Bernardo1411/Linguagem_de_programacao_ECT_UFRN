#include <iostream>

using namespace std;

int main()
{ long long int x, n;

    cout << "Insira um numero  inteiro" << endl;
    cin >> x;

    for(n=x-1; n>=1; n--) {
        x *=n;

    }

    cout << "x fatorial e: " << x;

    return 0;
}
