#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa entrega los divisores de un numero N"<<endl;
    int N,contador,respuestas;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    contador = 1;
    while (contador<=N) {
        respuestas = N%contador;
        if (respuestas==0){
            cout<<contador<<endl;
        }
        contador += 1;
    }
                   return 0;
}
