#include <iostream>

using namespace std;

int main()
{float n1, n2, n3;

    cout << "Insira algarismos com valores diferentes" << endl;

    cout << "Insira um valor" << endl;
    cin >> n1;

    cout << "Insira um valor" << endl;
    cin >> n2;

    cout << "Insira um valor" << endl;
    cin >> n3;

    cout << "A soma dos operandos e: " << n1+n2+n3 << endl;
    cout << "A media dos operandos e: " << (n1+n2+n3)/3 << endl;
    cout << "O produto dos operandos e: " << n1*n2*n3 << endl;

     if ((n1>=n2 && n1>=n3) && ((n2 != n3) || (n1 != n3))) cout << "O maior valor e: " << n1 << endl;
     else if ((n2>=n1 && n2>=n3) && ((n1 != n3) || (n2 != n3))) cout << "O maior valor e: " << n2 << endl;
     else if ((n3>=n1 && n3>=n2) && ((n1 != n3) || (n2 != n3))) cout << "O maior valor e: " << n3 << endl;
     else cout << "Todos valores sao iguais\n";

    if ((n1<=n2 && n1<=n3) && ((n2 != n3) || (n1 != n3))) cout << "O menor valor e: " << n1 << endl;
     else if ((n2<=n1 && n2<=n3) && ((n1 != n3) || (n2 != n3))) cout << "O menor valor e: " << n2 << endl;
     else if ((n3<=n1 && n3<=n2) && ((n1 != n3) || (n2 != n3))) cout << "O menor valor e: " << n3 << endl;
     else cout << "Todos valores sao iguais\n";

    return 0;
}
