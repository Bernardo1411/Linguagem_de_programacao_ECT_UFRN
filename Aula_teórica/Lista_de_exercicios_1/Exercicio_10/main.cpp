#include <iostream>
#include <cmath>

using namespace std;

void divisores(int);

int main()
{ int num;

    cout << "Insira um inteiro positivo: " << endl;
    cin >> num;

    if((num >= 0) && (sqrt(pow(num,2)) == num)){
        divisores(num);
    }
    else cout << "O numero nao eh um inteiro positivo";

    return 0;
}

void divisores(int n){

cout << "Os divisores de " << n << " sao: " << endl;

for(int i = 1; i <= n; i++){

 if(n%i == 0){
    cout << i << endl;
 }

 }
}
