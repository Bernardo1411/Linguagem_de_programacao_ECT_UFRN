#include <iostream>

#define TAM 50

using namespace std;

void ordenaParImpar(int V[], int);

int main()
{
    int V[TAM];
    int n;

    cout << "Insira o tamanho do vetor: " << endl;
    cin >> n;

    for(int i=0; i<n; i++){

        cout << "V[" << i << "]: ";
        cin >> V[i];

    }

    ordenaParImpar(V, n);

    return 0;
}

void ordenaParImpar(int V[], int N){

    int Vpar[TAM];
    int Vimpar[TAM];
    int cont=0;
    int cont2=0;

    for(int i=0; i<N; i++){

        if(V[i]%2==0){

            Vpar[cont]=V[i];
            cont++;

            for(int j=0; j<cont; j++){

                for(int k=j; k>0; k--){

                    if(Vpar[k]<Vpar[k-1]){

                        int aux = Vpar[k-1];
                            Vpar[k-1] = Vpar[k];
                            Vpar[k] = aux;

                    }

                    else{

                        break;

                    }

                }

            }

        }

        else{

            Vimpar[cont2]=V[i];
            cont2++;

            for(int j=0; j<cont2; j++){

                for(int k=j; k>0; k--){

                    if(Vimpar[k]>Vimpar[k-1]){

                        int aux = Vimpar[k-1];
                            Vimpar[k-1] = Vimpar[k];
                            Vimpar[k] = aux;

                    }

                    else{

                        break;

                    }

                }

            }

        }

    }

    for(int i=0; i<(cont>cont2 ? cont2:cont)*2; i++){

        V[i*2] = Vimpar[i];
        V[i*2+1] = Vpar[i];

    }

    for(int i=(cont>cont2 ? cont2:cont)*2+1; i<N; i++){

        V[i] = (cont>cont2 ? Vpar[i-cont2]:Vimpar[i-cont]);

    }

    cout << "V = { ";

    for(int i=0; i<N; i++){

        cout << V[i] << "\t";

    }

    cout << " }" << endl;

}
