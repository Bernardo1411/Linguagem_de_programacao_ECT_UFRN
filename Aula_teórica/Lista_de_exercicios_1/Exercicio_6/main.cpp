#include <iostream>

using namespace std;

int divisores(int);

int main()
{ int num, div;

    cout << "Insira um inteiro: " << endl;
    cin >> num;

    div = divisores(num);

    cout << "A quantidade de divisores de " << num << " eh " << div << endl;

    return 0;
}

int divisores(int n){
    int i, cont;

    cont = 0;

    for(i = 1; i <= n; i++){

        if(n%i == 0){

            cont = cont + 1;

        }

    }

    return cont;

}
