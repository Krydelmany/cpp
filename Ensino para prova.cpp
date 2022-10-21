#include <iostream>
#include <locale>
using namespace std;


//Se for float ou int                      |                //Outro Jeito
/*                                         |                 
int nomedafuncao1(int n1, int n2){         |                int nomedafuncao2(int n1, int n2){                 
    int variaveldentrodafunc;              |                return n1+n2;
    variaveldentrodafunc = n1 + n2;        |                }
    return variaveldentrodafunc            |  
}                                          | 
*/
float funMedia (float n1, float n2){
    float soma;
    soma = (n1+n2)/2;
    return soma;
}

//Se for void, não necessariamente precisa de return.
/*                                         |              void nomedafuncao4(float tamanho){  
    void nomedafuncao3(){                  |               if (tamanho < 10)  
     cout<<"Algum texto. ";                |                    cout<<"Esse número é menor que 10. "; 
     cout<<"Mais algum texto? ";           |               else if (tamanho > 10 )
    return;                                |                    cout<<"Esse número é maior que 10. ";
                                           |               }      
*/              
   void funWithout(){
    cout<<"Olá, seja bem vindo! escolha uma opção para escolher alguma conta especifica."<<endl;
    cout<<"1 para ... 2 para ... e 3 para ..."<<endl;
 
}

void exemplofuncao4(int tamanho){  
 if (tamanho < 10)  
        cout<<"Esse número é menor que 10. "; 
      else if (tamanho > 10 )
        cout<<"Esse número é maior que 10. ";
      else if (tamanho == 10)
        cout<<"Esse número é 10";
  }      

int funSoma(int n1, int n2){
    return n1+n2;
}

main(){setlocale(LC_ALL,"portuguese");
    float a,b;

    funWithout();cout<<endl;
    cout<<"Digite A: ";cin>>a;
    cout<<"Digite B: ";cin>>b; cout<<endl;
    cout<<"A média do aluno será = "<<funMedia(a,b)<<endl<<endl;
    cout<<"A soma de A e B é = "<<funSoma(a,b)<<endl<<endl;
    exemplofuncao4(a); cout<<endl;
    exemplofuncao4(b); cout<<endl;
}