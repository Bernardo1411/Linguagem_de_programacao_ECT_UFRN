#include <iostream>
#define TAM 100

using namespace std;

int main()
{
    int M[TAM][TAM] = {0};
    int M2[TAM][TAM] = {0};
    int V[TAM] = {0};
    int m, n;

    cout << " Insira a quantidade de linhas: " << endl;
    cin >> m;

    cout << " Insira a quantidade de colunas: " << endl;
    cin >> n;

    for(int i=0; i<m; i++){

            for(int j=0; j<n; j++){

        cout << " Inisra o elemento M[" << i << "]" << "[" << j << "]: " << endl;
        cin >> M[i][j];

        V[i] = V[i] + M[i][j];

            }
    }


    for(int i=0; i<m; i++){

            for(int j=0; j<n; j++){

        M2[i][j] = M[i][j]*V[i];

            }
    }

    for(int i=0; i<m; i++){

            for(int j=0; j<n; j++){

        cout << " M[" << i << "]" << "[" << j << "]: " << M2[i][j] << endl;

            }
    }

    return 0;
}
