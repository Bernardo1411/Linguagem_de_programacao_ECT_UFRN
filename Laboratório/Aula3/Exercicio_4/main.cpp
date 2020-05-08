#include <iostream>

using namespace std;

int main()
{
    cout << "Tabela verdade para !(p && q): " << endl;
    cout << "p" << "\t"  << "q" << "\t"  << "(!p && q)" <<endl;
    cout << 0 << "\t" << 0 << "\t" << !(0 && 0) << endl;
    cout << 0 << "\t" << 1 << "\t"  << !(0 && 1) << endl;
    cout << 1 << "\t" << 0 << "\t"  << !(1 && 0) << endl;
    cout << 1 << "\t"  << 1 << "\t"  << !(1 && 1) << endl;

    cout << "Tabela verdade para (!p) || (!q): " << endl;
    cout << "p" << "\t"  << "q" << "\t"  << "(!p) || (!q)" << endl;

    cout << 0 << "\t"  << 0 << "\t"  << (!0 || !0) << endl;
    cout << 0 << "\t"  << 1 << "\t"  << (!0 || !1) << endl;
    cout << 1 << "\t"  << 0 << "\t"  << (!1 || !0) << endl;
    cout << 1 << "\t"  << 1 << "\t"  << (!1 || !1) << endl;

    return 0;
}
