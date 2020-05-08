#include <iostream>
#include <cstring>

#define TAM 100

using namespace std;

void ordenaPalavra(char S[]);
void ordenar(char str[]);

int main()
{
    char S[TAM];

    cout << "insira uma sequencia de digitos e letras: ";
    cin.getline(S, TAM);

    ordenaPalavra(S);

    cout << S << endl;

    return 0;
}

void ordenaPalavra(char S[]){

    char digitos[] = {"0123456789"};
    char dig[TAM];
    char letras[] = {"abcdefghijklmnopqrstuvxwyzABCDEFGHIJKLMNOPQRSTUVXWYZ"};
    char let[TAM];
    int i=0, j=0, cont=0, cont2=0;

    while(S[i]!='\0'){

        j=0;

        while(digitos[j]!='\0'){

            if(S[i]==digitos[j]){

                dig[cont] = S[i];
                cont++;

                break;

            }

            j++;

        }

        j=0;

        while(letras[j]!='\0'){

            if(S[i]==letras[j]){

                let[cont2] = S[i];
                cont2++;

                break;

            }

            j++;

        }

        i++;

    }

   ordenar(dig);
   ordenar(let);

   strcat(dig, let);
   strcpy(S, dig);

}

void ordenar(char str[]){

int i=1, j;

    while(str[i]!='\0'){

        j=i;

        while(j>0){

           if(str[j]<str[j-1]){

            int aux=str[j-1];
                str[j-1] = str[j];
                str[j] = aux;

           }

           j--;

        }

        i++;

    }

}
