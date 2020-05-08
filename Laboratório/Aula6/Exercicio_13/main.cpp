#include <iostream>
#include <cmath>

using namespace std;

int perfect(int);

int main()
{
    int p;

    for(int i=1; i<=1000; i++){

    p = perfect(i);

    if(p>0){

    cout << p << endl;

        }

    }
    return 0;
}
 int perfect(int number){
     int sum=0;

    for(int i=1; i<number; i++){

            if(number%i==0){

                sum = sum + i;

            }

    }

 return (sum==number ? sum : 0);

 }
