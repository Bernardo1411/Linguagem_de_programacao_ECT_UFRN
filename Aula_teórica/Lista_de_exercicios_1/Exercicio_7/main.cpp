#include <iostream>

using namespace std;

void tempo(int);

int main()
{
    int num;

    cout << "Insira uma quantidade de tempo em segundos: " << endl;
    cin >> num;

    tempo(num);

    return 0;
}

void tempo(int n){
 int h, m, s;

 h = n/3600;
 m = (n%3600)/60;
 s = (n%3600)%60;

 cout << " --------------Tempo----------- " << endl;
 cout << h << " hora(s) : " << m << " minuto(s) : " << s << " segundo(s) " << endl;

}
