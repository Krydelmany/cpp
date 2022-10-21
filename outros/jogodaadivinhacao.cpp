#include <iostream>     //Biblioteca normal
#include <locale>       //Biblioteca para o pacote em portugues com acento
#include <cstdlib>      //Biblioteca para o rand
#include <ctime>        //Biblioteca para o srand time 
using namespace std;

main()
{setlocale(LC_ALL, "Portuguese");
    char loop = 's' ;
 while (loop == 'S' or loop == 's'){ 
    cout<<"Jogo da adivinha��o!"<<endl;
    cout<<"Escolha a dificuldade do jogo! "<<endl;
    cout<<"F�cil (F), M�dio (M) ou Dif�cil (D)"<<endl;

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
//Quando modifica uma declara��o de dados, a const palavra-chave especifica que o objeto ou a vari�vel n�o � modific�vel.
 const int numero_secreto = rand() %100 ; int chute;
 bool nao_acertou = true;
 int tentativas = 0;
 double pontos = 1000.0; //ela vai come�ar com 1000 pontos


for(tentativas = 1;tentativas <= numero_de_tentativas;tentativas++) {
    cout<<"Tentativa " <<tentativas<<endl;
    cout<<"Qual seu chute? ";
    cin>>chute;
//abs retorna o valor em positivo
    double pontos_perdidos = abs(chute - numero_secreto)/2.0; 
    pontos = pontos - pontos_perdidos;
//Essa palavra-chave � um tipo interno. Uma vari�vel desse tipo pode ter valores true e false. Express�es condicionais t�m o tipo bool e, portanto, os valores do tipo bool. Por exemplo, i != 0 agora tem true ou false dependendo do valor de i.
    bool acertou = chute == numero_secreto;
    bool maior = chute > numero_secreto;

    
    if (acertou){
        cout<<"Voc� acertou!"<<endl;
        nao_acertou = false;
        break;//vai parar o loop aqui
    }
    else if (maior){
        cout<<"Voc� errou! Tente menor"<<endl;
    }
    else{
        cout<<"Voc� errou! Tente maior"<<endl;
    }
}
cout<<"Fim de jogo!"<<endl;
    if(nao_acertou){    
        cout<<"Voc� perdeu, tente novamente!"<<endl;
}
else{
cout<<"Voc� acertou o n�mero secreto em "<<tentativas<<" tentativas. "<<endl;
cout.precision(2);//aumenta o tanto de casa depois da virgula.
cout<<fixed;//fixa o numero de casas
cout<<"Sua pontua��o foi de "<<pontos<<" pontos"<<endl;
}
    cout<<"Deseja tentar novamente? S/N: ";
    cin>>loop;
}
}