#include <iostream>
#define TAM 500

using namespace std;

int main()
{   int A[TAM];
    int B[TAM];
    int D[2*TAM];
    int n, num;
    int cont = 0;

    cout << "Insira a dimensão dos vetores: " << endl;
    cin >> n;

    do{

        cout << "Insira o " << cont << " elemento da matriz A: " << endl;
        cin >> num;

        if(num%2 == 0){

            A[cont] = num;
            cont++;
            }

        else{

            cout << "Insira um numero par!" << endl;

        }

    }while(cont<=n-1);

    cont =0;

     do{


        cout << "Insira o " << cont << " elemento da matriz B: " << endl;
        cin >> num;

        if(num%2 != 0){

            B[cont] = num;
            cont++;
        }

        else{

            cout << "Insira um numero impar!" << endl;

        }

    }while(cont<=n-1);

    for(int i=0; i<=n-1; i++){

        D[i] = A[i];
        D[i+n] = B[i];

    }

    for(int i=0; i<=2*n-1; i++){

        cout << D[i];

    }

    return 0;
}
