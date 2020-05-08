#include <iostream>

using namespace std;

struct ponto{
int x;
int y;
};

struct retangulo{
ponto inf;
ponto sup;
};

bool dentro(retangulo r, ponto p);

int main()
{   ponto p;
    retangulo r;
    bool v;

    r.inf.x = 1;
    r.inf.y = 1;
    r.sup.x = 9;
    r.sup.y = 7;

    cout << "Insira a coordenada x do ponto: ";
    cin >> p.x;

    cout << "Insira a coordenada y do ponto: ";
    cin >> p.y;

    v = dentro(r, p);

    cout << (v==1? "Verdadeiro":"Falso") << endl;

    return 0;
}

bool dentro(retangulo r, ponto p){

    return (p.x>=r.inf.x && p.x<=r.sup.x && p.y>=r.inf.y && p.y<=r.sup.y ? true:false);

}
