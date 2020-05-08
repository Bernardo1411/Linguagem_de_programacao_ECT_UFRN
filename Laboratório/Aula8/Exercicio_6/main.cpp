#include <iostream>
#define TAM 100

using namespace std;

int mm(int M[][TAM], int, int);

int main()
{
    int M[TAM][TAM];
    int m, n, minm;


    cout << " Insira o numero de linhas: " << endl;
    cin >> m;

    cout << " Insira o numero de colunas: " << endl;
    cin >> n;

    for(int i=0; i<m; i++){

        for(int j=0; j<n; j++){

            cout << "Insira o M[" << i << "][" << j << "]: " << endl;
            cin >> M[i][j];

        }

    }

    minm = mm(M, m, n);

    cout << " MINMAX: " << minm << endl;

    for(int i=0; i<m; i++){

        for(int j=0; j<n; j++){

            if(M[i][j] == minm){

            cout << "Linha: " << i << "  Coluna: " << j << endl;
            break;

            }
        }

    }

    return 0;
}

int mm(int M[][TAM], int m, int n){

int menor = M[0][0], maior = M[0][0];


 for(int i=0; i<m; i++){

        for(int j=0; j<n; j++){

            if(M[i][j] < menor){

                    menor = M[i][j];

                    maior = menor;

                for(int z=0; z<n; z++){

                    if(M[i][z] > maior){

                    maior = M[i][z];

                    }

                }

            }

        }

    }

    return maior;

}
