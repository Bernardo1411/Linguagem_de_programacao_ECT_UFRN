#include <iostream>
#include<cmath>

using namespace std;

int main()
{float r, altura, area, litros, lata;

    const float pi = atan(1);

    cout << "Insira o raio do tanque (m): " << endl;
    cin >> r;

    cout << "Insira a altura do tanque (m): " << endl;
    cin >> altura;

    area = pi*pow(r,2)*altura + 2*(pi*pow(r,2)) ;
    litros = area/3;
    lata = litros/5;

    if(lata >= ((int)lata + 0.1)){
      lata = (int)++lata;
    cout << "A area total e de " << area << " m^2" << endl;
    cout << lata << " latas serao necessarias" << endl;
    cout << "A conta final eh de R$ " << lata*50 << " reais";
    }

    else{
     lata = (int)lata;
    cout << "A area total e de " << area << " m^2" << endl;
    cout << lata << " latas serao necessarias" << endl;
    cout << "A conta final eh de R$ " << lata*50 << " reais";
    }

    return 0;
}
