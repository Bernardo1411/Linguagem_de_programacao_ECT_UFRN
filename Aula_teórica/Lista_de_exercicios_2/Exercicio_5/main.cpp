#include <iostream>

using namespace std;

void calcHora(int &, int &, int &);

int main()
{
    int h, m=0, s=0;

    cout << " Insira uma quantidade de tempo em segundos: " << endl;
    cin >> s;

    calcHora(s, m, h);

    cout << h << " hora(s) " << m << " minuto(s) " << s << " segundo(s)" << endl;

    return 0;
}
void calcHora(int &seg, int &minu, int &ho){

    ho = seg/3600;
    minu = (seg%3600)/60;
    seg =  (seg%3600)%60;

}
