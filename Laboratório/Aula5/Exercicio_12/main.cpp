#include <iostream>
#include <cmath>

using namespace std;

int main()
{int n, x, fat;
float e, pot;

    e = 1;
    fat = 1;

    cout << "Insira o numero de termos: " << endl;
    cin >> n;

    cout << "Insira expoente desejado: " << endl;
    cin >> x;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){

           fat = fat*j;

        }

        pot = pow(x,i);

        e = e + (pot/fat);

    }

    cout << "e^" << x << " = " << e << endl;

    return 0;
}
