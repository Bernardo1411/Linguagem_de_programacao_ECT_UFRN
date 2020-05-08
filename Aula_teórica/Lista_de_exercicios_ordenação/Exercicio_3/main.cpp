#include <iostream>

#define TAM 30

using namespace std;

void mm(int V[], int);

int main()
{
    int V[TAM];
    int n;

    cout << "Insira o tamanho do vetor: " << endl;
    cin >> n;

    for(int i=0; i<n; i++){

        cout << "V[" << i << "]" << endl;
        cin >> V[i];

    }

    mm(V, n);

    return 0;
}

void mm(int V[], int num){

    int maior=V[0];
    int menor=V[0];
    int idmenor, idmaior;

    for(int i=0; i<num; i++){

        for(int j=0; j<num; j++){

            if(V[j]<menor){

                menor = V[j];
                idmenor = j+1;

            }

            if(V[j]>maior){

                maior = V[j];
                idmaior = j+1;

            }

        }

    }

    cout << "posicao Menor: " << idmenor << endl;
    cout << "posicao Maior: " << idmaior << endl;

}
