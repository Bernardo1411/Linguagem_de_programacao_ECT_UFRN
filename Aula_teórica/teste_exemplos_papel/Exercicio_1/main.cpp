#include <iostream>

using namespace std;

bool maiorInvertido(int, int);
void inverteNumero(int &a);

int main(){
 int n1, n2;
 bool r;

 cout << "Insira o primeiro numero: " << endl;
 cin >> n1;

 cout << "Insira o srgundo numero: " << endl;
 cin >> n2;

inverteNumero(n1);
inverteNumero(n2);

r = maiorInvertido(n1, n2);

if(r == 1) cout << " Verdadeiro " << endl;
else cout << " Falso " << endl;

return 0;

}

bool maiorInvertido(int a, int b){

 if(a>b){

    return 1;

 }
 else{

    return 0;

 }
}

void inverteNumero(int &a){

    int ordem, resto, soma;

    soma = 0;
    ordem = 1;

        while(a/ordem >= 10){

         ordem = ordem*10;

        }

        for(int i = 1; i <= ordem; i*=10){

         resto = (a%(i*10)/i);
         resto = resto*(ordem/i);
         soma = soma + resto;

        }

        a = soma;

}
