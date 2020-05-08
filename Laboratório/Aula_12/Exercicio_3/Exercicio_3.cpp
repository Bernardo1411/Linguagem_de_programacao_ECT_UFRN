#include <iostream>
#include <cstring>

#define TAM 100

using namespace std;

struct aluno{
char nome[TAM];
char matricula[TAM];
int absence;
};

int cadastro(aluno V[]);

void approval(aluno V[], int, int, aluno apr[], aluno rep[], int &ap, int &r);

int main(){

    aluno V[TAM];
    aluno apr[TAM];
    aluno rep[TAM];
    int falta, ap=0, r=0;

    int n = cadastro(V);

    cout << "Insira o numero maximo de faltas permitidas: ";
    cin >> falta;

    approval(V, n, falta, apr, rep, ap, r);

    cout << "Lista de alunos reprovados por falta: " << endl;

    for(int i=0; i<r; i++){

        cout << rep[i].matricula  << " - " << rep[i].nome << endl;

    }

     cout << "Lista de alunos aprovados: " << endl;

    for(int j=0; j<ap; j++){

        cout << apr[j].matricula  << " - " << apr[j].nome << endl;

    }

return 0;
}

int cadastro(aluno V[]){

int i=0;
bool continua=1;

while(continua){

    cout << "Insira o nome do aluno: ";
    cin.getline(V[i].nome, TAM);

    cout << "Insira a matricula do aluno: ";
    cin.getline(V[i].matricula, TAM);

    cout << "Insira a quantidade de faltas do aluno: ";
    cin >> V[i].absence;

    i++;

    cout << "Deseja insrir mais um aluno? (Sim: 1/ Nao: 0): ";
    cin >> continua;

    cin.ignore();

    }

    return i;

}

void approval(aluno V[], int n, int falta, aluno apr[], aluno rep[], int &ap, int &r){

    for(int i=0; i<n; i++){

        if(V[i].absence>falta) {

            strcpy(rep[r].nome, V[i].nome);
            strcpy(rep[r].matricula, V[i].matricula);

            r++;

        }

        else {

            strcpy(apr[ap].nome, V[i].nome);
            strcpy(apr[ap].matricula, V[i].matricula);

            ap++;

        }

    }

}
