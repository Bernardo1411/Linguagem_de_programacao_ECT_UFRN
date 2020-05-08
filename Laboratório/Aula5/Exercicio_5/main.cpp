#include <iostream>

using namespace std;

int main()
{ int i, cont;

cont = 0;

    for(i = 1; i<= 15; i=i+2){

        cont = cont + i;

        cout << " numero atuel: " << i << endl;

    }

    cout << cont;

    return 0;
}
