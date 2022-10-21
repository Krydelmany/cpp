#include <iostream>
#include <locale>
using namespace std;
/**Escreva um programa em C que leia um vetor G de 10 elementos caracter que 
 * representa o gabarito de uma prova. A seguir, para cada um dos 50 alunos da turma, 
 * leia o vetor de respostas (R) do aluno e conte o número de acertos. Mostre o nº 
 * de acertos do aluno e uma mensagem APROVADO, se a nota for maior ou igual a 6; e 
 * mostre uma mensagem de REPROVADO, caso contrário.*/

void alunoGabarito(int G[10] = {0}, int R[10] = {0}){
    int nota=0,acertos=0;

    for (int i=0; i<10; i++){
        cout<<"Gabarito certo: ";
        cin>>G[i];
    }
    cout<<endl;
    for (int j=0; j<5; j++){
        acertos = 0;
        for(int i=0; i<10; i++){
            cout<<"Resposta do aluno: ";
            cin>>R[i];
            if (R[i] == G[i]){
                acertos++;
            }
        }
        if(acertos >= 6)
            cout<<"\n\tAPROVADO\n\n";
        else
            cout<<"\n\tREPROVADO\n\n";
    }
    cout<<"\n\n\n";
}

main(){
    int G[10], R[10];

    alunoGabarito(G,R);
}