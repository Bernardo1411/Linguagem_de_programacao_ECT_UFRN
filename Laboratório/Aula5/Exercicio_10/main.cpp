#include <iostream>

using namespace std;

int main()
{ int num, fat=1;

    cout << "Insira um inteiro positivo: " << endl;
    cin >> num;

cout << "X\t" << "FAT de X\n" << endl;

for(int i = 1; i <=num; i++){

    fat = fat*i;
cout << fat << "\t" << i << endl;

}

    return 0;
}
