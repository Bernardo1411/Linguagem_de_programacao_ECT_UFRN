#include <iostream>

#define TAM 100

using namespace std;

int hanoi(char, char, char, int);

int main()
{
    int n;

    cout << "Insira a quantidade de circulos: ";
    cin >> n;

    cout << "Numero de jogadas: "<< hanoi('A', 'B', 'C', n);

    return 0;
}

int hanoi(char origem, char aux, char destino, int n){

int cont=1;

if(n==1){

 cout << "Mova o circulo " << n << " de " << origem << " para " << destino << endl;
 return cont;

};

 cont+=hanoi(origem, destino, aux, n-1);
 cout << "Mova o circulo " << n << " de " << origem << " para " << destino << endl;

 return cont + hanoi(aux, origem, destino, n-1);

}
