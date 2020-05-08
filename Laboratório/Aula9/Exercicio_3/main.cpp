#include <iostream>

#define TAM 100

using namespace std;

void delimita(char str[], int, int);

char str2[TAM];

int main()
{
    char str[TAM];
    int p,q;

    cout << "Insira o texto: ";
    cin.getline(str, TAM);

    cout << "Insira o limite inferior: ";
    cin >> p;

    cout << "Inisira o limite superior: ";
    cin >> q;

    delimita(str, p, q);

    cout << str2 << endl;

    return 0;
}
void delimita(char str[], int p, int q){

int cont=0;

    for(int i=p; i<=q; i++){

        str2[cont] = str[i];

        cont++;

    }
}
