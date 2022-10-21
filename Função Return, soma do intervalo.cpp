#include <iostream>
using namespace std;

int somaInterv(int n1, int n2){
    int total = 0;

    for (n1; n1<=n2; n1++){
        total+=n1;
    }
    return total;
}

main(){
    int n1, n2;
    cout<<"Digite primeiro valor: ";cin>>n1;
    cout<<"Digite segundo valor: ";cin>>n2;
    cout<<"A soma do intervalo de "<<n1<<" e "<<n2<<" = "<<somaInterv(n1,n2);
}
