#include <iostream>
#include <cstring>
#define TAM 50

using namespace std;

bool ehSubstring(char str1[], char str2[], int, int);

int main()
{
    char str1[TAM];
    char str2[TAM];
    int  tam1, tam2;
    bool r;

    cout << " Insira a primeira palavra: " << endl;
    cin.getline(str1,TAM);

    cout << " Insira a segunda palavra: " << endl;
    cin.getline(str2,TAM);

    tam1 = strlen(str1);
    tam2 = strlen(str2);


    r = ehSubstring(str1, str2, tam1, tam2);

    if(r == true) cout << " A segunda palavra eh substring da primeira " << endl;
    else cout << " A segunda palavra NAO eh substring da primeira " << endl;

    return 0;
}

bool ehSubstring(char str1[], char str2[], int tam1, int tam2){

    int i=0, cont =0;

        while( (tam1>tam2 ? str1[i]: str2[i]) != '\0'){

            if((tam1>tam2 ? str1[i]: str2[i]) == (tam1<tam2 ? str1[cont]: str2[cont])){

                cont++;

                if(cont == (tam1<tam2 ? tam1: tam2)){

                    break;

                }

            }

            else{

                    cont = 0;

                }

                i++;

        }


        return (cont == (tam1<tam2 ? tam1 : tam2) ? true : false);

    }


     /* METODOLOGIA QUE NAO FUNCIONA PARA TODOS OS CASOS


     for(int i=0; i<tam2; i++){

        for(int j=0; j<tam1; j++){

            if(str2[i] == str1[j]){

                cont++;

                if(cont == tam2){

                   break;

                    }

                }

            }

        } */

