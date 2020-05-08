#include <iostream>

using namespace std;

bool par(int);

int main()
{ int n, ok=1;
  bool r;

  while(ok == 1){
    cout << "Insira um inteiro: " << endl;
    cin >> n;

    r = par(n);

    if(r == true) cout << "PAR" << endl;
    else cout << "IMPAR" << endl;

   cout << "Deseja inserir outro numero? (sim = 1)" << endl;
   cin >> ok;

  }
    return 0;
}

bool par(int a){

 return !(a%2);

}
