#include <iostream>
#define TAM 50

using namespace std;

int main()
{
    char word[TAM];
    char c;
    int i=0, cont=0;

    cout << " Insira qualquer palavra: " << endl;
    cin.getline(word, TAM);

    cout << " Insira o caractere que deseja encontrar: " << endl;
    cin >> c;

    while(word[i]!='\0'){

            if(word[i] == c){

                cont++;

            }
        i++;
    }

    cout << " A letra " << c << " aparece " << cont << " vezes no texto " << endl;

    return 0;
}
