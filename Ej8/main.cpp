#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa muestra el facotorial de un numero"<<endl;
    int N, contador, aux,resultado;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    contador = 0;
    aux = 1;
    resultado = 1;
    while (contador != N) {
        resultado = resultado * aux;
        aux += 1;
        contador += 1;
    }
    cout<<N<<"!"<<" es: "<<resultado<<endl;
    return 0;
}
