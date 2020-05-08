#include <iostream>
#include <iomanip>

using namespace std;
//teste

int main()
{
    //cout << setiosflags(ios::fixed);
    //cout << setiosflags(ios::showpoint);
    cout << setprecision(10);
    cout << setfill('-');

    cout << "Constantes" << setw(20) << "Valor" <<
endl;
cout << "Pi " << setw(20) << 3.141592653589793 <<
endl;
cout << "Euler " << setw(20) << 2.718281828459045
<< endl;
cout << "Aureo " << setw(20) << 1.618033988749895
<< endl;
cout << "Unidade " << setw(20) << 1. << endl;
return 0;
}
