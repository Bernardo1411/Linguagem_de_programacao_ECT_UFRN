#include <iostream>

using namespace std;

bool primo(int, int );

int main()
{   int n, i;

    cout << "Insira um inteiro: ";
    cin >> n;

    i = n/2;

    cout << (primo(n, i)==false ? " nao eh primo " : " primo ") << endl;

    return 0;
}

bool primo(int n, int i){

 if(n%i == 0 && i>1){

    return false;

 }

 if(i == 1){

  return true;

 }

 return primo(n, i-1);

}
