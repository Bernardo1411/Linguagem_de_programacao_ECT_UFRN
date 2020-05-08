#include <iostream>
#define TAM 10

using namespace std;

int main()
{
    int V[TAM];
    int N, i=0;

    cout << "Insira um valor menor 1024: " << endl;
    cin >> N;

    int aux=N;

    while(aux>=1){

        V[i] = aux%2;

        aux = aux/2;

        i++;

    }

    for(int j=i; j>=0; j--){

        if(V[j] == 0 || V[j] == 1) cout << V[j];

    }

    return 0;
}
