#include <iostream>
#define TAM 50

using namespace std;

int loc(char V[], char);

int main()
{
    char V[TAM];
    char letra = 'c';
    int pos;

    cout << "Digite seu nome:" << endl;
    cin.getline(V, TAM);

    pos = loc(V, letra);

    if(pos == -1){

        cout << "Nao tem letra C na string" << endl;

    }

    else cout << "A letra C esta na " << pos << " posicao da string" << endl;

    return 0;
}

int loc(char V[], char letra){

    int r = -1;

for(int i=0; i<TAM; i++){

    if(V[i] == letra){

        r = i;

        break;

    }

}

return r;

}
