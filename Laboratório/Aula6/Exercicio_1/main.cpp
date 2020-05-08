#include <iostream>

using namespace std;

float soma(int, int);

int main()
{   int a, b;
    float r;

    cout << "Insira o limite inferior: " << endl;
    cin >> a;

    cout << "Insira o limite superior: " << endl;
    cin >> b;

    r = soma(a, b);

    cout << " O resultado da operacao eh: " << r << endl;

    return 0;
}

float soma(int a, int b){

float sum=0.0;

for(int i=a; i <= b; i++){

    sum = sum + (2/(float)i);

}

    return sum;

}
