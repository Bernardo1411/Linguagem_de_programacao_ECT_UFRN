#include <iostream>

using namespace std;

bool maiorInvertido(int, int);
int inverteNumero(int);

int main()
{   int n1, n2;
    bool r;

    cout << "Insira o primeino natural: " << endl;
    cin >> n1;

    cout << "Insira o segundo natural: " << endl;
    cin >> n2;

    if(n1>=0 && n2>=0 && n1%1 == 0 && n2%1 == 0){

        r = maiorInvertido(n1, n2);

        if(r == 1){
        cout << "O resultado eh VERDADEIRO!" << endl;
        }
        else cout << "O resultado eh Falso!" << endl;

    }
    else cout << "O numerodo deve ser natural!" << endl;

    return 0;
}

 bool maiorInvertido(int a, int b){
 int inv1, inv2;

 inv1 = inverteNumero(a);
 inv2 = inverteNumero(b);

 if(inv1 > inv2){

    return 1;
 }
 else {
        return 0;
    }
 }

 int inverteNumero(int x){
 int N, inverso, i, ant, cont;
 float num;

 N=1;

 while(x/N >= 10){
    N = 10*N;
    }
    num = 0;
    i = 10;
    inverso = (int)x/N;
    ant = 0;
    cont = 1;

    while((x/i)>=1){

    num = x%i;
    num = (num - ant)*N/cont;

    ant = x%i;

    inverso= inverso + (int)num;

    N = N/10;
    i = i*10;
    cont = cont*10;

    }
    cout << "O inverso eh: " << inverso << endl;

    return inverso;

 }




