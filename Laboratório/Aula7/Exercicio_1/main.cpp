#include <iostream>
#define TAM 5

using namespace std;

int main()
{
    int A[TAM];
    int B[TAM];

    for(int i=0; i<=TAM-1; i++){

            cout << "Insira os elementos da matriz A: " << endl;
            cin >> A[i];


            B[4-i] = A[i];

    }

    for(int i=0; i<=TAM-1; i++){

        cout << A[i] << "|" << B[i] << endl;

    }

    return 0;
}
