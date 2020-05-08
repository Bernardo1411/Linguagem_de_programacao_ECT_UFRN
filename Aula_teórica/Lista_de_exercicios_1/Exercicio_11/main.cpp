#include <iostream>

using namespace std;

bool digitos(int, int);

int main()
{
    int n1, n2;
    bool r;

    cout << "Insira o primeiro inteiro: " << endl;
    cin >> n1;

    cout << "Insira o segundo inteiro: " << endl;
    cin >> n2;

    r = digitos(n1, n2);

    if(r == 1) cout << "VERDADEIRO!";
    else cout << "FALSO!";

    return 0;
}

bool digitos(int a, int b){
 int cont;

 cont = 10;

 while((b/cont) >= 1){

    cont = cont*10;

 }

 if((a%cont) == b){

    return 1;
 }
 else{

    return 0;
 }
}
