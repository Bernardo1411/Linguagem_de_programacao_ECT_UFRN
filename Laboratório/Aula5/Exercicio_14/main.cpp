#include <iostream>

using namespace std;

int main()
{int n, n1, n2, n0;

    n0 = 2;
    n1 = 7;
    n2 = 3;

    cout << "Insira o numero de termos: " << endl;
    cin >> n;

    for(int i=0; i<n; i++){
        if(i%3 == 0){
            cout<<n0<<", ";
            n0 = n0*2;
        }else if(i%3 == 1){
            cout<<n1<<", ";
            n1 = n1*3;
        }else{
            cout<<n2<<", ";
            n2 = n2*4;
        }
    }

    return 0;
}
