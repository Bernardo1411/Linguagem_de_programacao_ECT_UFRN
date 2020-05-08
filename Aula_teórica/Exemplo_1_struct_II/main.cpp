#include <iostream>
#include <cstring>

#define TAM 100

using namespace std;

struct Aluno{
    char nome[TAM];
    char matricula[TAM];
    float media;
};

void mm(Aluno V[], int);

int main()
{   Aluno V[TAM];
    int n;
    cout << "Insira o numero de alunos que deseja cadastrar: ";
    cin >> n;

    cin.ignore();

    for(int i=0; i<n; i++){

        cout << "Insira o nome do Aluno: ";
        cin.getline(V[i].nome,TAM);

        cout << "Insira a matricula do Aluno: ";
        cin.getline(V[i].matricula,TAM);

        cout << "Insira a media do Aluno: ";
        cin >> V[i].media;

        cin.ignore();

    }

    mm(V, n);

    return 0;
}

void mm(Aluno V[], int n){

float menor, maior, aux;
char aux2[TAM];

    for(int i=1; i<n; i++){

        for(int j=i; j>0; j--){

                if(V[j].media<V[j-1].media){

                  strcpy(aux2, V[j].nome);
                  strcpy(V[j].nome, V[j-1].nome);
                  strcpy(V[j-1].nome, aux2);

                  strcpy(aux2, V[j].matricula);
                  strcpy(V[j].matricula, V[j-1].matricula);
                  strcpy(V[j-1].matricula, aux2);


                    aux = V[j].media;
                    V[j].media = V[j-1].media;
                    V[j-1].media = aux;

            }

        }

    }

    menor = V[0].media;
    maior = V[n-1].media;

    for(int i=0; i<n; i++){

       if(V[i].media==maior) cout << V[i].nome << " matricula: " << V[i].matricula << " tem media: " << V[i].media << endl;
       if(V[i].media==menor) cout << V[i].nome << " matricula: " << V[i].matricula << " tem media: " << V[i].media << endl;

    }

}
