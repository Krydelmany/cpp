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

//Se for void, n�o necessariamente precisa de return.
/*                                         |              void nomedafuncao4(float tamanho){  
    void nomedafuncao3(){                  |               if (tamanho < 10)  
     cout<<"Algum texto. ";                |                    cout<<"Esse n�mero � menor que 10. "; 
     cout<<"Mais algum texto? ";           |               else if (tamanho > 10 )
    return;                                |                    cout<<"Esse n�mero � maior que 10. ";
                                           |               }      
*/              
   void funWithout(){
    cout<<"Ol�, seja bem vindo! escolha uma op��o para escolher alguma conta especifica."<<endl;
    cout<<"1 para ... 2 para ... e 3 para ..."<<endl;
 
}

void exemplofuncao4(int tamanho){  
 if (tamanho < 10)  
        cout<<"Esse n�mero � menor que 10. "; 
      else if (tamanho > 10 )
        cout<<"Esse n�mero � maior que 10. ";
      else if (tamanho == 10)
        cout<<"Esse n�mero � 10";
  }      

int funSoma(int n1, int n2){
    return n1+n2;
}

main(){setlocale(LC_ALL,"portuguese");
    float a,b;

    funWithout();cout<<endl;
    cout<<"Digite A: ";cin>>a;
    cout<<"Digite B: ";cin>>b; cout<<endl;
    cout<<"A m�dia do aluno ser� = "<<funMedia(a,b)<<endl<<endl;
    cout<<"A soma de A e B � = "<<funSoma(a,b)<<endl<<endl;
    exemplofuncao4(a); cout<<endl;
    exemplofuncao4(b); cout<<endl;
}