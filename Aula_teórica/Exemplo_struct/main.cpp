#include <iostream>
#include <cstring>

#define TAM 100

using namespace std;

struct cadastro{
    char nome[TAM];
    char curso[TAM];
    long long int matricula;
};

int main()
{
    cadastro aluno[TAM];
    bool continua=true;
    int i=0;

    while(continua==true){

    cout << "Insira o nome do aluno " << i+1 << endl;
    cin.getline(aluno[i].nome, TAM);

    cout << "Insira o nome do curso do aluno " << i+1 << endl;
    cin.getline(aluno[i].curso, TAM);

    cout << "Insira a matricula do aluno " << i+1 << endl;
    cin >> aluno[i].matricula;

    cout << "Deseja inserir mais um cadastro? (Sim: 1 | Nao: 0(zero))" << endl;
    cin >> continua;

    cin.ignore();

    i++;

    }

    cout << i << " alunos foram cadastrados " << endl;
    cout << "-----Segue abaixo a lista de alunos-----" << endl;
    cout << "\n";

    for(int j=0; j<i; j++){

    cout << "Nome do aluno " << j+1 << ": " << aluno[j].nome << endl;
    cout << "Curso do aluno " << j+1 << ": " << aluno[j].curso << endl;
    cout << "Matricula do aluno " << j+1 << ": " << aluno[j].matricula << endl;
    cout << "----------------------------------------------------" << endl;

    }

    return 0;
}
