#include <iostream>
#define TAM 20

using namespace std;

int main()
{ int V[TAM];
  int sum, maior, n;


    cout << "Insira a quantidade de numeros que deseja: ";
    cin >> n;

    for(int i=0; i<=n-1; i++){

        cout << "V[" << i << "]: ";
        cin >> V[i];

    }

    maior = V[0];

    for(int i = 0; i<=n-1; i++){
            sum =0;

        for(int j = i; j<=n-1; j++){

            sum = sum + V[j];

            if(sum >= maior){

                maior = sum;

            }
        }
    }

    cout << "A maior soma possivel eh: " << maior << endl;

    return 0;
}
