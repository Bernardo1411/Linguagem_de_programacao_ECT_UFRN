#include <iostream>
#define TAM 500

using namespace std;

int main()
{   int n;

    int A[TAM];
    int B[TAM];
    int C[TAM];
    int D[3*TAM];


    cout << "Insira a dimensão do vetor: " << endl;
    cin >> n;

    for(int i=0; i<=n-1; i++){

    cout << "Insira o elemtento " << i << " vetor A" << endl;
    cin >> A[i];

    }
    for(int i=0; i<=n-1; i++){

    cout << "Insira o elemtento " << i << " vetor B" << endl;
    cin >> B[i];

}
    for(int i=0; i<=n-1; i++){

    cout << "Insira o elemtento " << i << "vetor C" << endl;
    cin >> C[i];

    }

    for(int i=0; i <= n-1; i++){

        D[i] = A[i];
        D[n+i] = B[i];
        D[n+n+i] = C[i];

    }


    for(int i=0; i<=3*n-1; i++){

        cout << D[i];

    }

    return 0;
}
