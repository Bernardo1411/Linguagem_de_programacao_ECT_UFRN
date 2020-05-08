#include <iostream>
#define TAM 100

using namespace std;

int branco(char str[]);
int vogal(char str[]);
int consoante(char str[]);
int numero(char str[]);

int main()
{   char str[TAM];
    int num_b, num_v, num_c, num_n;

    cout << " Insira uma frase: " << endl;
    cin.getline(str, TAM);

    num_b = branco(str);
    num_v = vogal(str);
    num_c = consoante(str);
    num_n = numero(str);

    cout << " Numero de espacos em branco: " << num_b << endl;
    cout << " Numero de vogais: " << num_v << endl;
    cout << " Numero de consoantes: " << num_c << endl;
    cout << " Numero de digitos: " << num_n << endl;

    return 0;
}

int branco(char str[TAM]){

    int i=0, cont=0;

    while(str[i]!='\0'){

        if(str[i] == ' '){

            cont++;

        }

        i++;

    }

    return cont;

}

int vogal(char str[TAM]){

    char vog[] = {"aeiouAEIOU"};
    int i=0, cont=0;

    while(str[i] != '\0'){

        int j=0;

        while(vog[j] != '\0'){

        if(str[i] == vog[j]){

            cont++;

            }

            j++;

        }

        i++;

    }

    return cont;

}

int consoante(char str[TAM]){

    char cons[] = {"bcdfghjklmnpqrstvxywzBCDFGHJKLMNPQRSTVXYWZ"};
    int i=0, cont=0;

    while(str[i] != '\0'){

        int j=0;

        while(cons[j] != '\0'){

        if(str[i] == cons[j]){

            cont++;

            }

            j++;

        }

        i++;

    }

    return cont;

}

int numero(char str[TAM]){

    char num[] = {"0123456789"};
    int i=0, cont=0;

    while(str[i] != '\0'){

        int j=0;

        while(num[j] != '\0'){

        if(str[i] == num[j]){

            cont++;

            }

            j++;

        }

        i++;

    }

    return cont;

}
