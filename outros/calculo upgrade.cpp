#include <iostream> 

using namespace std;

main()
{setlocale(LC_ALL, "portuguese");
    int calc, num, num2;
    char loop;

do{
    cout<<"Digite o primeiro n�mero: ";
    cin>>num;
    while(num > 100){
            cout<<"Acima do limite, caso deseja fazer calculos acima de 100 fa�a um upgrade!"<<endl;
            num = 0;
            cout<<"Digite o primeiro n�mero: ";
            cin>>num;
                
}
    cout<<"Digite o segundo n�mero: ";
    cin>>num2;
    while(num2 > 100){
            cout<<"Acima do limite, caso deseja fazer calculos acima de 100 fa�a um upgrade!"<<endl;
            num2 = 0;      
            cout<<"Digite o segundo n�mero: ";
            cin>>num2;

}
                                            
    calc = num*num2;
    cout<<"O Resultado �: "<<num<<" x "<<num2<<" = "<<calc<<endl;
    cout<<"Deseja fazer outra divis�o? S/N: ";
    cin>>loop;
    cout<<endl;
}while (loop == 'S' or loop == 's');
}
