#include <iostream>
#include <cmath>

using namespace std;

int fatorial(int);

int main()
{
    int num, fat;

    cout << "Insira um inteiro positivo: " << endl;
    cin >> num;

    if(num >= 1 && (sqrt(pow(num,2)) == num)){

        fat = fatorial(num);

        cout << "O fatorial de " << num << " eh: " << fat << endl;
    }
    else cout << " Não eh inteiro positivo! " << endl;

    return 0;
}

int fatorial(int n){
    int cont;

    cont = n;

for(int i=(n-1); i>=1; i--){


 cont = cont*i;


}
    return cont;
}
