#include <iostream>

using namespace std;

void tempo(int);

int main()
{
    int n;

    cout << "Insira uma quantidade de tempo: " << endl;
    cin >> n;

    tempo(n);

    return 0;
}

void tempo(int num){

    int h, m, s;

    h = num/3600;
    m = (num%3600)/60;
    s = ((num%3600)%60)/60;

    cout << h << " horas " << m << " minutos " << s << " segundos " << endl;

}
