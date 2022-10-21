#include <iostream>
using namespace std;


//potencia, numero vezes um numero
int funPotencia(int base,int potencia){
    int  i , mult = 1;
    for(int i = 1;i>=potencia; i++){
    mult*=i;
    }
    return mult;
}

main(){
    int a,b;
    cout<<funPotencia(a,b);
}