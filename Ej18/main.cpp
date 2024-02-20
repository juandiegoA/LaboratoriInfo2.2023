#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa determina si un numero es un cuedrado perfecto o no"<<endl;
    int contador, N, aux;
    cout<<"Ingrese un numero N para evaluar: "<<endl;
    cin>>N;
    contador = 1;
    while (contador!=N) {
        aux = contador*contador;
        if (aux==N){
            cout<<N<<" es un cuadrado perfecto"<<endl;
        }
        contador += 1;
    }
    return 0;
}
