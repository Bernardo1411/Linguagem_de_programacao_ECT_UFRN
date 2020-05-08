#include <iostream>
#define TAM 500

using namespace std;

void MMQ(float X[], float Y[], int num);

int main()
{
    float V1[TAM];
    float V2[TAM];
    int n;

    cout << "Insira o tamanho dos vetores: " << endl;
    cin >> n;

    for(int i=0; i<=n-1; i++){

        cout << "Insira o " << i << " elemento do vetor X: " << endl;
        cin >> V1[i];

        }

    for(int i=0; i<=n-1; i++){

        cout << "Insira o " << i << " elemento do vetor Y: " << endl;
        cin >> V2[i];

    }

    MMQ(V1, V2, n);

    return 0;
}

void MMQ(float X[], float Y[], int num){

    float a0, a1, sumx=0, sumy=0, sumxy=0, sumxx=0;

    for(int i=0; i<=num-1; i++){

        sumx = sumx + X[i];
        sumxx = sumxx + X[i]*X[i];
        sumy = sumy + Y[i];
        sumxy = sumxy + X[i]*Y[i];

    }

    a0 = (sumxx*sumy - sumxy*sumx)/(num*sumxx - sumx*sumx);

    a1 = (num*sumxy - sumx*sumy)/(num*sumxx - sumx*sumx);

    cout << "A equação resultante eh: ";
    cout << a1 << "x + " << a0 << endl;

}

