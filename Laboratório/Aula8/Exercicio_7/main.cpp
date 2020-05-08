#include <iostream>
#define TAM 100

using namespace std;

void transposta(int M[][TAM], int, int);

int main()
{
    int M[TAM][TAM];
    int l, c;

    cout << "insira o numero de linhas: " << endl;
    cin >> l;

    cout << "insira o numero de colunas: " << endl;
    cin >> c;

    for(int i=0; i<l; i++){

        for(int j=0; j<c; j++){

            cout << "M[" << i << "]" << "[" << j << "]" << endl;
            cin >> M[i][j];

        }

    }

    cout << "M: " << endl;

    for(int i=0; i<l; i++){

        for(int j=0; j<c; j++){

            cout << M[i][j] << "\t";

        }

        cout << "\n";

    }

    cout << "\n";

    transposta(M, l, c);

    return 0;
}

void transposta(int M[][TAM], int lin, int col){

    cout << "TRANSPOSTA" << endl;

for(int i=0; i<lin; i++){

        for(int j=0; j<col; j++){

            cout << M[j][i] << "\t";

        }

    cout << "\n";

}

}
