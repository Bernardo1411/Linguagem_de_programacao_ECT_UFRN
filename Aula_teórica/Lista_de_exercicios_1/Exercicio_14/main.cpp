#include <iostream>
#include <cmath>

using namespace std;

bool circulo(float, float, float, float, float);

int main()
{   float x0, y0, x, y, r;
    bool resultado;

    cout << "Insira o eixo x do centro do circulo: " << endl;
    cin >> x0;

    cout << "Insira o eixo y do centro do circulo: " << endl;
    cin >> y0;

    cout << "Insira o eixo x do ponto: " << endl;
    cin >> x;

    cout << "Insira o eixo y do ponto: " << endl;
    cin >> y;

    cout << "Insira o raio do circulo: " << endl;
    cin >> r;


    resultado = circulo(x0, y0, x, y, r);

    if(resultado == 1) cout << "O ponto esta dentro do circulo. VERDADEIRO!" << endl;
    else cout << "O ponto NAO esta dentro do circulo. Falso!" << endl;

    return 0;
}

bool circulo(float x0, float y0, float x, float y, float r){
 float raio_ponto;

    raio_ponto = sqrt(pow((x-x0),2) + pow((y-y0),2));

    if(raio_ponto <= r){
        return 1;
    }
    else{
        return 0;
    }

}
