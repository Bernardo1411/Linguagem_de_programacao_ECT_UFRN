#include <iostream>

using namespace std;

int main()
{ int a, b, c, brancos, nulos;

    cout << "Insira a quatidade votos para o candidato A: " << endl;
    cin >> a;

    cout << "Insira a quatidade votos para o candidato B: " << endl;
    cin >> b;

    cout << "Insira a quatidade votos para o candidato C: " << endl;
    cin >> c;

    cout << "Insira a quatidade votos nulos: " << endl;
    cin >> nulos;

    cout << "Insira a quatidade votos brancos: " << endl;
    cin >> brancos;

    cout << "A quantidade total de eleitores e: " << a+b+c+brancos+nulos << endl;
    int total = a+b+c+brancos+nulos;
    cout << "O candidato A teve " << ((float)a /total)*100 << " % dos votos validos" << endl;
    cout << "O candidato B teve " << ((float)b /total)*100 << " % dos votos validos" << endl;
    cout << "O candidato C teve " << ((float)c /total)*100 << " % dos votos validos" << endl;
    cout << ((float)nulos/total)*100 << " % dos votos sao nulos" << endl;
    cout << ((float)brancos/total)*100 << " % dos votos sao brancos" << endl;

    cout << "quantidade de votos validos: " << a+b+c << endl;
    int validos = a+b+c;

    cout << "percentual dos votos validos: " << ((float)validos/total)*100 << " %" << endl;



    return 0;
}
