#include <iostream>

using namespace std;

float inverte(int);

int main()
{
    int n, i=1;

    cout << "Insira um inteiro: ";
    cin >> n;

    while(n/i>10){

        i = i*10;

    }

    cout << "Invertido: " << inverte(n)*i << endl;

    return 0;
}
float inverte(int n){

    if((n/10)<1) return n%10;

    return n%10 + 0.1*inverte(n/10);

}
