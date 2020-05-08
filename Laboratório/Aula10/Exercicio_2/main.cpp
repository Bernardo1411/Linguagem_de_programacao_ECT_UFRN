#include <iostream>

#define TAM 100

using namespace std;

int main()
{   int V[TAM];
    int n;

    cout << "Insira o tamanho do vetor: ";
    cin >> n;

    for(int i=0; i<n; i++){

        cout << "V[" << i  << "]: ";
        cin >> V[i];

    }

    for(int i=0; i<n-1; i++){
    int cont=0;
        for(int j=0; j<n-i; j++){

            if(V[j]>V[j+1]){

                int aux = V[j+1];
                    V[j+1] = V[j];
                    V[j] = aux;
                    cont++;

            }

        }

    cout << "Passo " << i << ": ";
            for(int k=0; k<n-i; k++){

                cout << V[k] << "\t";

            }

            cout << "\n";

        if(cont==0) break;

    }

    return 0;
}

