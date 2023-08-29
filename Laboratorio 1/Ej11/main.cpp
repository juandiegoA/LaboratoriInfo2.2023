#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa calcula la tabla de multiplicar de un numero N, del 1 al 10"<<endl;
    int N,contador,resultados;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    contador = 1;
    while (contador <=10) {
        resultados = N*contador;
        cout<<contador<<"X"<<N<<"="<<resultados<<endl;
        contador += 1;
    }
    return 0;
}
