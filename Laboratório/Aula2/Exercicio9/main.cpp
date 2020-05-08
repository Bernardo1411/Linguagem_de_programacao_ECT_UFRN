#include <iostream>

using namespace std;

int main()
{   long int s;
    int m, d, h, segundos;

    cout << "Insira um numero de segundos" << endl;
    cin >> s;

    d = s/86400;
    h = (s%86400)/(3600);
    m = ((s%86400)%3600)/60;
    segundos = ((s%86400)%3600)%60;

    cout << d << " dia(s)  " << h << " hora(s) " << m << " minuto(s) " << segundos << " segundo(s) ";

    return 0;
}
