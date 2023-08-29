#include <iostream>

using namespace std;

int main()
{
    int A, B, resultado;
    cout<<"Este programa muestra el residuo de una division"<<endl;
    cout<<"Ingrese un dato A: ";
    cin>>A;
    cout<<"Ingrese un dato B: ";
    cin>>B;
    resultado = A%B;
    cout<<"El residuo de la division "<<A<<"/"<<B<<" es "<<resultado<<endl;


    return 0;
}
