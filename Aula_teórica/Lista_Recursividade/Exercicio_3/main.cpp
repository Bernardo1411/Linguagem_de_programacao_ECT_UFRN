#include <iostream>

using namespace std;

int binario(int);

int main()
{
    int n;

    cout << "Insira um inteiro" << endl;
    cin >> n;

    cout << binario(n) << endl;

    return 0;

}

int binario(int n){

    int num = n%2;

    if(n<=1){

        return num;

    }

    return  num + 10*binario(n/2);

}

