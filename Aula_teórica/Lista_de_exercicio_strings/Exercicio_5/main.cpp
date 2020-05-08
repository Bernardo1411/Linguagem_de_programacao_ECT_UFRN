#include <iostream>
#include <cstring>
#define TAM 200

using namespace std;

int main()
{
    char str[TAM];
    char p1[TAM];
    char p2[TAM];
    char suport[TAM];
    int i=0, j=0, cont=0, tam1, tam2, tamstr;

    cout << " Insira uma frase: " << endl;
    cin.getline(str, TAM);

    cout << " Insira a palavra que deseja subtituir: " << endl;
    cin.getline(p1,TAM);

    cout << " Insira a nova palavra: " << endl;
    cin.getline(p2, TAM);

    tam1 = strlen(p1);
    tam2 = strlen(p2);

        while(str[i] != '\0'){

                tamstr = strlen(str);

                if(str[i] == p1[cont]){

                    cont++;

                    if(cont == tam1){

                        j=0;

                            while(str[j]!='\0'){

                           suport[j] = str[j+i+1];

                            j++;

                        }

                        j=0;

                        while(p2[j]!='\0'){

                            str[j+i-tam1+1] = p2[j];

                            j++;

                        }

                        j=0;

                        for(int k=i+tam2-tam1+1; k<tamstr+(tam2-tam1+1); k++){

                            str[k] = suport[j];

                            j++;

                            }

                        }

                    }


                else{

                    cont = 0;

                }

            i++;

        }

        cout << str << endl;

    return 0;
}
