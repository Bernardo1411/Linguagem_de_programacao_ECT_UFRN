#include <iostream>

#define TAM 50

using namespace std;

void juntaOrdenado(int V1[], int V2[], int V3[], int);
void ordena(int v[], int);

int main()
{
    int V1[TAM];
    int V2[TAM];
    int V3[2*TAM]={0};
    int n;

    cout << "Insira o tamanho dos vetores: " << endl;
    cin >> n;

    for(int i=0; i<n; i++){

        cout << "V1[" << i << "]: ";
        cin >> V1[i];

    }

    for(int i=0; i<n; i++){

        cout << "V2[" << i << "]: ";
        cin >> V2[i];

    }

    juntaOrdenado(V1, V2, V3, n);

    cout << "V3: ";

    for(int i=0; i<2*n; i++){

    cout << V3[i] << "\t";

    }

    return 0;
}

void juntaOrdenado(int v1[], int v2[], int v3[], int num){

    ordena(v1, num);
    ordena(v2, num);

    for(int i=0; i<2*num; i++){

        v3[i*2] = v1[i];
        v3[i*2+1] = v2[i];

    }

}

void ordena(int v[], int n){

    int aux;

    for(int i=0; i<n-1; i++){

        int menor=i;

        for(int j=i+1; j<n; j++){

            if(v[j]<v[menor]){

                menor = j;

            }

            aux = v[i];
            v[i] = v[menor];
            v[menor] = aux;

        }

    }

}
