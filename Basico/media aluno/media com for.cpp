#include <iostream>

using namespace std;

main(){setlocale(LC_ALL,"portuguese");

    float i, nota = 1, calc;

for (i = 1; i <=5; i++){
    
    cout<<"Digite a m�dia do aluno: ";
    cin>>nota;
    calc+=nota;// a variavel calc ir� receber nota e fazer nota + nota. EXEMPLO: nota
    }
    cout<<"A m�dia do aluno ser�: "<<calc/5;

}