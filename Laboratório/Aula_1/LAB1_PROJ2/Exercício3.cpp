#include <iostream>

using namespace std;

int main()
{int raio, pi;
    pi = 3.14159;
    cout << "Insira o valor do raio (cm):";
    cin >> raio;
    cout << "O diametro e:" << 2*raio <<"cm" <<endl;
    cout << "A circunferencia e:" << 2*pi*raio << "cm" << endl;
    cout << "A area do ciculo e:" << pi*raio*raio << "cm2" << endl;
    return 0;
}
