#include <iostream>

using namespace std;

int main()
{   int i;
    float n, ant;

    ant = -9999999999;

    for(i = 1; i<=10; i++){

    cout << "Insira um numero: " << endl;
    cin >> n;

    if(n>ant){

        ant = n;

    }

    }

    cout << "O maior valor eh: " << ant;

    return 0;
}
