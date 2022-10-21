#include <iostream>
#include <locale>

using namespace std;


main(){setlocale(LC_ALL,"portuguese");
float valor, cont; char lp = 'S'; //lp vai receber o 'S'


cout<<"As notas disponiveis serão de 2, 5, 10, 50 e 100 reais."<<endl;
//para iniciar o loop o 'lp' precisa receber algo. por isso em cima foi definido que ele recebera 'S'//
while (lp == 'S' or lp == 's'){  // lp tem que ser igual a 'S' ou ele irá quebrar.
    cout<<"Informe o valor do saque: ";  
    cin>>valor;

    cont+=valor;    // vai receber o valor e fazer a soma

    if (valor < 10){
        cout<<"O valor minimo é de 10 reais."<<endl;
        break;
    }
    else if(valor > 600){
        cout<<"Valor maximo é de 600 reais."<<endl;
        break;
    }
    else{
        cout<<"Verifique a porta do caixa."<<endl;
    }

       

    cout<<"Deseja fazer outro saque? S/N: ";
    cin>>lp;    //o programa ira querer saber pq o loop ja foi iniciado com o lp recebendo 'S'

    }
    cout<<"O valor retirado foi: "<<cont<<endl; //mostra o valor total retirado

    return 0;
}