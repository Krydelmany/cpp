#include <iostream>
#include <string.h>
using namespace std;

float funMedia (float n1, float n2){
    return (n1+n2)/2;
}

float funDiv (float n1, float n2){
    return n1/n2;
}

main(){
    float a, b; int choice;
    while (a != 0 or b != 0){
        cout<<"Escolha 1 para media ou 2 para divisao (0 para sair): ";
        cin>>choice;
        if (choice == 0)
        break;

    if (choice == 1){
        cout<<"Media A: ";cin>>a;
        if (a == 0)
        break;
        cout<<"Media B: ";cin>>b;        
        if (b == 0)
        break;

    cout<<funMedia(a,b)<<endl<<endl;

    }
    
    else if (choice == 2 ){
        cout<<"Div A: ";cin>>a;
        if (a == 0)
        break;
        cout<<"Div B: ";cin>>b;
        if (b == 0)
        break;
        cout<<funDiv(a,b)<<endl<<endl;
        }
    }
}