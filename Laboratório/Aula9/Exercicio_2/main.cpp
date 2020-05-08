#include <iostream>
#include <cstring>

#define TAM 100

using namespace std;

void inverte(char str[]);

char str2[TAM];

int main()
{
    char str[TAM];

    cout << "Insira o texto: " << endl;
    cin.getline(str, TAM);

    inverte(str);

    cout << str2 << endl;

    return 0;
}

void inverte(char str[]){

    int i=0, j=strlen(str);

    while(str[i]!='\0'){

        str2[j-i-1] = str[i];

        i++;
    }

}
