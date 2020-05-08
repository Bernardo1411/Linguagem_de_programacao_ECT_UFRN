#include <iostream>
#define TAM 100

using namespace std;

int main()
{
    float V[TAM];
    float maior[TAM];
    float menor[TAM];
    int n, cont=0;
    float sum=0, media;

    cout << "Insira a quantidade de alunos: " << endl;
    cin >> n;

    for(int i=0; i<=n-1; i++){

        cout << "Insira a altura do aluno" << i<<": ";
        cin >> V[i];

        sum = sum + V[i];

    }

    media = sum/n;

    for(int i=0; i<=n-1; i++){

        if(V[i]>media){

            maior[cont] = V[i];

            cont = cont + 1;

        }
    }

     cout << " Estatura acima da media: " << endl;

     for(int i=0; i<=cont; i++){

        cout << maior[i] << endl;

    }

    cont = 0;

    for(int i=0; i<=n; i++){

        if(V[i]<media){

            menor[cont] = V[i];

            cont = cont + 1;
        }
    }

    cout << " Estatura abaixo da media: " << endl;

     for(int i=0; i<=cont; i++){

        cout << menor[i] << endl;

    }

    return 0;
}
