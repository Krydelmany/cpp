#include <iostream>
#include <locale>

using namespace std;

main(){setlocale(LC_ALL,"portuguese");
    float soma, nota = 1, calc, cont = 0;


while (nota > 0){
    
    cout<<"Digite a nota do aluno: ";
    cin>>nota;
    if (nota != 0){
    cont++;
    calc+=nota; //calc vai receber nota
        }
    }
    cout<<"A média do seu aluno é: "<<calc/cont<<endl;
}