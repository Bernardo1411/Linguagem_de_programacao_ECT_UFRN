#include <iostream>

using namespace std;

int maior(int, int, int);

int main()
{ int n1, n2, n3, num;

    cout << "Insira o primeiro inteiro: " << endl;
    cin >> n1;

    cout << "Insira o segundo inteiro: " << endl;
    cin >> n2;

    cout << "Insira o terceiro inteiro: " << endl;
    cin >> n3;

    num = maior(n1, n2, n3);

    cout << "O maior numero eh: " << num << endl;

    return 0;

}

int maior(int a,int b,int c){

    if(a>=b && a>=c){
        return a;
    }
    else if(b>=a && b>=c){
        return b;
    }
    else{
        return c;
    }

}
