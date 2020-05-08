#include <iostream>
#define TAM 100

using namespace std;

void letrasComuns(char s1[], char s2[], char s3[]);

char s3[TAM] = {0};

int main()
{
    char s1[TAM];
    char s2[TAM];

    cout << " Inserir a primeira palavra: " << endl;
    cin.getline(s1, TAM);

    cout << " Inserir a segunda palavra: " << endl;
    cin.getline(s2, TAM);

    letrasComuns(s1, s2, s3);

    cout << s3 << endl;

    return 0;
}

void letrasComuns(char s1[], char s2[], char s3[]){

    int i=0, cont=0;

    while( s1[i] != '\0'){

    int j = 0;

        while(s2[j] != '\0'){

        if(s1[i] == s2[j] && s1[i]!=' '){

            int cont2 = 0;
            int cont3 = 0;

            while(s3[cont2] != '\0'){

                    if(s1[i] == s3[cont2]){

                        cont3++;

                    }

                    cont2++;

                    }


            if(cont3 == 0){

            s3[cont] = s1[i];

            cont++;

            break;

            }

        }

            j++;

    }

        i++;

    }

}
