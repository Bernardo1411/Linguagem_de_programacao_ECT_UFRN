#include <iostream>

#define comp 100

using namespace std;

struct horario{
int hora;
int minuto;
int segundo;
};

struct data{
int dia;
int mes;
int ano;
};

struct compromisso{
char texto[comp];
horario hour;
data date;
};

void busca(compromisso c[], data d, int i);

int main()
{   compromisso c[comp];
    data d;
    int i=0;
    bool continua=true;

    while(continua==1){

    cout << "Insira um compromisso: ";
    cin.getline(c[i].texto, comp);

    cout << "Insira a data do compromisso " << endl;
    cout << "Dia: "; cin >> c[i].date.dia;
    cout << "Mes: "; cin >> c[i].date.mes;
    cout << "Ano: "; cin >> c[i].date.ano;

    cout << "Insira o horario do compromisso " << endl;
    cout << "Hora: "; cin >> c[i].hour.hora;
    cout << "Minuto: "; cin >> c[i].hour.minuto;
    cout << "Segundo: "; cin >> c[i].hour.segundo;

    i++;

    cout << "Deseja inserir outro compromisso?(sim: 1/ Nao: 0): ";
    cin >> continua;

    cin.ignore();

    }

    cout << "Insira uma data para visualizar os compromissos:";
    cout << "Dia: "; cin >> d.dia;
    cout << "Mes: "; cin >> d.mes;
    cout << "Ano: "; cin >> d.ano;

    busca(c, d, i);

    return 0;
}

void busca(compromisso c[], data d, int i){

    if(c[i].date.dia == d.dia && c[i].date.mes == d.mes && c[i].date.ano == d.ano){

        cout << c[i].texto << endl;
        cout << c[i].hour.hora << " hora(s) : " << c[i].hour.minuto << " minuto(s) : " << c[i].hour.segundo << " segundo(s) " << endl;

    }

    if(i==0) return;

    busca(c, d, i-1);

}
