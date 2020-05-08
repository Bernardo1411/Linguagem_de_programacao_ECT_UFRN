#include <iostream>

using namespace std;

int mdc(int, int);

int main()
{
    int n1, n2, m;

    cout << "Insira o primeiro numero: " << endl;
    cin >> n1;

    cout << "Insira o segundo numero: " << endl;
    cin >> n2;

    m = mdc(n1, n2);

    cout << "O MDC eh: " << m << endl;

    return 0;
}
int mdc(int a, int b)
{
     int m = 1;
     for(int i=1; i<= ((a < b) ? a : b); i++)
     {
        if( (a%i == 0) && (b%i == 0) )
             m = i;
     }


     return m;
 
}
