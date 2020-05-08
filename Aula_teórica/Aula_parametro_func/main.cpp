#include <iostream>
#include <cmath>

using namespace std;

float raizes1(float, float, float);
float raizes2(float, float, float);

int main()
{ float a, b, c, x1, x2;

    cout << "A equacao deve ter o seguinte formato: ax^2 + bx +c, em que a, b e c são os parametros da equacao " << endl;

    cout << "Insira o parametro de x^2: " << endl;
    cin >> a;

    cout << "Insira o parametro de x: " << endl;
    cin >> b;

    cout << "Insira o parametro da constante: " << endl;
    cin >> c;

    x1 = raizes1(a, b, c);
    x2 = raizes2(a, b, c);

    cout << "As raizes de: ";
    cout << a << "x^2 + " << b << "x + " << c << " sao: " << endl;
    cout << "x1: " << x1 << "\n" << "x2: " << x2 << endl;

    return 0;
}

float raizes1(float a, float b, float c){
float x;

    x = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);

return x;

}

float raizes2(float a, float b, float c){
float x;

    x = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);

return x;

}
