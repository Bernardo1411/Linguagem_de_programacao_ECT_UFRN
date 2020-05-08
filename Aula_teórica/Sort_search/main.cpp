#include <iostream>

#define TAM 100

using namespace std;

void bb(int V[], int);
void ss(int V[], int);
//void sel(int V[], int);
int pesq(int V[], int, int);

int main()
{
    int V[TAM];
    int n, x, tipo, r;

    cout << "Insira o tamanho do vetor: " << endl;
    cin >> n;

    for(int i=0; i<n; i++){

        cout << "V[" << i << "]: " << endl;
        cin >> V[i];

    }

    cout << "Insira o elemento que deseja pesquisar: " << endl;
    cin >> x;

    cout << " Insira o tipo de ordenacao que deseja realizar: " << endl;
    cout << " 1 - Bubble Sort " << endl;
    cout << " 2 - Selection Sort " << endl;
    cout << " 3 - Insertion Sort " << endl;
    cin >> tipo;

    if(tipo==1) bb(V, n);
    else if(tipo==2) ss(V, n);
    //else sel(V, n);

    r = pesq(V, n, x);

    cout << "O elemento esta na posicao: " << r << endl;

    return 0;
}

void bb(int V[], int n){

    for(int i=0; i<n-1; i++){

        for(int j=0; j<n-1-i; j++){

            if(V[j]>V[j+1]){

                int aux=V[j];
                V[j] = V[j+1];
                V[j+1] = aux;

            }

        }

    }

}

void ss(int V[], int n){

    for(int i=0; i<n-1; i++){

        int minimo = i;

        for(int j=i+1; j<n; j++){

            if(V[j] < V[minimo]){

                minimo = j;

                int aux = V[i];
                    V[i] = V[minimo];
                    V[minimo] = aux;

            }

        }

    }

}


int pesq(int V[], int n, int x){

int maior = n-1, menor=0;

while(menor<maior){

    int meio = (maior+menor)/2;

    if(V[meio]==x){

        return meio;

    }

    else if(x<V[meio]){

        maior = meio-1;

    }

    else{

            menor = meio + 1;

    }

  }

}
