#include <iostream>

using namespace std;

float calcNota(float, float, float);
float menorNota(float, float, float);

int main()
{   float n1, n2, n3, nota, menor;

    cout << "Insira a nota da primeira unidade: " << endl;
    cin >> n1;

    cout << "Insira a nota da segunda unidade: " << endl;
    cin >> n2;

    cout << "Insira a nota da terceira unidade: " << endl;
    cin >> n3;

    nota = calcNota(n1, n2, n3);
    menor = menorNota(n1, n2, n3);

    cout << "A nota necessaria para passar eh: " << nota <<endl;
    cout << "A menor nota foi: " << menor << endl;

    return 0;
}

float calcNota(float a, float b, float c){
float media;

media = (a+b+c)/3;

return (10-media);

}

float menorNota(float nota1, float nota2, float nota3){

if((nota1<=nota2) && (nota1<=nota3)){
    return nota1;
}
else if((nota2<=nota1) && (nota2<=nota3)){
    return nota2;
}
else{
    return nota3;
}

}
