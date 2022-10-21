#include <iostream>
using namespace std;

float funGasolina(char tipo, float litro, float valor){
        
    if (tipo == 'A' or litro <= 20){
         cout<<"Desconto de 3%: "<<(litro*valor)*0.03;
    }
    if (tipo == 'A' or litro >= 20){
         cout<<"Desconto de 4%: "<<(litro*valor)*0.04;
    }
    else if (tipo == 'G' or litro <= 20){
       cout<<"Desconto de 3%: "<<(litro*valor)*0.03;
    }
    else if (tipo == 'G' or litro >= 20){
       cout<<"Desconto de 6%: "<<(litro*valor)*0.06;
    }
    else{
    cout<<"Não foi possivel indentificar! ";
    }
    
    return tipo,litro,valor;
        
}

main(){
    float a,b; char tipo;

    cout<<"insira o litro: ";cin>>a;
    cout<<"Insira o valor da gasolina: ";cin>>b;
    cout<<"Insira o tipo: ";cin>>tipo;
    cout<<funGasolina(a,b,tipo);

}