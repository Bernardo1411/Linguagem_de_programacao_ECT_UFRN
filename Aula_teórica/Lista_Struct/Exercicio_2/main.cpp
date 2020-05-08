#include <iostream>
#include <cstring>

#define TAM 100

using namespace std;

struct data{
int dia;
int mes;
int ano;
};

struct pessoa{
char nome[TAM];
float altura;
data nascimento;
};

int main()
{
    pessoa V[TAM];
    int i=0;
    bool continua=true;

    while(i<=20 && continua==true){

    cout << "Insira o nome da pessoa: ";
    cin.getline(V[i].nome, TAM);

    cout << "Insira a altura da pessoa: ";
    cin >> V[i].altura;

    cout << "Insira a data de nascimento" << endl;
    cout << "Dia: ";
    cin >> V[i].nascimento.dia;
    cout << "Mes: ";
    cin >> V[i].nascimento.mes;
    cout << "Ano: ";
    cin >> V[i].nascimento.ano;

    i++;

    cout << "Deseja cadastrar mais uma pessoa? (Sim: 1/ Nao: 0)" << endl;
    cin >> continua;

    cin.ignore();

    }

    cout << i << " pessoas foram cadastradas" << endl;
    cout << "----------A lista das pessoas cadastradas segue abaixo----------\n" << endl;

    for(int j=0; j<i; j++){

        cout << "Nome: " << V[j].nome << endl;
        cout << "Altura: " << V[j].altura << endl;
        cout << "Data de nascimento: " << V[j].nascimento.dia << "/" << V[j].nascimento.mes << "/" << V[j].nascimento.ano << endl;
        cout << "------------------------------------------------------------" << endl;

    }

    return 0;
}
