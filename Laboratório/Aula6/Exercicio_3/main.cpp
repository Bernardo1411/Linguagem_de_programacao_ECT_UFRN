#include <iostream>

using namespace std;

bool multiple(int, int);

int main()
{
    int n1, n2, ok = 1;
    bool r;

    while(ok == 1){
    cout << "Insira o primeiro inteiro: " << endl;
    cin >> n1;

    cout << "Insira o segundo inteiro: " << endl;
    cin >> n2;

    r = multiple(n1, n2);

    if(r == true){

        cout << "Eh multiplo!" << endl;

    }
    else cout << " NAO eh multiplo!" << endl;

    cout << "Deseja testar de novo? (sim = 1): " << endl;
    cin >> ok;
    }

    return 0;
}

bool multiple(int a, int b){

    //if(a%b == 0) return true;
    //else return false;

    //return (a%b == 0) ? true: false;

    return !(a%b) ;

}
