#include <iostream>     //Biblioteca normal
#include <locale>       //Biblioteca para o pacote em portugues com acento
#include <cstdlib>      //Biblioteca para o rand
#include <ctime>        //Biblioteca para o srand time 
using namespace std;

main()
{setlocale(LC_ALL, "Portuguese");
    char loop = 's' ;
 while (loop == 'S' or loop == 's'){ 
    cout<<"Jogo da adivinhação!"<<endl;
    cout<<"Escolha a dificuldade do jogo! "<<endl;
    cout<<"Fácil (F), Médio (M) ou Difícil (D)"<<endl;

    char dificuldade;
    cin>>dificuldade;

    int numero_de_tentativas;
        if(dificuldade == 'F' or dificuldade == 'f'){
        numero_de_tentativas = 15;
    }
        else if(dificuldade == 'M' or dificuldade == 'm'){
        numero_de_tentativas = 10;
    }
        else{
        numero_de_tentativas = 5;
    }
                           srand(time(NULL));
//Quando modifica uma declaração de dados, a const palavra-chave especifica que o objeto ou a variável não é modificável.
 const int numero_secreto = rand() %100 ; int chute;
 bool nao_acertou = true;
 int tentativas = 0;
 double pontos = 1000.0; //ela vai começar com 1000 pontos


for(tentativas = 1;tentativas <= numero_de_tentativas;tentativas++) {
    cout<<"Tentativa " <<tentativas<<endl;
    cout<<"Qual seu chute? ";
    cin>>chute;
//abs retorna o valor em positivo
    double pontos_perdidos = abs(chute - numero_secreto)/2.0; 
    pontos = pontos - pontos_perdidos;
//Essa palavra-chave é um tipo interno. Uma variável desse tipo pode ter valores true e false. Expressões condicionais têm o tipo bool e, portanto, os valores do tipo bool. Por exemplo, i != 0 agora tem true ou false dependendo do valor de i.
    bool acertou = chute == numero_secreto;
    bool maior = chute > numero_secreto;

    
    if (acertou){
        cout<<"Você acertou!"<<endl;
        nao_acertou = false;
        break;//vai parar o loop aqui
    }
    else if (maior){
        cout<<"Você errou! Tente menor"<<endl;
    }
    else{
        cout<<"Você errou! Tente maior"<<endl;
    }
}
cout<<"Fim de jogo!"<<endl;
    if(nao_acertou){    
        cout<<"Você perdeu, tente novamente!"<<endl;
}
else{
cout<<"Você acertou o número secreto em "<<tentativas<<" tentativas. "<<endl;
cout.precision(2);//aumenta o tanto de casa depois da virgula.
cout<<fixed;//fixa o numero de casas
cout<<"Sua pontuação foi de "<<pontos<<" pontos"<<endl;
}
    cout<<"Deseja tentar novamente? S/N: ";
    cin>>loop;
}
}