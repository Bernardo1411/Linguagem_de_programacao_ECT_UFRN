#include <iostream>
#define TAM 100

using namespace std;

bool esparsa(int M[][TAM], int, int);

int main()
{   int M[TAM][TAM] = {0};
    int m, n;
    bool r;

    cout << " Insira o numero de linhas: " << endl;
    cin >> m;

    cout << " Insira o numero de colunas: " << endl;
    cin >> n;

    for(int i=0; i<m; i++){

        for(int j=0; j<n; j++){

                cout << " Insira o o elemento M[" << i << "][" << j << "]: "  << endl;
                cin >> M[i][j];

        }

    }

    r = esparsa(M, m, n);

    if(r == true) cout << " Eh esparsa!" << endl;
    else cout << " NAO eh esparsa!" << endl;

    return 0;
}
bool esparsa(int M[][TAM], int m, int n){

int cont=0;
float percent;

 for(int i=0; i<m; i++){

        for(int j=0; j<n; j++){

                if(M[i][j] == 0){

                        cont++;

            }

        }
    }

    percent = (float)cont /(m*n);

    return ( percent>=0.7 ? true : false);

}
