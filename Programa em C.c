#include <stdio.h>
#include <locale.h>

int main() {setlocale(LC_ALL,"portuguese");
    int teste = 1, teste2;
    printf("***********************************\n");
    printf("*Bem vindo ao Jogo da adivinhação!*\n");
    printf("***********************************\n");
    printf("Informe A: "); scanf("%i",&teste);
    printf("Informe B: "); scanf("%i",&teste2);
    printf("Soma: %i",teste+teste2);
}