#include <iostream>

using namespace std;

int mult(int, int);

int main()
{   int x, y;

    cout << "Insira o primeiro numero: ";
    cin >> x;

    cout << "Insira o segundo numero: ";
    cin >> y;

    cout << "A multiplicacao eh: " << mult(x, y) << endl;

    return 0;
}

int mult(int x, int y){

    if(y==1) return x;

    return x + mult(x, y-1);

}
