#include <iostream>

using namespace std;

int main()
{
    cout << "tamanho do inteiro:       " << sizeof(int) << " bytes" << endl;
    cout << "tamanho do float:         " << sizeof(float) << " bytes" << endl;
    cout << "tamanho do double:        " << sizeof(double) << " bytes" << endl;
    cout << "tamanho do bool:          " << sizeof(bool) << " bytes" << endl;
    cout << "tamanho do char:          " << sizeof(char) << " bytes" << endl;
    cout << "tamanho do short int:     " << sizeof(short int) << " bytes" << endl;
    cout << "tamanho do long int:      " << sizeof(long int) << " bytes" << endl;
    cout << "tamanho do long double:   " << sizeof(long double) << " bytes" << endl;
    cout << "tamanho do wchar_t:       " << sizeof(wchar_t) << " bytes" << endl;
    cout << "tamanho do unsigned char: " << sizeof(unsigned char) << " bytes" << endl;
    return 0;
}
