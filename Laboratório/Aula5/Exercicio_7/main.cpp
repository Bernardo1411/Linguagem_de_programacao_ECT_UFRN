#include <iostream>

using namespace std;

int main()
{ int n, soma, cont;
  float media;

    cont = 0;
    soma = 0;

    while(n!=9999){

    cout << "Insira um inteiro: " << endl;
    cin >> n;
    if(n!= 9999){

    cont = cont + 1;

    soma = soma + n;

    media = soma/cont;
        }
    else{
        break;
    }

    }

    cout << " A media dos numeros eh: " << media << endl;

    return 0;
}
