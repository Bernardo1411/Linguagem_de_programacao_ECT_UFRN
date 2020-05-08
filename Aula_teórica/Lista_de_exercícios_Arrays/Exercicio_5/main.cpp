#include <iostream>
#define TAM 50

using namespace std;

int main()
{ int M[TAM][TAM][TAM];
  int n, n2, n3, maior, menor;

    cout << "Insira o tamanho da dimensão 1 " << endl;
    cin >> n;

    cout << "Insira o tamanho da dimensão 2 " << endl;
    cin >> n2;

    cout << "Insira o tamanho da dimensão 3 " << endl;
    cin >> n3;

    for(int i=0; i<=n-1; i++){

     for(int j=0; j<=n2-1; j++){

      for(int k=0; k<=n3-1; k++){

                    cout << " Insira o valor do elemento M["<<i<<"]["<<j<<"]["<<k<<"]: " << endl;
                    cin >> M[i][j][k];

    }

    }

    }

    maior = M[0][0][0];
    menor = M[0][0][0];

    for(int i=0; i<=n-1; i++){

       for(int j=0; j<=n2-1; j++){

        for(int k=0; k<=n3-1; k++){

        if(M[i][j][k]>maior){

            maior = M[i][j][k];

        }

        if(M[i][j][k]<menor){

            menor = M[i][j][k];

        }

    }

    }

    }

    cout << "O menor valor eh: " << menor << endl;
    cout << "O maior valor eh: " << maior << endl;

    return 0;
}
