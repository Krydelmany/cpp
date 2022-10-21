#include <iostream>

using namespace std;

main(){setlocale(LC_ALL,"portuguese");

    float i, nota = 1, calc;

    for (i = 1; i <=5; i++){
    
    cout<<"Digite o número que ira somar: ";
    cin>>nota;
    calc+=nota;// a variavel calc irá receber nota e fazer nota + nota. EXEMPLO: nota + nota.. até 5 vezes como foi declarado em cima no 'for'
    }
    cout<<"Aqui está a soma com o loop:  "<<calc;

}