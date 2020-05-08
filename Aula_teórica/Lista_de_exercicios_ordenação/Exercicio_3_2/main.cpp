#include <iostream>

#define TAM 30

using namespace std;

void mm(int V[], int);

void pesq(int V[], int, int);

int main()
{
    int V[TAM];
    int n, x;

    cout << "Insira o tamanho do vetor: " << endl;
    cin >> n;

    for(int i=0; i<n; i++){

        cout << "V[" << i << "]" << endl;
        cin >> V[i];

    }

    cout << "Insira o elemento que deseja pesquisar: " << endl;
    cin >> x;

    mm(V, n);

    pesq(V, x, n);

    return 0;
}

void mm(int V[], int num){

    for(int i=0; i<num; i++){

        for(int j=i; j>0; j--){

            if(V[j]<V[j-1]){

                int aux = V[j-1];
                V[j-1] = V[j];
                V[j] = aux;

            }

            else{

                break;

            }

        }

    }

    cout << "O maior elemento eh: " << V[num-1] << endl;
    cout << "O menor elemento eh: " << V[0] << endl;

}

void pesq(int V[], int chave, int n){

int menor=0, maior=n-1;

    while(menor<maior){

        int meio = (menor+maior)/2;

        if(V[meio]==chave){

           cout << "O elemento " << V[meio] << " esta na posicao: " << meio << endl;
           break;

        }

        else if(chave<V[meio]){

            maior = meio-1;

        }

        else{

            menor = meio+1;

        }

    }

}
