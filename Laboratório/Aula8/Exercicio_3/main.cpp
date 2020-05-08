#include <iostream>
#define TAM 100

using namespace std;

int maior( int M[][TAM], int, int);

int main()
{
    int M[TAM][TAM];
    int m ,n , mr;

    cout << " Insira o numero de linhas: " << endl;
    cin >> m;

    cout << " Insira o numero de colunas: " << endl;
    cin >> n;

    for(int i=0; i<m; i++){

        for(int j=0; j<n; j++){

        cout << "Insira  o elemento V[" << i << "]" << "[" << j<< "]: " << endl;
        cin >> M[i][j];

        }
    }

    mr = maior(M, m, n);

    cout << " O maior numero: " << mr << endl;

    return 0;
}

int maior( int M[][TAM], int m, int n){

int bigger = M[0][0];

    for(int i=0; i<m; i++){

        for(int j=0; j<n; j++){

        if(M[i][j] > bigger){

        bigger = M[i][j];

            }
        }
    }

    return bigger;
}
