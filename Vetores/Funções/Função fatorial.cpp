#include <iostream>
#include <locale>
using namespace std;

float funFat(float num ){
    float fatorial = 1, x = 1;

        for(x; x<=num; x++){
        fatorial*=x;    
    }
    return fatorial;
}

main(){setlocale(LC_ALL,"portuguese");
float a; 

     while ( a != 0){

cout<<"Digite um n�mero para mostrar a fatorial ou (0) para sair: ";
cin>>a; cout<<endl;
    if (a == 0){
        break;
    }
    else
    cout<<"A fatorial de "<<a<<" � = "<<funFat(a)<<endl<<endl;
    }   
}

/*      C�digo sem func.

main(){setlocale(LC_ALL,"portuguese");
    int x = 1, num, fatorial = 1;
    
cout<<"Digite um n�mero para mostrar a fatorial: ";
cin>>num;


    for(x; x<=num; x++){
        fatorial*=x;    
    }

    cout<<"A fatorial de "<<num<<" � = ";
    cout<<fatorial<<endl<<endl;
    cout<<"o numero de "<<x<<" Outro numero "<<num;      */