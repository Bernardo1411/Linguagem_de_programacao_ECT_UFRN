#include <iostream>
#include <cstring>

#define TAM 100

using namespace std;

struct aluno{
char nome[TAM];
int matricula;
float n1;
float n2;
float n3;
};

int indice(aluno V[], int i, int m);

int main(){

    aluno V[TAM];
    int i=0;
    bool continua=true;
    int m, id;

        while(continua==true){

            cout << "Insira o nome do aluno: ";
            cin.getline(V[i].nome, TAM);

            cout << "Insira a matricula do aluno: ";
            cin >> V[i].matricula;

            cout << "Insira a primeira nota: ";
            cin >> V[i].n1;

            cout << "Insira a segunda nota: ";
            cin >> V[i].n2;

            cout << "Insira a terceira nota: ";
            cin >> V[i].n3;

            i++;

            cout << "Deseja cadastrar outro aluno? (SIM: 1/ NAO: 0): ";
            cin >> continua;

            cin.ignore();

        }

        cout << "Qual matricula deseja pesquisar?: ";
        cin >> m;

        id = indice(V, i, m);

       if(id!=-1){
        cout << "Nome: " << V[id].nome << endl;
        cout << "Nota da primeira unidade: " << V[id].n1 << endl;
        cout << "Nota da segunda unidade: " << V[id].n2 << endl;
        cout << "Nota da terceira unidade: " << V[id].n3 << endl;
       }
       else cout << "Matricula invalida!" << endl;


    return 0;
}
int indice(aluno V[], int i, int m){
    int j;

    for(j=0; j<i; j++){

        if(V[j].matricula==m) return j;
        if(j==i-1 && V[j].matricula!=m) return -1;

    }
};
