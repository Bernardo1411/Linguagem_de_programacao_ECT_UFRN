#include <iostream>

using namespace std;

void readCount(char, int &sum);
bool winner(int, int);

int main()
{
    char c;
    int soma1 = 0, soma2 = 0;
    bool r;

    for(int i = 1; i<=3; i++){

        cout << " Insira a conta do jogador 1: " << endl;
        cin >> c;

        readCount(c, soma1);

        cout << " Insira a conta do jogador 2: " << endl;
        cin >> c;

        readCount(c, soma2);

    }

    r = winner(soma1, soma2);

    if(soma1 == soma2){

        cout << "Empate!" << endl;

    }
    else{
            if(r == 1){
                cout << "O vencedor eh o jogador 1" << endl;
            }
            else{
                cout << "O vencedor eh o jogador 2" <<endl;
            }
            }

    return 0;
}
void readCount(char a, int &sum){

    sum = sum + (int)a;

}
bool winner(int sum1, int sum2){

    if(sum1>sum2){

    return 1;

    }

    else return 0;

}
