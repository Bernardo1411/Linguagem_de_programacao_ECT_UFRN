#include <iostream>

using namespace std;

int main()
{float n1, n2, n3, M, nrec;

    cout << "Insira a nota da primeira unidade: " << endl;
    cin >> n1;

    cout << "Insira a nota da segunda unidade: " << endl;
    cin >> n2;

    cout << "Insira a nota da terceira unidade: " << endl;
    cin >> n3;

    M = (n1+n2+n3)/3;

    if(M>=7){
        cout << "Aluno aprovado com media: " << M << endl;
    }
    else{
        cout << "Insira a nota de recuperacao: " << endl;
        cin >> nrec;

        M = (M + nrec)/2;

        if(M>=5){

            cout << "Aluno aprovado na recuperacao, com media: " << M << endl;
        }
        else{
            cout << "Aluno reprovado, com media: " << M << endl;
        }
    }

    return 0;
}
