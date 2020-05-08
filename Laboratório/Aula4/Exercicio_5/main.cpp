#include <iostream>

using namespace std;

int main()
{int op, un;
float preco, pag, troco;

    cout << " Opcao\t" << "   Produto\t  " << " Preco\t " << endl;
    cout << "   1  \t" << "Agua Mineral\t" << "R$ 2,00\t" << endl;
    cout << "   2  \t" << "Refrigerante\t" << "R$ 3,00\t" << endl;
    cout << "   3  \t" << "     Suco   \t" << "R$ 4,00\t" << endl;
    cout << "   4  \t" << " Energetico \t" << "R$ 5,00\t" << endl;

    cout << "Insira  a opcao desejada: " << endl;
    cin >> op;

    if(op >= 1 && op <= 4){

    switch(op){
case 1:
    cout <<  "Agua Mineral\t" << "R$ 2,00\t" << endl;

    cout << "Quantas unidades?: " << endl;
    cin >> un;

   preco = 2;

   break;

case 2:
    cout << "Refrigerante\t" << "R$ 3,00\t" << endl;

    cout << "Quantas unidades?: " << endl;
    cin >> un;

    preco = 3;

    break;

case 3:
    cout << "     Suco   \t" << "R$ 4,00\t" << endl;

    cout << "Quantas unidades?: " << endl;
    cin >> un;

    preco = 4;

    break;

case 4:
    cout << " Energetico \t" << "R$ 5,00\t" << endl;

    cout << "Quantas unidades?: " << endl;
    cin >> un;

    preco = 5;

    break;

    }

    if(un >= 1){

            preco = preco*un;

            cout << "O valor a ser pago e: R$" << preco << " reais" << endl;

            cout << "Insira o pagamento (em reais): R$";
            cin >> pag;
             if(pag >= preco){
                troco = pag - preco;

                cout << "O troco eh de: R$" << troco << " reais" << endl;
                cout << "Compra efetuado com sucesso\n" << "Volte sempre!" << endl;

             }
             else cout << "Quantia insuficiente" << endl;

    }
    else cout << "Quantidade de unidades invalida. A operacao sera encerrada" << endl;
    }
    else cout << "Opcao invalida!\n" << "Encerrando operacao...";

    return 0;
}
