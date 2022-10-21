#include <iostream>
#include <locale>
using namespace std;

void maior(float, float);
void parimpar(int);
void soma(float,float);

main(){setlocale(LC_ALL,"portuguese");
    float n1, n2; int par; float s1,s2; int escolha;
while (escolha != 0){
    cout<<"Digite '1' para ver qual número é maior"<<endl;
    cout<<"Digite '2' para ver se é par ou impar"<<endl;
    cout<<"Digite '3' para fazer a soma"<<endl;
    cout<<"Escolha alguma opção, ou digite 0 para fechar o programa: ";
    cin>>escolha;
    cout<<endl<<endl;

        if (escolha == 1){
    cout<<"Digite o valor 1: ";cin>>n1;
    cout<<"Digite o valor 2: ";cin>>n2;
}
        else if(escolha == 2){
    cout<<"Digite o numero que é par ou impar: ";cin>>par;
}
        else if(escolha == 3){
    cout<<"Digite o numero 1 para somar"<<endl;cin>>s1;
    cout<<"Digite o numero 2 para somar"<<endl;cin>>s2;
}

    if (escolha == 1)
        maior(n1,n2);
    else if (escolha == 2)    
        parimpar(par);
    else if(escolha == 3)
        soma(s1,s2);
        else;
    }
}///end main////


//maior ou menor
void maior(float a, float b){
    if (a>b)
        cout<<"O valor "<<a<<" é maior!\n\n"<<endl;
    else if (b>a)
        cout<<"O valor "<<b<<" é maior!\n\n"<<endl;
    else if(a==b)
        cout<<"Os valores são iguais!\n\n"<<endl;
}

//par ou impar
void parimpar(int a){
    if (a % 2 == 0){
        cout<<"O número "<<a<<" é par!\n\n"<<endl;
    }
    else
        cout<<"O número "<<a<<" é impar!\n\n"<<endl;
}

//soma
    void soma(float a, float b){
        cout<<"A soma será: "<<a+b<<endl<<endl<<endl;
}