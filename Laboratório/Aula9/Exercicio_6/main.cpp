#include <iostream>
#include <cstring>

#define TAM 100

using namespace std;

bool palindromo1(char str[]);
bool palindromo2(char str[]);

int main()
{
    char str[TAM];
    bool r, r2;

    cout << "Inserir palindromo: " << endl;
    cin.getline(str, TAM);

    r = palindromo1(str);
    r2 = palindromo2(str);

    cout << (r==true ? "Eh um palindromo tipo 1!" : "NAO EH PALINDROMO tipo 1!") << endl;
    cout << (r2==true ? "Eh um palindromo tipo 2!" : "NAO EH PALINDROMO tipo 2!") << endl;


    return 0;
}

bool palindromo1(char str[TAM]){

    int n=strlen(str), cont=0, cont2=0, cont3=0;

    for(int i=0; i<n; i++){

            if(str[i+cont] == ' ') cont++;
            if(str[n-i-cont2-1] == ' ') cont2++;

            if(str[i+cont] == str[n-i-cont2-1]) cont3++;

    }

    return(cont3 == n-cont ? true : false);

}

bool palindromo2(char str[TAM]){

    int i=0, n=strlen(str), cont=0;

    while(str[i]!='\0'){

        if(str[i] == str[n-i-1]){

            cont++;

        }

        i++;

    }

    return (cont == n ? true : false);

}
