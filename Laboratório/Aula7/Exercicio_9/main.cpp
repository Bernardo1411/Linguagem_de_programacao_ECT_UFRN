#include <iostream>
#define TAM 100

using namespace std;

void sep(int V[], int );

int Vp[TAM];
int Vi[TAM];

int contp=0, conti=0;

int main()
{   int V[TAM];
    int n;

    cout << " Insira o tamanho do vetor: " << endl;
    cin >> n;

    for(int i=0; i<n; i++){

        cout << "V[" << i << "]: ";
        cin >> V[i];

    }

    sep(V, n);

    for(int i=0; i<contp; i++){

    cout << "Vp[" << i << "]: " << Vp[i] << "\t|\t" << "Vi[" << i << "]: " << Vi[i] << endl;

    }

    return 0;
}

void sep(int V[], int tamanho){

for(int i=0; i<tamanho; i++){

    if(V[i]%2==0){

        Vp[contp] = V[i];
        contp++;
    }

    if(V[i]%2!=0){

        Vi[conti] = V[i];
        conti++;

    }

  }

}
