#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa muestra una sumatoria de 0 hasta el numero selecionado"<<endl;
    int N, contador, aux,resultado;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    contador = 0;
    aux = N;
    while (contador != N) {
        resultado = resultado + aux;
        aux -= 1;
        contador += 1;
    }
    cout<<"La sumatoria de 0 hasta "<<N<<" es: "<<resultado<<endl;
    return 0;
}
