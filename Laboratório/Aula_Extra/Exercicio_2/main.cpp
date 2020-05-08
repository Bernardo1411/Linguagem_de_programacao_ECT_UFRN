#include <iostream>
#define TAM 100

using namespace std;

void junto(int V1[], int V2[], int, int);

int V3[2*TAM];

int main()
{
    int V1[TAM];
    int V2[TAM];
    int T1, T2;

    cout << "Insita o tamanho do primeiro vetor: " << endl;
    cin >> T1;

    cout << "Insita o tamanho do segundo vetor: " << endl;
    cin >> T2;

    for(int i=0; i<T1; i++){

        cout << "Insita o valor de V1[" << i << "]: ";
        cin >> V1[i];

    }

    for(int i=0; i<T2; i++){

        cout << "Insita o valor de V2[" << i << "]: ";
        cin >> V2[i];

    }

    junto(V1, V2, T1, T2);

    for(int i=0; i<(T1+T2); i++){

        cout << "V3[" << i <<"]: " << V3[i] << endl;

    }

    return 0;
}

void junto(int V1[], int V2[], int T1, int T2){

for(int i=0; i<(T1<T2 ? T1 : T2)*2; i++){

    V3[2*i] = V1[i];
    V3[2*i+1] = V2[i];

}

for(int i=(T1<T2 ? T1 : T2)*2; i<(T1+T2); i++){

    if(T1<T2){

        V3[i] = V2[i-T1];

    }
    if(T1>T2){

        V3[i] = V1[i-T2];

    }

}

}
