#include <iostream>
#define TAM 200

using namespace std;

void mais(char str[], char &letra, int &n);

int main()
{
    char str[TAM];
    char letra = ' ';
    int num=0;

    cout << "Insira uma frase: " << endl;
    cin.getline(str, TAM);

    mais(str, letra, num);

    cout << "A letra (" << letra << ") apareceu " << num << " vezes!" << endl;

    return 0;
}

void mais(char str[], char &letra, int &n){

int i=0;

while(str[i] != '\0'){

    int j = 0;
    int cont = 0;

    while(str[j] != '\0'){

     if(str[i] == str[j] && str[i] != ' '){

        cont++;

        if(cont > n){

            n = cont;

            letra = str[i];

        }

     }

     j++;

    }

    i++;

}


}
