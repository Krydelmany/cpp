#include <iostream>

using namespace std;

main(){setlocale(LC_ALL,"portuguese");

    float i, nota = 1, calc;

for (i = 1; i <=5; i++){
    
    cout<<"Digite a média do aluno: ";
    cin>>nota;
    calc+=nota;// a variavel calc irá receber nota e fazer nota + nota. EXEMPLO: nota
    }
    cout<<"A média do aluno será: "<<calc/5;

}