#include <iostream>
#include <cstring>

#define TAM 100

using namespace std;

void ordenaPalavra(char S[]);


int main()
{
    char S[TAM];

    cout << "insira uma sequencia de digitos e letras: ";
    cin.getline(S, TAM);

    ordenaPalavra(S);

    cout << S << endl;

    return 0;
}


void ordenaPalavra(char str[]){

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

/*void ordenaPalavra(char S[]){

    char digitos[] = {"0123456789"};
    char dig[TAM];
    char letras[] = {"abcdefghijklmnopqrstuvxwyzABCDEFGHIJKLMNOPQRSTUVXWYZ"};
    char let[TAM];
    int i=0, maior, menor = 0, meio, cont=0, cont2=0;

    maior = strlen(S);

    while(S[i]!='\0'){

        menor=0;

        while(menor<maior){

            meio = (maior+menor)/2;

            if(S[i]==S[meio]){

                dig[cont] = S[i];
                cont++;

                break;

            }

            else if(S[i] < S[meio]){

                maior = meio-1;

            }

            else{

                menor = meio+1;

            }

        }


        menor=0;

        while(menor<maior){

            meio = (maior+menor)/2;

            if(S[i]==S[meio]){

                let[cont2] = S[i];
                cont2++;

                break;

            }

            else if(S[i] < S[meio]){

                maior = meio-1;

            }

            else{

                menor = meio+1;

            }

        }

        i++;

    }

   strcat(dig, let);
   strcpy(S, dig);

}*/
