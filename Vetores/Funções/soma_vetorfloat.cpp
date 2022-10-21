#include <iostream>

using namespace std;

float somaVetor(int vet[], int tam) {
    float soma = 0;
    for (int i = 0; i < tam; i++) {
        soma += vet[i];
    }
    return soma;
}

void leiaVetor(int vet[], int tam){
    for (int i = 0; i<=tam; i++){
        cin>>vet[i];
    }
}

int main()
{
    int vet[100];
    float soma;
    int tam = 10;
    float media;

    leiaVetor(vet,tam);

    soma = somaVetor(vet, tam);
    media = soma/tam;
    cout<<"Media: " << media;

    return 0;
}