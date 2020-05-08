#include <iostream>

using namespace std;

int main()
{int num, fat;
float e;

e = 0;

    cout << "Insira um inteiro positivo: " << endl;
    cin >> num;

for(int i=1; i <= num; i++){

    fat = 1;

    for(int j=1; j<=i; j++){

    fat = fat*j;


    }

    e = e + (1.0/fat);

}

e = e + 1;

cout << "O resultado eh: " << e;

    return 0;
}
