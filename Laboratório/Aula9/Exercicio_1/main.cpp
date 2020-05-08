#include <iostream>

#define TAM 100

using namespace std;

int strlen1(char s[]);
void strcpy1(char dest[], char orig[]);
void strcat1(char s1[], char s2[]);
int strcmp1(char s1[], char s2[]);

int main()
{
    char str1[TAM];
    char str2[TAM];
    int r, tam1, tam2;

    cout << "Insira o primeiro texto: " << endl;
    cin.getline(str1, TAM);

    cout << "Insira o segundo texto: " << endl;
    cin.getline(str2, TAM);

 tam1 = strlen1(str1);
 tam2 = strlen1(str2);

 cout << "Tamanho str1: " << tam1 << endl;
 cout << "Tamanho str2: " << tam2 << endl;

 r = strcmp1(str1, str2);
 if(r == 1) cout << "Iguais" << endl;
 else cout << "Diferentes" << endl;

 strcat1(str1, str2);
 cout << str1 << endl;

 strcpy1(str1, str2);
 cout << str1 << endl;

    return 0;
}
int strlen1(char s[]){

int i=0;

    while(s[i]!='\0'){

        i++;

    }

    return i;

}


int strcmp1(char s1[], char s2[]){

    int n1=strlen1(s1);
    int n2=strlen1(s2);

    for(int i=0; i<(n1<=n2?n1:n2); i++){

       if(s1[i]!=s2[i]) return 0;

    }

    return 1;

}

void strcat1(char s1[], char s2[]){

    int n = strlen1(s1);

    int i=0;

    while(s1[i]!='\0'){

        s1[i+n] = s2[i];

        i++;

    }

}

void strcpy1(char s1[], char s2[]){

    int n1=strlen1(s1);
    int n2=strlen1(s2);

    for(int i=0; i<(n1<=n2?n1:n2); i++){

       s1[i]=s2[i];

    }

}
