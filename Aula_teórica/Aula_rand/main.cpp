#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{ int i, rd, cara, coroa, tent;

    srand(time(NULL));

     cara = 0;
     coroa = 0;
     tent = 0;


  do{
    for(i=0; i<=1000000; i++){

        rd = rand()%2;

        if(rd == 1){
            cara++;
        }
        else{
            coroa++;
        }
    }

        tent++;

        cout << "O numero de vezes que saiu cara na tentativa " << tent << " e: " << cara << endl;
         cout << "O numero de vezes que saiu coroa na tentativa " << tent << " e: " << coroa << endl;

        }while(cara<=coroa);

            cout << "Foram necessarias " << tent << " serie(s) de tentativas, para o numero de caras ser maior que o de coroas";

        return 0;
}
