#include <iostream>

using namespace std;

bool digitos(int, int);

int main()
{
    int a, b;
    bool r;

    cout << "Insira o primeiro digito: " << endl;
    cin >> a;

    cout << "Insira o segundo digito: " << endl;
    cin >> b;

    r = digitos(a, b);

    if(r == 1) cout << " Verdadeiro!" << endl;
    else cout << "Falso!" << endl;

    return 0;
}

bool digitos(int n1, int n2){
    float i, i2, r;

    i = 1;
    i2 = 1;

    while((n2/i) >= 10){

        i = i*10;

    }

    cout << i << endl;

while((n1/i2) >= 10){

        i2 = i2*10;

    }
    cout << i2 << endl;

    r = n1*(i/i2);
    r = (int) r;

    cout << r << endl;

    if(r == n2){

        return 1;

    }

    else{

        return 0;

    }

}
