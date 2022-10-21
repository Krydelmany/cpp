#include <iostream>
using namespace std;

main()
{setlocale(LC_ALL,"portuguese");
    int media, cont = 0, contador;
int acumulador= 0;
    while ( media > 0 ){
        
        cout<<"Digite a media: ";
        cin>>media;

        acumulador+=media;
        if (media <= 0){
            break;
        }
        cont++;
    }
    
    cout<<acumulador/cont;

}