#include <iostream>

#define TAM 40

using namespace std;

int ordmed(int V[], int );

int main()
{
    int V[TAM];
    int n;
    int med;

    cout << "Insira o tamanho do vetor: " << endl;
    cin >> n;

    for(int i=0; i<n; i++){

        cout << "V[" << i << "]" << endl;
        cin >> V[i];

    }

    med = ordmed(V, n);

    cout << "A mediana eh: " << med << endl;

    return 0;
}

int ordmed(int V[], int n){

int aux, primeiro=0, ultimo=n, mediana, indice;

    for(int i=1; i<n; i++){

        for(int j=i; j>0; j--){

            if(V[j]>V[j-1]){

                aux = V[j-1];
                V[j-1] = V[j];
                V[j] = aux;

            }
            else{

                break;

            }

        }

    }

    indice = n/2;
    mediana = V[indice];

    return mediana;

}
