#include <iostream>

using namespace std;

int main()
{
    float x, y;
    char op;

    cout << "Insira o primeiro operando (REAL):";
    cin >> x;
    cout << "Insira o segundo operando (REAL):";
    cin >> y;
    cout << "Insira o tipo operador(+,-,*,/,%):";
    cin >> op;

    switch (op){
    case '+':
    cout << "O resultado da soma e: " << x+y << endl;
    break;
    case '-':
    cout << "O resultado da subtracao e: " << x-y << endl;
    break;
    case '*':
    cout << "O resultado da multiplicacao e: " << x*y << endl;
    break;
    case '/':
    cout << "O resultado da divisao e: " << x/y << endl;
    break;
    case '%':
    cout << "O resto de x/y e: " << "x % y" << endl;
    break;
    default:
        cout << " Voce nao inseriu um operador valido"<<endl;
    }

    return 0;
}
