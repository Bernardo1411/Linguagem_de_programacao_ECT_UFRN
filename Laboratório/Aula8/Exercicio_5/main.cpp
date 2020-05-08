#include <iostream>
#define TAM 100

using namespace std;

void sub(int M[][TAM], int M2[][TAM], int, int);

int M3[TAM][TAM];

int main()
{
    int M[TAM][TAM];
    int M2[TAM][TAM];
    int m, n;

    cout << " Insira o numero de linhas: " << endl;
    cin >> m;

    cout << " Insira o numero de colunas: " << endl;
    cin >> n;

    for(int i=0; i<m; i++){

        for(int j=0; j<m; j++){

            cout << " Insira o elemento M[" << i << "][" << j << "]: " << endl;
            cin >> M[i][j];

        }
    }

    for(int i=0; i<m; i++){

        for(int j=0; j<m; j++){

            cout << " Insira o elemento M2[" << i << "][" << j << "]: " << endl;
            cin >> M2[i][j];

        }
    }

    sub(M, M2, m, n);

    cout << "M3 = \n";

    for(int i=0; i<m; i++){

    cout << "[";

        for(int j=0; j<n; j++){

            //cout << " M3[" << i << "][" << j << "]: " << M3[i][j];
            cout << "\t" << M3[i][j] << "\t";

        }

        cout << "]\n";

    }

    return 0;
}

void sub(int M[][TAM], int M2[][TAM], int m, int n){

    for(int i=0; i<m; i++){

        for(int j=0; j<n; j++){

            M3[i][j] = M[i][j] - M2[i][j];

        }

    }
}
