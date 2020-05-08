#include <iostream>

using namespace std;

int main()
{int cod;
float sal, aumento;

    cout << "Insira o codido do cargo: " << endl;
    cin >> cod;

    if(cod == 1){
        cout << "Escrituario " << "---" <<" Insira o salario (em reais): R$" <<endl;
        cin >> sal;
        aumento = sal*0.5;
        cout << "O aumento e de: R$" << aumento << "Reais" << endl;
        cout << "O Salario atualizado e: R$" << sal + aumento << endl;
    }

    if(cod == 2){
        cout << "Secretario " << "---" <<" Insira o salario (em reais): R$" <<endl;
        cin >> sal;
        aumento = sal*0.35;
        cout << "O aumento e de: R$" << aumento << "Reais" << endl;
        cout << "O Salario atualizado e: R$" << sal + aumento << endl;
    }

    if(cod == 3){
        cout << "Caixa " << "---" <<" Insira o salario (em reais): R$" <<endl;
        cin >> sal;
        aumento = sal*0.2;
        cout << "O aumento e de: R$" << aumento << "Reais" << endl;
        cout << "O Salario atualizado e: R$" << sal + aumento << endl;
    }

    if(cod == 4){
        cout << "Gerente " << "---" <<" Insira o salario (em reais): R$" <<endl;
        cin >> sal;
        aumento = sal*0.1;
        cout << "O aumento e de: R$" << aumento << "Reais" << endl;
        cout << "O Salario atualizado e: R$" << sal + aumento << endl;
    }

    if(cod == 5){
        cout << "Diretor " << "---" <<" Insira o salario (em reais): R$" <<endl;
        cin >> sal;
        aumento = sal*0.0;
        cout << "O aumento e de: R$" << aumento << "Reais" << endl;
        cout << "O Salario atualizado e: R$" << sal + aumento << endl;
    }

    return 0;
}
