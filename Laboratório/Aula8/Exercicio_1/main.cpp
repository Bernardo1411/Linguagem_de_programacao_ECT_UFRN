#include <iostream>
#define TAM 5


using namespace std;

int main()
{
       int M[TAM][TAM] = {{11, 12, 13, 14, 15}, {21, 22, 23, 24, 25}, {31, 32, 33, 34, 35}, {41, 42, 43, 44, 45}, {51, 52, 53, 54, 55}};
       int sum=0, sum2=0;
       double prod=1;

       cout << "Os elementos da diagonal principal sao: " << endl;

       for(int i=0; i<TAM; i++){

            cout << M[i][i] << endl;

       }

    // Soma dos elementos acima da diagonal principal

    for(int i=0; i<TAM; i++){

        for(int j=i+1; j<TAM; j++){

                sum+=M[i][j];

        }

    }

cout << " A soma dos elementos acima da diagonal principal: " << sum << endl;

    for(int i=1; i<TAM; i++){

        for(int j=0; j<i; j++){

                sum2+=M[i][j];

                prod = prod*M[i][j];

        }

    }
    cout << " O produto dos elementos abaixo da diagonal principal: " << prod << endl;

    for(int i=0; i<TAM; i++){

        for(int j=0; j<TAM; j++){

                        if(j != TAM-i-1){

                cout << " M[" << i << "]" << "[" << j << "] = " << M[i][j] << endl;

            }
        }

    }

    return 0;
}
