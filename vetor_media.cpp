#include <iostream>

using namespace std;

float funMedia(int vet[], int tam){
    float soma = 0;

    for (int i = 0; i<10; i++){
    soma+=vet[i];
    
    }

    return soma;
}
void leitura(int Vet[], int tam){
    cout<<"Digite as médias para o vetor: ";
    for (int i=0; i<tam; i++){
        cin>>Vet[i];
    }
}

main(){setlocale(LC_ALL, "portuguese");
    int vet[100];
    int media;
    int tam = 10;
    int soma; 

    leitura(vet, tam);

    soma = funMedia(vet, tam);
    media = soma/tam;
    cout<<"Media: "<<media;

    return 0;
}