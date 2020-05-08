#include <iostream>

using namespace std;

int main()
{ int i, tam;

    cout << "Insira o tamanho do quadrado: " << endl;
    cin >> tam;

    for(int i = 1; i<=tam; i++){
       if(i != tam){
        cout << "*";
       }
       else{
        cout << "*\n";
       }

    }
for(int i = 1; i<=tam-2; i++){
    for(int i = 1; i<=tam; i++){

      if(i == 1){

            cout << "*";
      }

      else if(i == tam)
        {
        cout << "*" << endl;
      }
      else{

        cout << " " ;
      }

        }
}
if(tam != 1){
for(int i = 1; i<=tam; i++){

        cout << "*";

    }
}

    return 0;
}
