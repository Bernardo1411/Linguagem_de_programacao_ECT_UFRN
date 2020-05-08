#include <iostream>

using namespace std;

bool primo(int);

int main()
{
    int num;
    bool r;

    cout << "Insira um inteiro" << endl;
    cin >> num;

    r = primo(num);

    if(r == 1) cout << "o numero eh PRIMO!" << endl;
    else cout << "o numero NAO eh primo" << endl;

    return 0;
}

 bool primo(int n){

 for(int i = 2; i<n; i++){

    if(n%i == 0){

         return 0;

        break;
    }
    else if((n%i != 0) && (i == n-1)){
        return 1;
    }
  }
 }
