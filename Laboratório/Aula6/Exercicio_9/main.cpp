#include <iostream>
#include <cmath>

using namespace std;

float sum(int ,int);

int main()
{
    int n, x;
    float soma;

    cout << "Insira um expoente: " << endl;
    cin >> x;

    cout << "Insira o numero de termos: " << endl;
    cin >> n;

    soma = sum(x, n);

    cout << "e^"<< x << " = " << soma << endl;

    return 0;
}
float sum(int num, int pot){

float s=0, fat=1;

for(int i=0; i<=pot; i++){

    fat =1.0;

    for(int j=1; j<=i; j++){

        fat = fat*j;

    }

    s = s + (float)pow(num,i)/fat;

}

return s;

}
