#include <iostream>
#define TAM 20

using namespace std;

int main()
{
    int fibo[TAM];

    fibo[0] = 0;
    fibo[1] = 1;

    for(int i = 0; i<=20; i++){

        if(i>1){

        fibo[i] = fibo[i-1]+fibo[i-2];

        }
    }

   for(int i=0; i<=20; i++){

    cout << fibo[i] <<", ";

   }

       return 0;
}
