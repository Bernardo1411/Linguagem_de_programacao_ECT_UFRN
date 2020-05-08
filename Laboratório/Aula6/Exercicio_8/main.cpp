#include <iostream>

using namespace std;

float sum(int);

int main()
{ int n;
 float soma;

    cout << "Insira um inteiro positivo: " << endl;
    cin >> n;

    if(n>=0) soma = sum(n);

    cout << "O somatorio eh: " << soma << endl;

    return 0;
}
float sum(int a){
float S = 1.0, fat;

for(int i=1; i<=a; i++){

 fat = 1.0;

    for(int j = 1; j<=i; j++){

        fat = fat*j;

    }

    S = S + (1.0/fat);

}

return S;

}
