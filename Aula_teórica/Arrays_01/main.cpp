#include <iostream>

using namespace std;

int main()
{int x[10] = {1, 2, 3, 5, 8, 12, 9, 10, 7, 6}, maior=x[0];


    for(int i=0; i<=9; i++){

        if(x[i]>=maior){

        maior = x[i];

        }
    }

    cout << maior;

    return 0;
}
