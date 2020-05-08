#include <iostream>
#include <cmath>
#define TAM 100

using namespace std;

void infinita(float M[][TAM], int, int);

void euclidiana(float M[][TAM], int, int);

void frobenius(float M[][TAM], int, int);

int main()
{
    float M[TAM][TAM];
    int lin, col;

    cout << " Insira o numero de linhas desejadas: " << endl;
    cin >> lin;

    cout << " Insira o numero de colunas desejadas: " << endl;
    cin >> col;

    for(int i=0; i<lin; i++){

        for(int j=0; j<col; j++){

            cout << "M[" << i << "][" << j << "]: " << endl;
            cin >> M[i][j];

        }

    }

    infinita(M, lin, col);

    euclidiana(M, lin, col);

    frobenius(M, lin, col);

    return 0;
}

void infinita(float M[][TAM], int l, int c){

float inf=0;

    for(int j=0; j<c; j++){

        inf+= sqrt(pow(M[1][j],2));

    }

    for(int i=1; i<l; i++){

        float sum = 0;

        for(int j=0; j<c; j++){

            sum+= sqrt(pow(M[i][j],2));

            if(sum > inf){

                inf = sum;

            }

        }

    }

    cout << "A norma infinita eh: " << inf << endl;

}

void euclidiana(float M[][TAM], int l, int c){

float sum[TAM]={0};

float soma=0;

for(int j=0; j<c; j++){

    for(int i=0; i<l; i++){

        sum[j]+=pow(M[i][j],2);

        }

        sum[j] = sqrt(sum[j]);

        soma+=sum[j];

    }

    cout << "A norma 2,1 eh: " << soma << endl;

}

void frobenius(float M[][TAM], int l, int c){

    float sum=0;


    for(int i=0; i<l; i++){

        for(int j=0; j<c; j++){

            sum+=pow(M[i][j],2);

        }

    }

    sum = sqrt(sum);

    cout << "A norma de Frobenius eh: " << sum << endl;

}
