#include <iostream>
#include <cmath>

using namespace std;

void primo(int);
void primo2(int);

int main()
{
    for(int i=1; i<=1000; i++){

        primo(i);
        primo2(i);

    }

    return 0;
}

void primo(int num){

    for(int i=2; i<=(num/2); i++){

       if(num%i == 0) {

            cout << num << " Nao eh primo" << endl;
            break;

            }

       if(num%i != 0 && i==num/2) cout << num << " eh primo" << endl;


    }

}

void primo2(int num){


    for(int i=2; i <= sqrt(num); i++){

            if(num%i == 0) {

            cout << num << " Nao eh primo" << endl;
            break;

            }

       if(num%i != 0 && i==sqrt(num)) cout << num << " eh primo" << endl;
       }
}
