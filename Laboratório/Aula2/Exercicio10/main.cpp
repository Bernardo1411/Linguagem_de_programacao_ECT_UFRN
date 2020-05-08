#include <iostream>
#include <cmath>

using namespace std;

int main()
{ float r;
const double pi = 4*atan(1);
    // Calcula area e comprimento da circunferencia (LETRA A)
    cout << "Insira o valor do raio desejado (cm): " << endl;
    cin >> r;

    cout << "O comprimento do circulo e: " << 2*pi*r << " cm" << endl;
    cout << "A area do circulo e: " << pi*r*r << " cm^2" << endl;
    cout << "\n";

    // Converte numero complexo para forrmato trigonometrico (LETRA B)
   float real, imag;

    cout<< "Insira a parte real do numero complexo: ";
    cin >> real;

    cout<< "Insira a parte imaginaria do numero complexo: ";
    cin >> imag;

        cout << "O modulo do complexo e: " << sqrt(pow(real,2) + pow(imag,2)) << endl;
        cout << "O angulo do complexo e: " << atan(-imag/real) << endl;

    return 0;
}
