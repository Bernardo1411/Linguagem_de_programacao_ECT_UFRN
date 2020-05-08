#include <iostream>
#include <cstring>

#define TAM 100

using namespace std;

struct livro{
char titulo[TAM];
char autor[TAM];
char ano[TAM];
};

int main()
{   livro l[TAM];
    livro chave;
    bool continua = true;
    char str[TAM];
    int i=0;


    while(continua==1){

    cout << "Deseja Inserir ou buscar um livro? (buscar / inserir): ";
    cin.getline(str, TAM);

    if(strcmp(str, "inserir")==0){

       cout << "Insira o titulo do livro: ";
       cin.getline(l[i].titulo, TAM);

       cout << "Insira o autor do livro: ";
       cin.getline(l[i].autor, TAM);

       cout << "Insira o ano do livro: ";
       cin.getline(l[i].ano, TAM);

       i++;

       }

       else if(strcmp(str, "buscar")==0) {

        cout << "Insira o ano do livro: ";
        cin.getline(chave.ano, TAM);

        for(int j=0; j<i; j++){

            if(strcmp(l[j].ano, chave.ano) == 0){

                cout << "Titulo: " << l[j].titulo << endl;
                cout << "Autor: " << l[j].autor << endl;
                cout << "\n";


            }

            else cout << "---------------------------------" << endl;

        }

    }


       else cout << "Opcao nao eh valida!" << endl;

    cout << "Deseja continuar? (Sim: 1/ Nao: 0): ";
    cin >> continua;

    cin.ignore();

    }

    return 0;
}
