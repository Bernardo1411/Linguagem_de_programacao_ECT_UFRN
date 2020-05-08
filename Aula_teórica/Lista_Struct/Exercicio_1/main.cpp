#include <iostream>

#define TAM 100

using namespace std;

struct endereco{
char cep[TAM];
int num_r;
};

struct cliente{
char nome[TAM];
char cpf[TAM];
endereco info;
};

int main()
{   cliente V[TAM];
    bool inserir=true;
    int i=0;

    while(inserir==true){

        cout << "Insira o nome do cliente: ";
        cin.getline(V[i].nome, TAM);

        cout << "Insira o cpf do cliente: ";
        cin.getline(V[i].cpf, TAM);

        cout << "Insira o CEP do cliente: ";
        cin.getline(V[i].info.cep, TAM);

        cout << "Insira o numero da residencia do cliente: ";
        cin >> V[i].info.num_r;

        i++;

        cout << "Deseja realizar outro cadastro? (Sim: 1 / Nao: 0): ";
        cin >> inserir;

        cin.ignore();

    }

    cout << i << " clientes foram cadastrados" << endl;
    cout << "-----------A lista de clientes cadastrados segue abaixo---------" << endl;
    cout << "\n" << endl;

    for(int j=0; j<i; j++){

        cout << "Nome do cliente: " << V[j].nome << endl;
        cout << "O cpf do cliente: " << V[j].cpf << endl;
        cout << "O CEP do cliente: " << V[j].info.cep << endl;
        cout << "O numero da residencia do cliente: " << V[j].info.num_r << endl;
        cout << "------------------------------------------------------" << endl;

    }

    return 0;
}
