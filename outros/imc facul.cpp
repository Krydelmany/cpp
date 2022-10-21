#include <iostream>

using namespace std;

main()
{ setlocale(LC_ALL,"portuguese");



char loop;
float conta, peso, altura, altura_conta;
do{

    cout<<"Digite sua altura: ";
    cin>>altura;
    cout<<"Digite seu peso: ";
    cin>>peso;
    

    altura_conta = altura*altura;
    conta = peso/altura_conta;

        if (conta < 20 )
            cout<<"Abaixo do peso"<<endl;
        else if (conta >= 20 and conta < 25)
            cout<<"Peso normal! "<<endl;
        else if (conta >= 25 and conta < 30)
            cout<<"Sobre peso"<<endl;
        else if (conta > 30 and conta <= 40)
            cout<<"Obeso"<<endl;  
        else if (conta > 40)
            cout<<"Obeso Mórbido. "<<endl;
   cout<<"Deseja continuar? s/n "<<endl;
   cin>>loop;
           
} while (loop == 's' and 'S');
}











