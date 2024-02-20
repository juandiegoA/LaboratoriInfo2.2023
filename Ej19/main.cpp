#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa muestra si un numero es primo"<<endl;
    int N, contador, resultados, sumatoria, aux;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    contador = 1;
    aux = N+1;
    sumatoria = 0;
    while (contador <= N) {
        resultados = N%contador;
        if(resultados==0){
            sumatoria = sumatoria + contador;
            if (sumatoria==aux){
                cout<<N<<" Es primo"<<endl;
        }
        }
        contador += 1;
    }
    return 0;
}
