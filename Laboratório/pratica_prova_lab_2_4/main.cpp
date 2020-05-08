#include <iostream>
#include <cstring>

#define TAM 100

using namespace std;

void junta(char s1[], char s2[], int);

char s3[TAM];

int main()
{   char s1[TAM];
    char s2[TAM];
    int p;

    cout << "Insira a palavra 1: " << endl;
    cin.getline(s1, TAM);

    cout << "Insira a palavra 2: " << endl;
    cin.getline(s2, TAM);

    cout << "Insira a posicao onde deseja inserir 2 em 1: " << endl;
    cin >> p;

    junta(s1, s2, p);

    cout << s3;

    return 0;
}

void junta(char s1[], char s2[], int p){

    int cont=0, cont2=0;

    for(int i=0; i<p; i++){

        s3[i] = s1[i];

    }

    for(int i=p; i<p+strlen(s2); i++){

        s3[i] = s2[cont];
        cont++;

    }

    for(int i=p+strlen(s2); i<p+strlen(s2)+strlen(s1); i++){

    s3[i] = s1[cont2+p];
    cont2++;

    }

}
