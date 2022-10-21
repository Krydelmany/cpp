#include <iostream>

using namespace std;

main(){setlocale(LC_ALL,"portuguese");

//programa que fica perguntando preço dos produtos e assim que a pessoa informa vai calculando e perguntando se deseja informar mais.
float lp,cont = 0, tentativa;
char produto;

    while (lp != 0){
    
    cout<<"Digite o valor do produto ou digite '0' para sair: "<<endl;
    cin>>lp;
    
    cont+=lp;
    cout<<"Deseja sair?"<<endl;  // você pode finalizar antes do processo ou ele ira te perguntar se deseja sair /// incrementar mais ao programa.
    cin>>produto;

    if (produto == 'S' or produto == 's') // pergunta se deseja sair
    break;
    }
    cout<<cont;
}
