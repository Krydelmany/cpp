#include <iostream>
#include <string.h>

using namespace std;

main(){setlocale(LC_ALL,"portuguese");
float lp,calc, op1, op2, num_sap, valor_sap, qtd_vendida; 
string nome_sap; 

cout<<"Escolha uma opção: ";
cout<<"Digite 1 se deseja fazer o calculo ou digite 2 para fazer uma lista dos sapatos: ";
cin>>op1;

    if(op1 == 1){
        cout<<"Informe o valor do sapato: ";
        cin>>valor_sap;
        cout<<"Informe a quantidade de sapatos vendidos: ";
        cin>> qtd_vendida;
    }
    else if (op1 == 2){
        while(num_sap != 0){
        cout<<"Informe o nome do sapato: ";
        cin>>nome_sap;
        cout<<"Informe o número dele (0 para sair): ";
        cin>>num_sap;
        }
    }
    else
    cout<<"Nenhuma opção valida foi inserida. "<<endl;
}