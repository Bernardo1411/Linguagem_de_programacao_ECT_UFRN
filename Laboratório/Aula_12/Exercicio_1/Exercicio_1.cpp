#include <iostream>

#define TAM 100

using namespace std;

struct aluno{
float media;
float n1;
float n2;
float n3;
};

bool aprov(aluno estudante);

int main(){

    aluno al;

    cout << " Insira a nota da primeira unidade: ";
    cin >> al.n1;

    cout << " Insira a nota da segunda unidade: ";
    cin >> al.n2;

    cout << " Insira a nota da terceira unidade: ";
    cin >> al.n3;

    cout << (aprov(al)==1?"O aluno foi aprovado":"O aluno foi reprovado") << endl;

 return 0;
}

bool aprov(aluno estudante){

    estudante.media = (estudante.n1+estudante.n2+estudante.n3)/3;

    if(estudante.media >= 7 || ((estudante.media<7 && estudante.media>=5) && estudante.n1>=3 && estudante.n2>=3 && estudante.n3>=3)) return true;
    else return false;

}
