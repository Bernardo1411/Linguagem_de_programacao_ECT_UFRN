#include <iostream>

using namespace std;

int main(){
int u1, u2, u3, u4;
float preco;
char cod;

    preco = 0;
    cout << "Se voce deseja carvao, digite 1: ";
    cin >> cod;
    if (cod == '1'){
    cout << "Quantas unidades de carvao serao necessarias?: ";
    cin >> u1;
    preco = preco + u1*15.00;
    }

    cout << "Se voce deseja refrigerante, digite 2: ";
    cin >> cod;
    if (cod == '2'){
    cout << "Quantas unidades de refrigerante serao necessarias?: ";
    cin >> u2;
    preco = preco + u2*3.00;
    }

    cout << "Se voce deseja cerveja, digite 3: ";
    cin >> cod;
    if (cod == '3'){
    cout << "Quantas unidades de cerveja serao necessarias?: ";
    cin >> u3;
    preco = preco + u3*5.00;
    }

    cout << "Se voce deseja carne, digite 4: ";
    cin >> cod;
    if (cod == '4'){
    cout << "Quantas unidades de carne (kg) serao necessarias?: ";
    cin >> u4;
    preco = preco + u4*40.00;
    }

    cout << "\n";
    cout << "O preco total sera de: R$" << preco << " reais" << endl;


    return 0;
}
