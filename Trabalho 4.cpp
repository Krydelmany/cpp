#include <iostream>
#include <locale>
using namespace std;
/**
 * 3. Escreva um programa em C que leia um vetor de 20 posições e mostre- o. Em seguida, troque o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o 
 * antepenúltimo, e assim sucessivamente. Mostre o novo vetor depois da troca.
 */

void leitura(int Vet[], int tam){
    cout<<"Digite os valores para o vetor: ";
    for (int i=0; i<tam; i++){
        cin>>Vet[i];
    }
}

void troca(int Vet[], int tam){
int aux = Vet[0];

    for (int i=0; i<tam-1; i++){
        Vet[i] = Vet[i+1];
    }
    Vet[tam-1]=aux;
}

void imprime (int Vet[], int tam){
    for (int i=0; i<10; i++)
        cout<<Vet[i]<<endl;
}

    main(){
        int vet[100]; int tam = 10;
        leitura(vet, tam);
        imprime(vet, tam);
        cout<<" "<<endl;
        troca(vet, tam);
        imprime(vet, tam);   
        system("pause");
    }