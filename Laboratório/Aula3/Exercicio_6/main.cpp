#include <iostream>
#include <cmath>

using namespace std;

int main()
{ float peso, altura, imc;

    cout << "Insira seu peso (kg): " << endl;
    cin >> peso;

    cout << "Insira seu altura (m): " << endl;
    cin >> altura;

    cout << "O seu IMC: " << peso/pow(altura,2) << endl;

    imc = peso/pow(altura,2);

if(imc >= 30) cout << "IMC maior que 30. Você está obeso!" << endl;
else if(imc < 30 && imc >= 25 ) cout << "IMC entre 25 e 29,9. Você está acima do peso!" << endl;
else if(imc < 25 && imc >= 18.5 ) cout << "IMC entre 18,8 e 24,9. peso normal" << endl;
else cout << "Menor que 18,5. Você está abaixo do peso!";

    return 0;
}
