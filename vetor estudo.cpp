#include <iostream>
using namespace std;

void lerVec(int Vet[], int tam){
    for (int i=0; i<tam; i++){
        cin>>Vet[i];
    }
}

void imprimeVec(int Vet[], int tam){
    for (int i=0;i<10; i++){
        cout<<Vet[i]<<endl;
    }
}

main(){
    int Vet[100]; int tam = 10;
    
    lerVec(Vet, tam);
    cout<<endl;
    imprimeVec(Vet, tam);
}