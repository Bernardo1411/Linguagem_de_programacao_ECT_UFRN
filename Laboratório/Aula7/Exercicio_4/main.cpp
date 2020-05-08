#include <iostream>
#define TAM 500

using namespace std;

int main()
{ int V[TAM];
    int A[TAM];
    int n;

    cout << "Insira o tamanho de V:" << endl;
    cin >> n;

    for(int i=0; i<=n-1; i++){

            cout << "Insira o tamanho de V:" << endl;
            cin >> V[i];

    }

    for(int i=0; i<=n-1; i++){

            A[i] = V[n-1-i];

    }

    for(int i=0; i<=n-1; i++){

            cout << A[i];


    }

        return 0;
}
