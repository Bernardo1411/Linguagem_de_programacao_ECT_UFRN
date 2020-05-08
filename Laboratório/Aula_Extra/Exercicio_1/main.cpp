#include <iostream>
#define TAM 50

using namespace std;

void contador(int V[], int);

int cont[TAM] = {0};

int main()
{
    int V[TAM];
    int n, cont3;

    cout << "Insira a quantidade de idades a serem inseridas" << endl;
    cin >> n;

    for(int i=0; i<n; i++){

        cout << "Insira a idade " << i << endl;
        cin >> V[i];

    }

    contador(V, n);

    for(int i=0; i<n; i++){

        cont3 = 0;

        for(int j=0; j<i; j++){

                if( V[i] == V[j] && i != 0){

            cont3 = 1;

                }
        }

       if(cont3 == 0){

        cout << V[i] << " ano(s): " << cont[V[i]] << " veze(s)" << endl;

       }
    }

    return 0;

}

void contador(int V[], int num){

for(int i=0; i<TAM; i++){

    for(int j=0; j<num; j++){

        if(i == V[j] && V[j]!=0 ){

        cont[V[j]] = cont[V[j]] + 1;

        }
    }

}

}
