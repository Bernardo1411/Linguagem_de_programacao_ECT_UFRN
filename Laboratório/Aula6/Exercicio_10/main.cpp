#include <iostream>
#include <cmath>

using namespace std;

float seno(int, int);

int main()
{
    int ang, n;
    float sen;

    n = 20;

    cout << "Insira o angulo desejado: " << endl;
    cin >> ang;

    sen = seno(ang, n);

    cout << "seno(" << ang << ") = " << sen << endl;

    return 0;
}
float seno(int a, int b){

    float soma, fat, ang, rad, pot;
    int cont = 0;

 ang = (float)a;
 rad = ang*4*atan(1.0)/180.0;

 soma = rad;

 for(int i=3; i<b; i+=2){

    fat = 1;
    pot = 1.0;

    for(int j=1; j<=i; j++){


        fat = fat*j;

        pot = pot*rad;

    }

   if(cont%2 != 0){

        soma = soma + pot/fat;

   }
   else{

        soma = soma - pot/fat;

   }

   cont = cont + 1;

   }

   return soma;

 }



