#include <iostream>
#define TAM 3
#define TAM2 5

using namespace std;

int main()
{
    int A[TAM] = {1, 2, 3};
    int B[TAM2] = {10, 20, 30, 40, 50};
    int C[TAM + TAM2];


    if( TAM<TAM2){
    for(int i=0; i<=TAM2-1; i++){

        if(i<=TAM-1){

                C[i*2] = A[i];
                C[i*2+1] = B[i];

        }
        else if(i>TAM-1){

                C[i+TAM] = B[i];

        }

    }
    }

    if( TAM>TAM2){
    for(int i=0; i<=TAM-1; i++){

        if(i<=TAM2-1){

                C[i*2] = A[i];
                C[i*2+1] = B[i];

        }
        else if(i>TAM2-1){

                C[i+TAM2] = A[i];

        }

    }
    }

   for(int i=0; i<=TAM+TAM2-1; i++){

    cout << C[i] << ", ";

   }
    return 0;
}
