#include <iostream>

#define TAM 100

using namespace std;

int main()
{   int V[TAM] = {56,34,4,10,77,51,93,30,5,52};
    int n=10;


    for(int i=1; i<n; i++){

        for(int j=i; j>0; j--){

            if(V[j]<V[j-1]){

                int aux = V[j];
                    V[j] = V[j-1];
                    V[j-1] = aux;

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
