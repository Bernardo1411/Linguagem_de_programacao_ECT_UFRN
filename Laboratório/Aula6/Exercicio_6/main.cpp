#include <iostream>

using namespace std;

double maior(double, double &);

int main()
{ double n, m, ant = -9999999;

 for(int i=1; i<=3; i++){

    cout << "Insira o " << i << " numero: " << endl;
    cin >> n;

    m = maior(n, ant);

 }

    cout << "O maior numero eh: " << m << endl;

    return 0;
}

double maior(double num, double &prev){

if(num > prev){
    prev = num;
    return num;
}

else return prev;

}
