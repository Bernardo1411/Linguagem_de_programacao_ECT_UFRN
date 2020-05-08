#include <iostream>

#define TAM 100

using namespace std;

int main()
{   int V[TAM] = {2,6,4,8,10,12,89,68,45,37};
    int n=10;


    for(int i=0; i<n; i++){

        int menor = i;

        for(int j=i; j<n; j++){

            if(V[j]<V[menor]){

                menor = j;

                int aux = V[menor];
                    V[menor] = V[i];
                    V[i] = aux;

            }

        }

    cout << "Passo " << i << ": ";
            for(int k=0; k<n; k++){

                cout << V[k] << "\t";

            }

            cout << "\n";

    }

    return 0;
}
