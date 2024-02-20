#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa muestra si un numero es par o impar"<<endl;
    cout << "Ingrese un Numero: ";
    int N, residuo;
    cin>>N;
    residuo = N%2;
    if (residuo == 0){
        cout<<N<<" Es par"<<endl;
    }else{
        cout<<N<<" Es impar"<<endl;
    }
    return 0;
}
