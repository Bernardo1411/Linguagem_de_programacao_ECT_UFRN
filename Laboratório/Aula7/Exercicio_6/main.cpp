#include <iostream>
#define TAM 50

using namespace std;

float prodInt(float arg1[], float arg2[], int length);
void produto(float arg1[], float arg2[], int length);

int main()
{   float u[TAM];
    float v[TAM];
    int n;
    float p;

    cout << "Insira o tamanho dos vetores: " << endl;
    cin >> n;

    for(int i=0; i<=n-1; i++){

        cout << "Insira o " << i << " elemento do vetor u: " << endl;
        cin >> u[i];

    }

    for(int i=0; i<=n-1; i++){

        cout << "Insira o " << i << " elemento do vetor u: " << endl;
        cin >> v[i];

    }

    p = prodInt(u, v, n);

    produto(u, v, n);

    cout << "P = " << p << endl;

    return 0;
}

float prodInt(float arg1[], float arg2[],int length){

    float r = 0;

    for(int i=0; i<=length-1; i++){

        r = r + arg1[i]*arg2[i];

    }

    return r;

}

void produto(float arg1[], float arg2[], int length){

    float y[TAM];

    for(int i=0; i<=length-1; i++){

        y[i] = arg1[i]*arg2[i];

    }

    cout << "O produto elemento por elemento: " << endl;

    for(int i=0; i<=length-1; i++){

        cout << y[i] << endl;

    }
}
