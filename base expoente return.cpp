#include <iostream>
using namespace std;

int potencia(int base, int expoente){
    int i; int pot = 1;

    for(i=1; i<=expoente; i++){
        pot*=base;
    }
return pot;
}

main(){
    int base, expoente;
    cout<<"Informe a base: ";cin>>base;
    cout<<"Informe o expoente: ";cin>>expoente;
    cout<<"A potencia de "<<base<<" elevado a "<<expoente<<" = "<<potencia(base,expoente);
}