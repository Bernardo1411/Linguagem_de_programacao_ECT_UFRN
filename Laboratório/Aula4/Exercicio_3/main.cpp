#include <iostream>

using namespace std;

int main()
{int I;
float A, B, C, a, b, c;

    cout << "Insira o valor de A: " << endl;
    cin >> a;

    cout << "Insira o valor de B: " << endl;
    cin >> b;

    cout << "Insira o valor de C: " << endl;
    cin >> c;

    cout << "Insira o valor de I (1, 2 ou 3): " << endl;
    cin >> I;

A = a;
B = b;
C = c;

    if(I == 1){
    if(A >= B && A>=C && B>=C) cout << c << b << a;
    else if(A >= B && A>=C && C>B) cout << b << c << a;
    else if(B >= A && B>=C && A>=C) cout << c << a << b;
    else if(B >= A && B>=C && C>A) cout << b << c << a;
    else if(C >= A && C>=B && A>=B) cout << b << a << c;
    else if(C >= A && C>=B && B>A) cout << a << b << c;
    else cout << "Todos os numeros sao iguais";
    }

    if(I == 2){
    if(A >= B && A>=C && B>=C) cout << a << b << c;
    else if(A >= B && A>=C && C>B) cout << a << c << b;
    else if(B >= A && B>=C && A>=C) cout << b << a << c;
    else if(B >= A && B>=C && C>A) cout << a << c << b;
    else if(C >= A && C>=B && A>=B) cout << c << a << b;
    else if(C >= A && C>=B && B>A) cout << c << b << a;
    else cout << "Todos os numeros sao iguais";
    }

    if(I == 3){
        if(A >= B && A>=C) cout << b << a << c;
        if(B >= A && B>=C) cout << a << b << c;
        if(C >= B && C>=A) cout << b << c << a;
    }

    return 0;
}
