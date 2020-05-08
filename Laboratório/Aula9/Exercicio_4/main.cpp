#include <iostream>
#include <cstring>

#define TAM 100

using namespace std;

void inserir(char s1[], char s2[], int);

char s3[TAM];

int main()
{
    char s1[TAM];
    char s2[TAM];
    int p;

    cout << "Inisra o texto: " << endl;
    cin.getline(s1, TAM);

    cout << "Inisra o texto a ser inserido: " << endl;
    cin.getline(s2, TAM);

    cout << "Insira onde deseja inserir o segundo texto: " << endl;
    cin >>  p;

    inserir(s1, s2, p);

    cout << s3 << endl;

    return 0;
}

void inserir(char s1[], char s2[], int p){

    int cont=0;

        for(int i=0; i<p; i++){

            s3[i] = s1[i];

        }

        for(int i=p; i<strlen(s2)+p; i++){

            s3[i] = s2[cont];
            cont++;

        }

        cont=p;

        for(int i=strlen(s2)+p; i<strlen(s2)+strlen(s1)+p; i++){

            s3[i] = s1[cont];
            cont++;

        }

}
