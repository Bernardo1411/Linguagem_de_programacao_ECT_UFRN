#include <iostream>

using namespace std;

int pot(int, int);

int main()
{
    int x, y;

    cout << "Insira um numero: ";
    cin >> x;

    cout << "Insira uma potencia: ";
    cin >> y;

    cout << "A potencia eh: " << pot(x,y) << endl;

    return 0;
}

int pot(int x, int y){

    if(y==1) return x;

    return x*pot(x, y-1);

}
