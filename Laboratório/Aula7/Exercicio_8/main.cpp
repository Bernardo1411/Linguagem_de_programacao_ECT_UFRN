#include <iostream>
#define TAM 100

using namespace std;

int media(float V[], int );

int main()
{
    float V[TAM];
    int n, total;

    cout << "Inserir o tamanho do vetor: " << endl;
    cin >> n;

    for(int i=0; i<=n-1; i++){

        cout << "C[" << i << "]: ";
        cin >> V[i];

    }

    total = media(V, n);

    cout << " A quantidade de valores acima da média eh: " << total << endl;

    return 0;
}

int media(float V[], int num){

int suma=0, sum=0;
float med;

    for(int i=0; i<=num-1; i++){

            sum = sum + V[i];

    }

    med = sum/num;

   for(int i=0; i<=num-1; i++){

            suma = suma + (V[i]>med ? 1:0);

    }

    return suma;

}
