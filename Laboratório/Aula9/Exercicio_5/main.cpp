#include <iostream>

#define TAM 100

using namespace std;

void quant(char str[]);

int V[26] = {0};
char V2[] = {"abcdefghijklmnopqrstuvxywz"};

int main()
{
    char str[TAM];

    cout << "Insira um texto: " << endl;
    cin.getline(str, TAM);

    quant(str);

    for(int i=0; i<26; i++){

            if(V[i]!=0) cout << V2[i] << " = " << V[i] << endl;

    }

    return 0;
}

void quant(char str[TAM]){

for(int j=0; j<26; j++){

    int i=0, cont=1;

    while(str[i]!='\0'){

    if(str[i] == V2[j]){

        V[j] = cont++;

        }

    i++;

    }

}

}
