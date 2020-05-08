#include<iostream>

using namespace std;

int main(){

float d, v;

cout << "Insira a velocidade atual (km/h):_";
cin >> v;

d = (v/10)*(v/10);

cout << "A distancia necessaria para se evitar uma colisao a essa velocidade e:_" << d << "\t" << "m"<<endl;
}
