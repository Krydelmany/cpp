#include <iostream> 
#include <iostream>
#include <string>
using namespace std;

void soma(int, int);
void multiplicacao(int, int);
void divisao (float, float);

main(){setlocale (LC_ALL,"portuguese");
    int s1, s2, m1, m2; float d1, d2; int lp;

cout<<"Nos informe o que deseja fazer: '1' soma, '2' multiplicacao ou '3' divisao: ";cin>>lp;

    if (lp == 1){
        cout<<"Digite n1: ";cin>>s1;
        cout<<"Digite n1: ";cin>>s2;
    }
    else if (lp == 2){
        cout<<"Digite m1: ";cin>>m1;
        cout<<"Digite m2: ";cin>>m2;
    }
    else if (lp == 3){
        cout<<"Digite d1: ";cin>>d1;
        cout<<"Digite d2: ";cin>>d2;
    }
    

         if (lp == 1)
        soma(s1, s2);
    else if (lp == 2)
        multiplicacao(m1,m2);
    else if (lp == 3)
        divisao(d1, d2);
        else;
} //end main


void soma (int s1,int s2) {
    cout<<"O valor da soma = "<<s1+s2<<endl;
}

void multiplicacao (int m1,int m2) {
    cout<<"O valor da multiplicação = "<<m1*m2<<endl;
}

void divisao (float d1,float d2){
    cout<<"O valor da divisão = "<<d1/d2<<endl;
}