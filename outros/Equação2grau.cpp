#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

main(){setlocale(LC_ALL,"portuguese");
char lp = 'S';
while (lp == 'S'){
    double a,b,c, delta, x1, x2;
    cout<<"Digite o valor de A: ";
    cin>>a;
    cout<<"Digite o valor de B: ";
    cin>>b;
    cout<<"Digite o valor de C: ";
    cin>>c;
    cout<<endl;

    delta = (b*b)-4*a*c;
    cout<<"Raiz de delta = "<<sqrt(delta)<<endl;
    cout<<"Valor de delta = "<<delta<<endl;

    if(delta > 0){
        x1 = (-b+sqrt(delta))/2*a;
        x2 = (-b-sqrt(delta))/2*a;

        cout<<"O valor de x1: "<<x1<<endl;
        cout<<"O valor de x2: "<<x2<<endl;

    }
    if(delta < 0){
        cout<<"Delta negativo, não possui raizes "<<endl<<endl;
    }

cout<<"Deseja fazer outro calculo? S/N: ";
cin>>lp;
}
}