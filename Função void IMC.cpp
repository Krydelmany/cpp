#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

void v_imc(float imc){
     if (imc < 20 )
            cout<<"Abaixo do peso"<<endl;
        else if (imc >= 20 and imc < 25)
            cout<<"Peso normal! "<<endl;
        else if (imc >= 25 and imc < 30)
            cout<<"Sobre peso"<<endl;
        else if (imc > 30 and imc <= 40)
            cout<<"Obeso"<<endl;  
        else if (imc > 40)
            cout<<"Obeso Mórbido. "<<endl;
}


main(){setlocale(LC_ALL,"portuguese");
    int data_nasc; float imc, peso, altura;
    string nome;

    cout<<"Informe seu nome:  "; cin>>nome; cout<<endl;
    cout<<"Informe sua idade: "; cin>>data_nasc; cout<<endl;
    cout<<"Informe seu peso: "; cin>>peso; cout<<endl;
    cout<<"Inform sua altura: "; cin>>altura; cout<<endl;

imc = peso/(altura*altura);
    v_imc(imc);

}



