#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    cout<<"Este programa intenta adivinar un numero del 1 al 100, guiandose por los parametros que el usuario le de"<<endl;
    char logico;
    int N= rand()%101;
    while(true){
        cout << "El numero es " << N << "?" << endl;
        cout << "No es: ";
        cin >> logico;
        if(logico== '>'){
            N = N+rand()%(101-N);
        }
        else if(logico == '<'){
            N = rand()%N+1;
        }
        else{
            break;
        }
    }
    cout<<endl<<"El numero es: "<<N<<endl;
    return 0;
}
