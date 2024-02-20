#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout<<"Este programa muestra las potencias de N a la 1 a N a la 5"<<endl;
    int N,contador,resultados;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    contador = 1;
    while (contador <= 5){
        resultados = pow(N,contador);
        cout<<N<<"^"<<contador<<"="<<resultados<<endl;
        contador += 1;
    }
    return 0;
}
