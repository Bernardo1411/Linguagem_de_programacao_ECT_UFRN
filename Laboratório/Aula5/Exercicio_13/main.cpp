#include <iostream>

using namespace std;

int main()
{int n, cont;
double pi, den, precisao, p;

    den = 1.0;
    pi = 0.0;
    cont = 1;

    cout << "Insira insira o valor pi (3.14/3.141/3.1415/3.14159): " << endl;
    cin >> p;

    cout << "Insira insira a precisao de pi: " << endl;
    cin >> precisao;

    cout << "Termos\t" << "pi" << endl;

while((pi >= p+p*precisao) || (pi <= p-p*precisao)){

       if(cont%2 == 0){

        pi = pi - (4/den);

       }
        else{
        pi = pi + (4/den);
        }

        den = den + 2;

        cout << cont << "\t" << pi << endl;

        cont = cont + 1;
    }

         cout << "Foram necessarias " << cont-1 << " simulacoes, para atingir a precisao desejada" << endl;

    return 0;
}
