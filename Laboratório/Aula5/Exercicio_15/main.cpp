#include <iostream>
#include <cmath>

using namespace std;

int main()
{   int n, fat, cont;
    float rad, ang, sum;

    cont = 1;

    cout << "Insira o angulo desejado: " << endl;
    cin >> ang;

    cout << "Insira o numero de termos desejado: " << endl;
    cin >> n;

    rad = (ang*4*atan(1))/180;

    sum = rad;

    for(int i = 3; i<=n; i = i + 2){

        cont = cont + 1;

        fat = 1;

        for(int j = 1; j<=i; j++){

        fat = fat*j;

        }

        if((cont%2) == 0){

            sum = sum - (pow(rad,i)/fat);

        }

        else{

            sum = sum + (pow(rad, i)/fat);

        }

    }

    cout << " sen(" << ang << ")" << " = " << sum << endl;

    return 0;
}
