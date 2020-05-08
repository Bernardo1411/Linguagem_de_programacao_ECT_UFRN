#include <iostream>

using namespace std;

int fibonacci(int, int);

int main()
{
    int n, fib, ant, ant2;

    ant = 1;
    ant2 = 0;

    cout << "Insira o numero de termos: " << endl;
    cin >> n;

    cout << ant;

    for(int i=1; i<n; i++){

        fib = fibonacci(ant, ant2);

        cout << fib ;

        ant2 = ant;
        ant = fib;

    }

    return 0;
}
int fibonacci(int a, int b){
 int sum;

 sum = a + b;

 return  sum;

}
