#include <iostream>

using namespace std;

int somaFun(int n1, int n2){  
    int soma;
    soma = n1+n2;
    return soma;
}

float divFun(float n1, float n2){  
    float soma;
    soma = n1/n2;
    return soma;
}

float tempFun(float n1){  
    float soma;
    soma = n1*1.8+32;
    return soma;
}

main(){setlocale(LC_ALL,"portuguese");
float a,b,c;
while (a != 0 and b != 0 and c != 0){
    if (a == 0 and b == 0)
    break;
cout<<"Digite N1: ";cin>>a;
cout<<"Digite N2: ";cin>>b;
cout<<"Digite em C para transformar em F: ";cin>>c;
cout<<"A soma é igual a "<<somaFun(a,b)<<endl;
cout<<"A divisão é igual a "<<divFun(a,b)<<endl;
cout.precision(10);
cout<<fixed;
cout<<"A temperatura em F= "<<tempFun(c)<<endl;

}
}